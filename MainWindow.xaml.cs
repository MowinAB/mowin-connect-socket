using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using AdkNetWrapper;
using System.Reflection;
using Newtonsoft.Json;
using WebSocket4Net;
using SuperSocket.ClientEngine;
using IronBarCode;
using System.Drawing;
using System.Drawing.Imaging;
using System.Runtime.InteropServices;
using System.IO;
using System.Windows.Threading;

namespace MowinSocketClient
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        WebSocket websocket;

        private void websocket_Opened(object sender, EventArgs e)
        {
            var responseToSend = new Request();
            responseToSend.messageType = GetName(messageType.auth);
            responseToSend.method = "connected";
            responseToSend.@params = new List<Param>();
            websocket.Send(JsonConvert.SerializeObject(responseToSend));
        }

        private string GetName(messageType value)
        {
            return Enum.GetName(typeof(messageType), value);
        }

        enum messageType
        {
            none,
            error,
            auth,
            mowin,
            visma
        }

        private messageType isValidMessage(MessageReceivedEventArgs e)
        {

            try
            {
                    dynamic sra = JsonConvert.DeserializeObject<dynamic>(e.Message);

                if (sra["messageType"] == null)
                {
                    return messageType.none;
                }

                if (sra["messageType"] == "auth")
                {
                    return messageType.auth;
                }

                if (sra["messageType"] == "mowin")
                {
                    return messageType.mowin;
                }
                /*
                if (sra["method"] == null)
                {
                    return messageType.none;
                }
                if (sra["params"] != null)
                {
                    return messageType.none;
                }
                */
                if (sra["messageType"] == "visma")
                {
                    return messageType.visma;
                }


                return messageType.none;
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                return messageType.none;
            }
        }
        private void websocket_MessageReceived(object sender, MessageReceivedEventArgs e)
        {
            Console.WriteLine(e.Message);


            try
            {

                if (isValidMessage(e) == messageType.auth)
                {

                    var response = authenticate(e.Message);
                    websocket.Send(JsonConvert.SerializeObject(response));
                }

                if (isValidMessage(e) == messageType.mowin)
                {

                }

                if (isValidMessage(e) == messageType.visma)
                {
                    Console.WriteLine("lets run visma command");
                    var response = runSingleCommand(e.Message);
                    websocket.Send(JsonConvert.SerializeObject(response));
                }

            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                try
                {
                    var responseToSend = new responseClass();
                    responseToSend.pData = null;
                    responseToSend.errorMessage = ex.Message;
                    responseToSend.errorInnerMessage = ex.InnerException.Message;
                }
                catch (Exception eSender)
                {

                }
            }

        }

        private Request authenticate(string jsonString)
        {
            try
            {

                Request sra = JsonConvert.DeserializeObject<Request>(jsonString);

                var responseToSend = new Request();
                responseToSend.messageType = sra.messageType;
                responseToSend.method = sra.method;
                var reqParams = new List<Param>();

                if (sra.method == "setClientId")
                {
                    reqParams.Add(new Param(type: "string", value: Properties.Settings.Default.appGuid));
                }

                if (sra.method == "setOrganizationId")
                {
                    if (sra.@params.Count < 1)
                    {
                        string guid = Properties.Settings.Default.appGuid;
                        System.Diagnostics.Process.Start("http://localhost/connect-visma-admin/" + guid);
                    }
                    reqParams.Add(new Param(type: "string", value: Properties.Settings.Default.appGuid));
                }


                responseToSend.@params = reqParams;
                return responseToSend;

            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);

                var responseToSend = new Request();
                responseToSend.messageType = GetName(messageType.error);
                responseToSend.method = "error";
                responseToSend.@params = new List<Param>();
                return responseToSend;
            }
        }

        private void websocket_Error(object sender, SuperSocket.ClientEngine.ErrorEventArgs e)
        {
            Console.WriteLine(e.Exception.Message);
            Console.WriteLine(e.Exception.InnerException);
        }

        private void websocket_Closed(object sender, EventArgs e)
        {
            //this.Close();
        }
        public MainWindow()
        {
            InitializeComponent();
            
            if(Properties.Settings.Default.appGuid.Length < 1)
            {
                generateNewAppGuid();
            }
            
            string guid = Properties.Settings.Default.appGuid;
            connectLinkLabel.NavigateUri = new Uri("http://localhost/connect-visma-admin/" + guid);
            
            using (var ms = new MemoryStream())
            {
                QRCodeWriter.CreateQrCode(guid, 500, QRCodeWriter.QrErrorCorrectionLevel.Medium).Image.Save(ms, ImageFormat.Bmp);
                ms.Seek(0, SeekOrigin.Begin);

                var bitmapImage = new BitmapImage();
                bitmapImage.BeginInit();
                bitmapImage.CacheOption = BitmapCacheOption.OnLoad;
                bitmapImage.StreamSource = ms;
                bitmapImage.EndInit();
                qrCodeImage.Source = bitmapImage;
            }

            websocket = new WebSocket("ws://localhost:7071", "", null, null, "", "", WebSocketVersion.None, null, System.Security.Authentication.SslProtocols.None, 0)
            {
                EnableAutoSendPing = true,
                AutoSendPingInterval = 10,
            };
            
            
            websocket.Opened += new EventHandler(websocket_Opened);
            websocket.Error += new EventHandler<SuperSocket.ClientEngine.ErrorEventArgs>(websocket_Error);
            websocket.Closed += new EventHandler(websocket_Closed);
            websocket.MessageReceived += new EventHandler<MessageReceivedEventArgs>(websocket_MessageReceived);
            websocket.Open();

            DispatcherTimer timer = new DispatcherTimer();
            timer.Interval = TimeSpan.FromSeconds(1);
            timer.Tick += Socket_Reconnect_Tick;
            timer.Start();

        }

        private void Socket_Reconnect_Tick(object sender, EventArgs e)
        {
            if (websocket.State == WebSocketState.Closed)
            {
                websocket.Open();
                System.Diagnostics.Debug.WriteLine("Trying to reconnect by timer");
            }
        }

        private void Hyperlink_Click(object sender, RoutedEventArgs e)
        {

            // open URL
            Hyperlink source = sender as Hyperlink;

            if (source != null)
            {
                System.Diagnostics.Process.Start(source.NavigateUri.ToString());
            }

        }
        private bool generateNewAppGuid()
        {
            string guid = generateID();
            //https://mowin.com/connect-visma-admin/
            Properties.Settings.Default.appGuid = guid;
            Properties.Settings.Default.Save();
            return true;
        }
        public string generateID()
        {
            return string.Format("{0}_{1:N}","", Guid.NewGuid());
        }
 
      

        public responseClass runSingleCommand(string jsonString)
        {
            try
            {

                Request sra = JsonConvert.DeserializeObject<Request>(jsonString);
                Console.WriteLine("Deserialized successfully");

                Type type = typeof(Api);

                MethodInfo mainMethod = type.GetMethod(sra.method);
                List<object> mainMethodParams = new List<object>();

                for (int i = 0; i < sra.@params.Count; i++)
                {
                    //Convert value to correct format
                    var tmpParam = sra.@params[i].value;

                    if (sra.@params[i].type == "id")
                    {
                        tmpParam = type.GetField(sra.@params[i].value.ToString()).GetValue(null);
                    }
                    else if (sra.@params[i].type == "int" || sra.@params[i].type == "int32")
                    {
                        tmpParam =  Convert.ToInt32(tmpParam);
                    }
                    else if (sra.@params[i].type == "int64" || sra.@params[i].type == "long")
                    {
                        tmpParam = Convert.ToInt64(tmpParam);
                    }
                    else if (sra.@params[i].type == "double")
                    {
                        tmpParam = Convert.ToDouble(tmpParam);
                    }
                    else if (sra.@params[i].type == "ref")
                    {
                        tmpParam = new String(' ', Convert.ToInt32(tmpParam)) as object;
                    }

                    mainMethodParams.Add(tmpParam);
                    
                }

                var args = mainMethodParams.ToArray();

                var result = mainMethod.Invoke(this, args);

                var responseToSend = new responseClass();
                if (!(result is Api.ADKERROR)) responseToSend.pData = result;
                if (result is Api.ADKERROR)
                {
                    responseToSend.ADKERROR = (Api.ADKERROR)result;
                    Api.ADKERROR error = ((Api.ADKERROR)result);
                    if (error.lRc != 0)
                    {
                        String errortext = new String(' ', 200);
                        int errtype = (int)AdkNetWrapper.Api.ADK_ERROR_TEXT_TYPE.elRc;
                        AdkNetWrapper.Api.AdkGetErrorText(ref error, errtype, ref errortext, 200);
                        responseToSend.errorVismaMessage = errortext;
                        Console.WriteLine(errortext);
                    }
                    else
                    {
                        if(mainMethodParams.Count > 2) responseToSend.getValue = args;
                        responseToSend.successMessage = "200";
                        Console.WriteLine("200");
                    }
                }
                else
                {
                    if (mainMethodParams.Count > 2) responseToSend.getValue = args;
                    responseToSend.successMessage = "200";
                    Console.WriteLine("200");
                }
                return responseToSend;

            }
            catch (Exception e)
            {
                Console.WriteLine("aj");
                Console.WriteLine(e.Message);
                Console.WriteLine(e.InnerException.Message);

                var responseToSend = new responseClass();
                responseToSend.pData = null;
                responseToSend.errorMessage = e.Message;
                responseToSend.errorInnerMessage = e.InnerException.Message;

                return responseToSend;
            }

        }

        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            websocket.Close();
            
        }
    }
    public class responseClass
    {
        public object pData { get; set; }
        public object ADKERROR { get; set; }
        public object getValue { get; set; }
        public string successMessage { get; set; }
        public string errorVismaMessage { get; set; }
        public string errorMessage { get; set; }
        public string errorInnerMessage { get; set; }
    }

    public class Request
    {
        public string messageType { get; set; }
        public string method { get; set; }
        public List<Param> @params { get; set; }

        
    }
    public class Param
    {
        public Param(string type, string value)
        {
            this.type = type;
            this.value = value;
        }

        public string type { get; set; }
        public object value { get; set; }
    }
    /*
     {
              'method':'AdkOpen',
              'params':[
                {
                  'type':'string',
                  'value':'C:\ProgramData\SPCS\SPCS Administration\Gemensamma filer'
                },
                {
                  'type':'string',
                  'value':'C:\ProgramData\SPCS\SPCS Administration\Företag\Ovnbol2000'
                }
                ]
        }
        */
}

