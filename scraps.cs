using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
namespace MowinSocketClient2
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        WebSocket websocket;

        private void websocket_Opened(object sender, EventArgs e)
        {
            websocket.Send("Hello World!");
            Console.WriteLine("yay");
        }
        private void websocket_MessageReceived(object sender, MessageReceivedEventArgs e)
        {
            Console.WriteLine(e.Message);

            try
            {
                string myJsonResponse = e.Message;
                var response = runSingleCommand(myJsonResponse);
                websocket.Send(JsonConvert.SerializeObject(response));
                /*
                string myJsonResponse = @"{
                  'method':'AdkOpen',
                  'params':[
                    {
                      'isId':false,
                      'value':'C:\\ProgramData\\SPCS\\SPCS Administration\\Gemensamma filer'
                    },
                    {
                      'isId':false,
                      'value':'C:\\ProgramData\\SPCS\\SPCS Administration\\Företag\\Ovnbol2000'
                    }
                    ]
                }";
                var response = runSingleCommand(myJsonResponse);
                var responseToSend = new responseClass();

                if (response is AdkNetWrapper.Api.ADKERROR)
                {

                }
                    responseToSend.pData = response;
                try
                {
                    if ((int)response != 0)
                    {
                        //error
                        responseToSend.errorMessage = "error!!!!";
                    }
                    else
                    {
                        //success
                        responseToSend.successMessage = "success!!!!";
                    }
                }
                catch (Exception)
                {
                    responseToSend.errorMessage = "error!!!!";
                }

                string json = JsonConvert.SerializeObject(responseToSend);
                websocket.Send(json);
                * /
            }
            catch (Exception ex)
            {

            }

        }

        private void websocket_Error(object sender, ErrorEventArgs e)
        {
            Console.WriteLine(e.Exception.Message);
            Console.WriteLine(e.Exception.InnerException);
        }

        private void websocket_Closed(object sender, EventArgs e)
        {

        }
        public MainWindow()
        {
            InitializeComponent();

            websocket = new WebSocket("wss://echo.websocket.org:443", "", null, null, "", "", WebSocketVersion.None, null, System.Security.Authentication.SslProtocols.Tls12, 0);
            websocket.Opened += new EventHandler(websocket_Opened);
            websocket.Error += new EventHandler<ErrorEventArgs>(websocket_Error);
            websocket.Closed += new EventHandler(websocket_Closed);
            websocket.MessageReceived += new EventHandler<MessageReceivedEventArgs>(websocket_MessageReceived);
            websocket.Open();


            /*
            string jsonConnect = @"{
              'method':'AdkOpen',
              'params':[
                {
                  'type':'string',
                  'value':'C:\\ProgramData\\SPCS\\SPCS Administration\\Gemensamma filer'
                },
                {
                  'type':'string',
                  'value':'C:\\ProgramData\\SPCS\\SPCS Administration\\Företag\\Ovnbol2000'
                }
                ]
            }";

            var connectResponse = runSingleCommand(jsonConnect);
            Console.WriteLine(JsonConvert.SerializeObject(connectResponse));
            //Console.WriteLine(connectResponse);

            /*
            string myJsonResponse2 = @"{
              'method':'AdkClose',
              'params':[]
            }";

            response = runSingleCommand(myJsonResponse2);
            Console.WriteLine(response);
            
            * /


            
            string myJsonResponse = @"{
              'method':'AdkCreateData',
              'params':[
                {
                  'type':'id',
                  'value':'ADK_DB_CODE_OF_ARTICLE_GROUP'
                }
                ]
            }";
            var pData = runSingleCommand(myJsonResponse).pData;
            Console.WriteLine("pData: " + pData);
            
            string myJsonResponse2 = @"{
              'method':'AdkSetStr',
              'params':[
                {
                  'type':'int',
                  'value':'" + pData.ToString() + @"'
                },
                {
                  'type':'id',
                  'value':'ADK_CODE_OF_ARTICLE_GROUP_TEXT'
                },
                {
                  'type':'string',
                  'value':'tessss'
                }
                ]
            }";

            var thisIsVoid = runSingleCommand(myJsonResponse2);
            Console.WriteLine(JsonConvert.SerializeObject(thisIsVoid));
            Console.WriteLine("thisIsVoid: " + thisIsVoid);
            
            //runBatchCommand();
            * /
        }


        public responseClass runSingleCommand(string jsonString)
        {
            try
            {

                singleRequestAction sra = JsonConvert.DeserializeObject<singleRequestAction>(jsonString);

                Type type = typeof(Api);


                MethodInfo mainMethod = type.GetMethod(sra.method);
                List<object> mainMethodParams = new List<object>();
                //var mainMethodParams = new object[] { type.GetField(ra.iDataBaseId).GetValue(null) };
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
                        tmpParam = Convert.ToInt32(tmpParam);
                    }
                    else if (sra.@params[i].type == "int64" || sra.@params[i].type == "long")
                    {
                        tmpParam = Convert.ToInt64(tmpParam);
                    }
                    else if (sra.@params[i].type == "double")
                    {
                        tmpParam = Convert.ToDouble(tmpParam);
                    }

                    mainMethodParams.Add(tmpParam);
                }

                var result = mainMethod.Invoke(this, mainMethodParams.ToArray());

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
                    }
                    else
                    {
                        responseToSend.successMessage = "200";
                    }
                }
                else
                {
                    responseToSend.successMessage = "200";
                }
                return responseToSend;
                //return mainMethod.Invoke(this, mainMethodParams.ToArray());

            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);

                var responseToSend = new responseClass();
                responseToSend.pData = null;
                responseToSend.errorMessage = e.Message;
                responseToSend.errorInnerMessage = e.InnerException.Message;

                return responseToSend;
            }

        }
        /*
        public void runBatchCommand()
        {
            //Test request
            /*
            requestAction ra = new requestAction();
            ra.mainMethod = "AdkCreateData";
            ra.iDataBaseId = "ADK_DB_CODE_OF_ARTICLE_GROUP";
            ra.commitMethod = "AdkAdd";
            ra.@params = new List<Param>();
            ra.@params.Add(new Param() { method = "AdkSetStr", iFieldId = "ADK_CODE_OF_ARTICLE_GROUP_CODE", value = "Tid3" });
            ra.@params.Add(new Param() { method = "AdkSetStr", iFieldId = "ADK_CODE_OF_ARTICLE_GROUP_TEXT", value = "Arbetstider3" });
            * / 
            string myJsonResponse = @"{
              'mainMethod':'AdkCreateData',
              'iDataBaseId':'ADK_DB_CODE_OF_ARTICLE_GROUP',
              'commitMethod':'AdkAdd',
              'params':[
                {
                  'method':'AdkSetStr',
                  'iFieldId':'ADK_CODE_OF_ARTICLE_GROUP_CODE',
                  'value':'Tid4'
                },
                {
                  'method':'AdkSetStr',
                  'iFieldId':'ADK_CODE_OF_ARTICLE_GROUP_TEXT',
                  'value':'Arbetstider4'
                }
                ]
            }";

            requestAction ra = JsonConvert.DeserializeObject<requestAction>(myJsonResponse);



            //connect to Visma
            String SysPath = @"C:\ProgramData\SPCS\SPCS Administration\Gemensamma filer";
            String SysFtg = @"C:\ProgramData\SPCS\SPCS Administration\Företag\Ovnbol2000";
            String SysUsername = ""; //Properties.Settings.Default.VismaUsername != null ? Properties.Settings.Default.VismaUsername : "";
            String SysPwd = ""; //Properties.Settings.Default.VismaPassword != null ? Properties.Settings.Default.VismaPassword : "";

            //set correct path to dll's
            Environment.SetEnvironmentVariable("PATH", Environment.GetEnvironmentVariable("PATH") + ";" + SysPath);

            //Load Api class for eval
            Type type = typeof(Api);

            //open visma connection
            MethodInfo theMethod = type.GetMethod("AdkOpen");
            var objects = new object[] { SysPath, SysFtg };
            var obj = (Api.ADKERROR)theMethod.Invoke(this, objects);
            Console.WriteLine(obj.lRc);

            int pData = 0;

            MethodInfo mainMethod = type.GetMethod(ra.mainMethod);
            var mainMethodParams = new object[] { type.GetField(ra.iDataBaseId).GetValue(null) };
            pData = (int)mainMethod.Invoke(this, mainMethodParams);
            Console.WriteLine(pData);

            for (int i = 0; i < ra.@params.Count; i++)
            {
                MethodInfo paramMethod = type.GetMethod(ra.@params[i].method);
                var paramMethodParams = new object[] { pData, type.GetField(ra.@params[i].iFieldId).GetValue(null), ra.@params[i].value };
                paramMethod.Invoke(this, paramMethodParams);
            }

            MethodInfo commitMethod = type.GetMethod(ra.commitMethod);
            var commitMethodParams = new object[] { pData };
            var error = (Api.ADKERROR)commitMethod.Invoke(this, commitMethodParams);
            Console.WriteLine(error.lRc);


            MethodInfo closeMethod = type.GetMethod("AdkClose");
            closeMethod.Invoke(this, null);

        }
        * /
    }
    public class responseClass
    {
        public object pData { get; set; }
        public object ADKERROR { get; set; }
        public string successMessage { get; set; }
        public string errorVismaMessage { get; set; }
        public string errorMessage { get; set; }
        public string errorInnerMessage { get; set; }
    }

    public class singleRequestAction
    {
        public string method { get; set; }
        public List<singleParam> @params { get; set; }
    }
    public class singleParam
    {
        public string type { get; set; }
        public object value { get; set; }
    }


    public class requestAction
    {
        public string mainMethod { get; set; }
        public string iDataBaseId { get; set; }
        public string commitMethod { get; set; }
        public List<Param> @params { get; set; }
    }
    public class Param
    {
        public string method { get; set; }
        public string iFieldId { get; set; }
        public string value { get; set; }
    }


    // requestAction myDeserializedClass = JsonConvert.DeserializeObject<requestAction>(myJsonResponse); 
    /*
    {
      "mainMethod":"AdkCreateData",
      "iDataBaseId":"ADK_DB_CODE_OF_ARTICLE_GROUP",
      "commitMethod":"AdkAdd",
      "params":[
        {
          "method":"AdkSetStr",
          "iFieldId":"ADK_CODE_OF_ARTICLE_GROUP_CODE",
          "value":"Tid"
        },
        {
          "method":"AdkSetStr",
          "iFieldId":"ADK_CODE_OF_ARTICLE_GROUP_TEXT",
          "value":"Arbetstider"
        }
        ]
    }
    * /

}
*/