#ifndef _ADK_H_
#define _ADK_H_

#include <wtypes.h>

#include "AdkError.h"

typedef long ADK_HANDLE;

const int ADKI_ADMIN2000                                   =1;
const int ADKI_ADMIN1000                                   =2;
const int ADKI_ADMIN500                                    =3;
const int ADKI_FORENING                                    =4;
const int ADKI_ADMIN200									   =5;

#define MAX_ELEMENTS 200
#define MAX_FIELD 200

#define ADK_DB_CUSTOMER                                          0
#define ADK_DB_ARTICLE                                           1
#define ADK_DB_ORDER_HEAD                                        2
#define ADK_DB_ORDER_ROW                                         3
#define ADK_DB_OFFER_HEAD                                        4
#define ADK_DB_OFFER_ROW                                         5
#define ADK_DB_INVOICE_HEAD                                      6
#define ADK_DB_INVOICE_ROW                                       7
#define ADK_DB_SUPPLIER_INVOICE_HEAD                             8
#define ADK_DB_SUPPLIER_INVOICE_ROW                              9
#define ADK_DB_PROJECT                                          10
#define ADK_DB_ACCOUNT                                          11
#define ADK_DB_SUPPLIER                                         12
#define ADK_DB_CODE_OF_TERMS_OF_DELIVERY                        13
#define ADK_DB_CODE_OF_WAY_OF_DELIVERY                          14
#define ADK_DB_CODE_OF_TERMS_OF_PAYMENT                         15
#define ADK_DB_CODE_OF_LANGUAGE                                 16
#define ADK_DB_CODE_OF_CURRENCY                                 17
#define ADK_DB_CODE_OF_CUSTOMER_CATEGORY                        18
#define ADK_DB_CODE_OF_DISTRICT                                 19
#define ADK_DB_CODE_OF_SELLER                                   20
#define ADK_DB_DISCOUNT_AGREEMENT                               21
#define ADK_DB_CODE_OF_ARTICLE_GROUP                            22
#define ADK_DB_CODE_OF_ARTICLE_ACCOUNT                          23
#define ADK_DB_CODE_OF_UNIT                                     24
#define ADK_DB_CODE_OF_PROFIT_CENTRE                            25
#define ADK_DB_CODE_OF_PRICE_LIST                               26
#define ADK_DB_PRM                                              27
#define ADK_DB_INVENTORY_ARTICLE                                28
#define ADK_DB_MANUAL_DELIVERY_IN                               29
#define ADK_DB_MANUAL_DELIVERY_OUT                              30
#define ADK_DB_DISPATCHER										31
#define ADK_DB_BOOKING_HEAD										32
#define ADK_DB_BOOKING_ROW										33
#define ADK_DB_CODE_OF_CUSTOMER_DISCOUNT_ROW					34
#define ADK_DB_CODE_OF_ARTICLE_PARCEL							35
#define ADK_DB_CODE_OF_ARTICLE_NAME								36
#define ADK_DB_PRICE											37
#define ADK_DB_ARTICLE_PURCHASE_PRICE							38
#define ADK_DB_CODE_OF_WAY_OF_PAYMENT							39
#define ADK_DB_FREE_CATEGORY_1									40 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_2									41 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_3									42 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_4									43 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_5									44 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_6									45 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_7									46 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_8									47 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_9									48 //SPCS Förening
#define ADK_DB_FREE_CATEGORY_10									49 //SPCS Förening
#define ADK_DB_MEMBER                                           50 //SPCS Förening
#define ADK_DB_DELIVERY_NOTE_HEAD								51
#define ADK_DB_DELIVERY_NOTE_ROW								52
#define ADK_DB_PACKAGE_HEAD                                     53
#define ADK_DB_PACKAGE_ROW                                      54
#define ADK_DB_IMP_PACKAGE_HEAD                                 55
#define ADK_DB_IMP_PACKAGE_ROW                                  56
#define ADK_DB_DELIVERY_ADDRESS                                 57
#define ADK_DB_PRM2												58
#define ADK_DB_CODE_OF_YOUR_REF_CUSTOMER						59
#define ADK_DB_CODE_OF_YOUR_REF_SUPPLIER						60
#define ADK_DB_CODE_OF_COUNTRY_CODE								61
#define ADK_DB_CUSTOMERPAYMENT									62
#define ADK_DB_CODE_OF_ADJUSTMENT_CODE							63
#define ADK_DB_SUPPLIERPAYMENT									64
#define ADK_DB_VERIFICATION_HEAD								65
#define ADK_DB_VERIFICATION_ROW									66
#define ADK_DB_CODE_OF_BOOKINGYEAR								67
#define ADK_DB_CODE_OF_DISCOUNT_CODE							68
#define ADK_DB_CONTACT											69
#define ADK_DB_CODE_OF_CONTACT_TITLES							70
#define ADK_DB_CODE_OF_CONTACT_GROUPS							71
#define ADK_DB_CODE_OF_CONTACT_GROUP_CONTACTS					72
#define ADK_DB_TAX_REDUCTION									73
#define ADK_DB_AGREEMENT_HEAD									74
#define ADK_DB_AGREEMENT_ROW									75
#define ADK_DB_TAX_REDUCTION_ORDER								76
#define ADK_DB_TAX_REDUCTION_AVTAL								77
#define ADK_DB_VERIFICATION_SERIES								78
#define ADK_DB_BOOKKEEPINGHIST									79
#define ADK_DB_PERIODIC_ADJUSTMENT								80
#define ADK_DB_CUSTOMER_ARTICLE									81
#define ADK_DB_ATTACHMENT_INFO									82
#define ADK_DB_TAX_REDUCTION_TYPES								83
#define ADK_DB_PRM3												84

#define ADK_CUSTOMER_FIRST                                       0          
#define ADK_CUSTOMER_NUMBER                                      0              //eChar 
#define ADK_CUSTOMER_NAME                                        1              //eChar 
#define ADK_CUSTOMER_SHORT_NAME                                  2              //eChar 
#define ADK_CUSTOMER_MAILING_ADDRESS                             3              //eChar 
#define ADK_CUSTOMER_MAILING_ADDRESS2                            4              //eChar
#define ADK_CUSTOMER_VISITING_ADDRESS                            5              //eChar 
#define ADK_CUSTOMER_ZIPCODE	                                 6              //eChar 
#define ADK_CUSTOMER_CITY                                        7              //eChar 
#define ADK_CUSTOMER_COUNTRY	                                 8              //eChar 
#define ADK_CUSTOMER_TELEPHONE  	                             9              //eChar 
#define ADK_CUSTOMER_TELEPHONE2	                                10              //eChar 
#define ADK_CUSTOMER_FAX                                        11              //eChar 
#define ADK_CUSTOMER_DELIVERY_NAME                              12              //eChar 
#define ADK_CUSTOMER_DELIVERY_ADDRESS                           13              //eChar 
#define ADK_CUSTOMER_DELIVERY_ADDRESS2                          14              //eChar 
#define ADK_CUSTOMER_DELIVERY_VISITING_ADDRESS                  15              //eChar 
#define ADK_CUSTOMER_DELIVERY_ZIPCODE                           16              //eChar 
#define ADK_CUSTOMER_DELIVERY_CITY                              17              //eChar 
#define ADK_CUSTOMER_DELIVERY_COUNTRY                           18              //eChar 
#define ADK_CUSTOMER_DELIVERY_TELEPHONE                         19              //eChar 
#define ADK_CUSTOMER_DELIVERY_TELEPHONE2	                    20              //eChar 
#define ADK_CUSTOMER_DELIVERY_FAX                               21              //eChar 
#define ADK_CUSTOMER_REFERENCE                                  22              //eChar 
#define ADK_CUSTOMER_BGIRO	                                    23              //eChar 
#define ADK_CUSTOMER_PGIRO                                      24              //eChar 
#define ADK_CUSTOMER_ORGANISATION_NUMBER	                    25              //eChar 
#define ADK_CUSTOMER_CATEGORY                                   26              //eChar 
#define ADK_CUSTOMER_DISTRICT                                   27              //eChar 
#define ADK_CUSTOMER_SELLER                                     28              //eChar 
#define ADK_CUSTOMER_CODE_OF_TERMS_OF_DELIVERY                  29              //eChar 
#define ADK_CUSTOMER_CODE_OF_TERMS_OF_PAYMENT                   30              //eChar 
#define ADK_CUSTOMER_CODE_OF_WAY_OF_DELIVERY                    31              //eChar 
#define ADK_CUSTOMER_REMINDER                                   32              //eBool 
#define ADK_CUSTOMER_DEMAND_FEE                                 33              //eBool 
#define ADK_CUSTOMER_INTEREST_INVOICE                           34              //eBool 
#define ADK_CUSTOMER_DISPATCH_FEE                               35              //eBool 
#define ADK_CUSTOMER_CARGO_FEE                                  36              //eBool 
#define ADK_CUSTOMER_CODE_OF_CURRENCY                           37              //eChar 
#define ADK_CUSTOMER_CODE_OF_LANGUAGE                           38              //eChar 
#define ADK_CUSTOMER_DISCOUNT_AGREEMENT 	                    39              //eChar 
#define ADK_CUSTOMER_NOTE_OF_OUTSTANDING_ORDERS                 40              //eBool 
#define ADK_CUSTOMER_EXPORT	                                    41              //eBool 
#define ADK_CUSTOMER_LAST_INVOICE_DATE                          42              //eDate
#define ADK_CUSTOMER_PRICE_LIST                                 43              //eChar 
#define ADK_CUSTOMER_INVOICE_DISCOUNT                           44              //eDouble
#define ADK_CUSTOMER_ROW_DISCOUNT                               45              //eDouble
#define ADK_CUSTOMER_REMARK1                                    46              //eChar 
#define ADK_CUSTOMER_REMARK2                                    47              //eChar 
#define ADK_CUSTOMER_CREDIT_LIMIT                               48              //eDouble
#define ADK_CUSTOMER_ACCUMULATE_TURNOVER_THIS_YEAR              49              //eDouble
#define ADK_CUSTOMER_ACCUMULATE_TURNOVER_LAST_YEAR              50              //eDouble
#define ADK_CUSTOMER_CONTRIBUTION_MARGIN_THIS_YEAR              51              //eDouble
#define ADK_CUSTOMER_CONTRIBUTION_MARGIN_LAST_YEAR              52              //eDouble
#define ADK_CUSTOMER_CLAIM                                      53              //eDouble
#define ADK_CUSTOMER_AVERAGE_TIME_OF_PAYMENT_THIS_YEAR          54              //eDouble
#define ADK_CUSTOMER_AVERAGE_TIME_OF_PAYMENT_THIS_YEAR_NO_P     55              //eDouble
#define ADK_CUSTOMER_AVERAGE_TIME_OF_PAYMENT_LAST_YEAR          56              //eDouble
#define ADK_CUSTOMER_AVERAGE_TIME_OF_PAYMENT_LAST_YEAR_NO_P     57              //eDouble
#define ADK_CUSTOMER_SORT_ORDER                                 58              //eChar 
#define ADK_CUSTOMER_VAT_NUMBER                                 59              //eChar 
#define ADK_CUSTOMER_SUMMARY_INVOICE                            60              //eBool 
#define ADK_CUSTOMER_EU_CUSTOMER                	            61              //eBool 
#define ADK_CUSTOMER_EMAIL                                      62              //eChar 
#define ADK_CUSTOMER_DOCUMENT_PATH                              63              //eChar 
#define ADK_CUSTOMER_CONTRIBUTION_DEGREE                        64              //eDouble        
#define ADK_CUSTOMER_CONTRIBUTION_DEGREE_LAST_YEAR              65              //eDouble       
#define ADK_CUSTOMER_LASTCHANGE                 	            66              //eDate        
#define ADK_CUSTOMER_DISPATCHER									67				//eChar
#define ADK_CUSTOMER_EANLOC										68				//eChar
#define ADK_CUSTOMER_DELIVERY_EANLOC							69				//eChar
#define ADK_CUSTOMER_CODE_OF_COUNTRY                            70              //eChar
#define ADK_CUSTOMER_DELIVERY_CODE_OF_COUNTRY                   71              //eChar
#define ADK_CUSTOMER_FIRST_NAME                                 72              //eChar     //Föreningsspecifikt
#define ADK_CUSTOMER_MEMBER                                     73              //eBool     //Föreningsspecifikt
#define ADK_CUSTOMER_TELEPHONE3	                                74              //eChar 
#define ADK_CUSTOMER_DELIVERY_TELEPHONE3                        75              //eChar 
#define ADK_CUSTOMER_ADDRESS_TO_BOOKING							76				//eBool
#define ADK_CUSTOMER_WSCUSTOMER									77				//eBool
#define ADK_CUSTOMER_BUILDSERVICE								78				//eBool
#define ADK_CUSTOMER_EDI_ORDER									79				//eBool
#define ADK_CUSTOMER_EDI_INVOICE								80				//eBool
#define ADK_CUSTOMER_EDI_CREDITINVOICE							81				//eBool
#define ADK_CUSTOMER_EDI_PRINTOPTION_ORDER						82				//eChar
#define ADK_CUSTOMER_EDI_PRINTOPTION_INVOICE					83				//eChar
#define ADK_CUSTOMER_EDI_PRINTOPTION_CREDITINVOICE				84				//eChar
#define ADK_CUSTOMER_EDI_RECEIVER_ID_ORGNO						85				//eChar
#define ADK_CUSTOMER_EDI_RECEIVER_ID_EAN						86				//eChar
#define ADK_CUSTOMER_EDI_RECEIVER_ID_OTHER_ID					87				//eChar
#define ADK_CUSTOMER_MOBILE_PHONE								88				//eChar
#define ADK_CUSTOMER_ACCEPT_COMMERCIAL_EMAIL				    89				//eBool
#define ADK_CUSTOMER_ACCEPT_COMMERCIAL_SMS					    90				//eBool
#define ADK_CUSTOMER_NOTES										91				//eChar
#define ADK_CUSTOMER_SIGN										92				//eChar
#define ADK_CUSTOMER_IGNORE_ORGANISATION_NUMBER_CHECK			93				//eBool
#define ADK_CUSTOMER_TIMESTAMP									94				//eDate
#define ADK_CUSTOMER_PROFIT_CENTRE								95				//eChar
#define ADK_CUSTOMER_PROJECT									96				//eChar
#define ADK_CUSTOMER_REFOFF_TYP									97				//eChar
#define ADK_CUSTOMER_REFOFF_ID									98				//eChar
#define ADK_CUSTOMER_REFORD_TYP									99				//eChar
#define ADK_CUSTOMER_REFORD_ID									100				//eChar
#define ADK_CUSTOMER_REFFLJ_TYP									101				//eChar
#define ADK_CUSTOMER_REFFLJ_ID									102				//eChar
#define ADK_CUSTOMER_REFXORD_TYP								103				//eChar
#define ADK_CUSTOMER_REFXORD_ID									104				//eChar
#define ADK_CUSTOMER_REFFKT_TYP									105				//eChar
#define ADK_CUSTOMER_REFFKT_ID									106				//eChar
#define ADK_CUSTOMER_REFXFKT_TYP								107				//eChar
#define ADK_CUSTOMER_REFXFKT_ID									108				//eChar
#define ADK_CUSTOMER_REFKRV_TYP									109				//eChar
#define ADK_CUSTOMER_REFKRV_ID									110				//eChar
#define ADK_CUSTOMER_DELIVERY_ID								111				//eDouble
#define ADK_CUSTOMER_INACTIVE  	                                112				//eBool
#define ADK_CUSTOMER_PRINTOPTION_INVOICE						113				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_INVOICE_EX						114				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_ORDER							115				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_ORDER_EX						116				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_DELIVERYNOTE					117				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_OFFER							118				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_CREDITINVOICE					119				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_INTERESTINVOICE				120				//eDouble
#define ADK_CUSTOMER_PRINTOPTION_CASH_INVOICE					121				//eDouble
#define ADK_CUSTOMER_COPY_INVOICE								122				//eDouble
#define ADK_CUSTOMER_COPY_INVOICE_EX							123				//eDouble
#define ADK_CUSTOMER_COPY_CREDITINVOICE							124				//eDouble
#define ADK_CUSTOMER_COPY_INTERESTINVOICE						125				//eDouble
#define ADK_CUSTOMER_COPY_ORDER									126				//eDouble
#define ADK_CUSTOMER_COPY_ORDER_EX								127				//eDouble
#define ADK_CUSTOMER_COPY_DELIVERYNOTE							128				//eDouble
#define ADK_CUSTOMER_COPY_OFFER									129				//eDouble
#define ADK_CUSTOMER_COPY_CASH_INVOICE							130				//eDouble
#define	ADK_CUSTOMER_ELECTRONIC_REFERENCE						131				//eChar
#define ADK_CUSTOMER_SERVICE_PROVIDER							132				//eChar
#define ADK_CUSTOMER_AI_ID										133				//eChar
#define ADK_CUSTOMER_TAX_REDUCTION_HOUSING_COOPERATIVE_IDENTITY_NUMBER  134		//eChar
#define ADK_CUSTOMER_TAX_REDUCTION_DESCRIPTION_OF_PROPERTY				135		//eChar
#define ADK_CUSTOMER_DEBT_ACCOUNT									136
#define ADK_CUSTOMER_LAST   	                                136



#define ADK_ARTICLE_FIRST                                        0
#define ADK_ARTICLE_NUMBER                                       0              //eChar 
#define ADK_ARTICLE_NAME                                         1              //eChar 
#define ADK_ARTICLE_NAME_X  	                                 2              //eChar 
#define ADK_ARTICLE_SHORT_NAME                                   3              //eChar 
#define ADK_ARTICLE_GROUP                                        4              //eChar 
#define ADK_ARTICLE_ACCOUNTING_CODE                              5              //eChar 
#define ADK_ARTICLE_STOCK_GOODS                                  6              //eBool 
#define ADK_ARTICLE_UNIT_CODE                                    7              //eChar 
#define ADK_ARTICLE_SORT_ORDER                                   8              //eChar 
#define ADK_ARTICLE_QUANTITY_IN_STOCK                            9              //eDouble
#define ADK_ARTICLE_QUANTITY_RESERVED                           10              //eDouble
#define ADK_ARTICLE_ORDER_POINT                                 11              //eDouble
#define ADK_ARTICLE_MINIMUM_ORDER                               12              //eDouble
#define ADK_ARTICLE_MAXIMUM_ORDER                               13              //eDouble
#define ADK_ARTICLE_ORDERED_QUANTITY                            14              //eDouble
#define ADK_ARTICLE_TIME_OF_DELIVERY                            15              //eDouble
#define ADK_ARTICLE_PLACE_IN_STOCK                              16              //eChar 
#define ADK_ARTICLE_WEIGHT                                      17              //eDouble
#define ADK_ARTICLE_VOLUME                                      18              //eDouble
#define ADK_ARTICLE_SUPPLIER_NUMBER                             19              //eChar 
#define ADK_ARTICLE_INVOICE_DATE                                20              //eDate      
#define ADK_ARTICLE_INVENTORY_DATE          	                21              //eDate 
#define ADK_ARTICLE_INVENTORY_QUANTITY          	            22              //eDouble
#define ADK_ARTICLE_INVENTORY_DIFFERENCE    	                23              //eDouble
#define ADK_ARTICLE_INVENTORY_ACCUMULATE                        24              //eDouble
#define ADK_ARTICLE_LAST_PURCHASE_PRICE                         25              //eDouble   
#define ADK_ARTICLE_NOTE_OF_OUTSTANDING_ARTICLES       	        26              //eBool 
#define ADK_ARTICLE_LAND_OF_ORIGIN    	                        27              //eChar 
#define ADK_ARTICLE_EXPORT_CODE                     	        28              //eChar 
#define ADK_ARTICLE_REMARK1	    	                            29              //eChar 
#define ADK_ARTICLE_REMARK2	    	                            30              //eChar 
#define ADK_ARTICLE_DOCUMENT_PATH    	                        31              //eChar 
#define ADK_ARTICLE_ACCUMULATED_TURNOVER_THIS_YEAR              32              //eDouble
#define ADK_ARTICLE_ACCUMULATED_TURNOVER_LAST_YEAR              33              //eDouble
#define ADK_ARTICLE_ACCUMULATED_QUANTITY_THIS_YEAR              34              //eDouble
#define ADK_ARTICLE_ACCUMULATED_QUANTITY_LAST_YEAR              35              //eDouble
#define ADK_ARTICLE_CONTRIBUTION_MARGIN_THIS_YEAR               36              //eDouble
#define ADK_ARTICLE_CONTRIBUTION_MARGIN_LAST_YEAR               37              //eDouble
#define ADK_ARTICLE_CLOSING_FLAG    	                        38              //eBool 
#define ADK_ARTICLE_ESTIMATED_PURCHASE_PRICE                    39              //eDouble
#define ADK_ARTICLE_ESTIMATED_CARGO_FEE                         40              //eDouble
#define ADK_ARTICLE_ESTIMATED_OTHER                             41              //eDouble
#define ADK_ARTICLE_STOCK_VALUE                                 42              //eDouble
#define ADK_ARTICLE_STOCK_VALUE_INACTIVE                        43              //eBool     
#define ADK_ARTICLE_PRICE_LIST                                  44              //eChar 
#define ADK_ARTICLE_PRICE                                       45              //eDouble
#define ADK_ARTICLE_ESTIMATED_TOTAL_PURCHASE_PRICE              46              //eDouble   
#define ADK_ARTICLE_DISPOSABLE_IN_STOCK                         47              //eDouble   
#define ADK_ARTICLE_TURNOVER_RATE                               48              //eDouble   
#define ADK_ARTICLE_ACCUMULATE_TURNOVER_PARCEL_THIS_YEAR        49              //eDouble   
#define ADK_ARTICLE_ACCUMULATE_TURNOVER_TOTAL_THIS_YEAR         50              //eDouble   
#define ADK_ARTICLE_ACCUMULATE_TURNOVER_PARCEL_LAST_YEAR        51              //eDouble   
#define ADK_ARTICLE_ACCUMULATE_TURNOVER_TOTAL_LAST_YEAR         52              //eDouble   
#define ADK_ARTICLE_ACCUMULATED_QUANTITY_PARCEL_THIS_YEAR       53              //eDouble   
#define ADK_ARTICLE_ACCUMULATED_QUANTITY_TOTAL_THIS_YEAR        54              //eDouble   
#define ADK_ARTICLE_ACCUMULATED_QUANTITY_PARCEL_LAST_YEAR       55              //eDouble   
#define ADK_ARTICLE_ACCUMULATED_QUANTITY_TOTAL_LAST_YEAR        56              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_MARGIN_PARCEL_THIS_YEAR        57              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_MARGIN_TOTAL_THIS_YEAR	        58              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_MARGIN_PARCEL_LAST_YEAR        59              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_MARGIN_TOTAL_LAST_YEAR         60              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_DEGREE_THIS_YEAR               61              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_DEGREE_PARCEL_THIS_YEAR        62              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_DEGREE_TOTAL_THIS_YEAR         63              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_DEGREE_LAST_YEAR               64              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_DEGREE_PARCEL_LAST_YEAR        65              //eDouble   
#define ADK_ARTICLE_CONTRIBUTION_DEGREE_TOTAL_LAST_YEAR         66              //eDouble   
#define ADK_ARTICLE_BAR_CODE                                    67              //eChar     
#define ADK_ARTICLE_BAR_CODE_TYPE                               68              //eDouble  
#define ADK_ARTICLE_PARCEL										69              //eBool
#define ADK_ARTICLE_TYPE                                        70              //eChar     //Föreningsspecifikt       
#define ADK_ARTICLE_WEBSHOP										71              //eBool
#define ADK_ARTICLE_IMAGE_PATH                                  72              //eChar     
#define ADK_ARTICLE_LAND_OF_ORIGIN_CODE							73				//eChar
#define ADK_ARTICLE_TYPE_OF_ARTICLE								74				//eChar
#define ADK_ARTICLE_TIMESTAMP									75				//eDate
#define ADK_ARTICLE_INACTIVE  	                                76				//eBool
#define ADK_ARTICLE_TAX_REDUCTION_TYPES_ID						77				//eChar
#define ADK_ARTICLE_NOTE												78	 //eChar
#define ADK_ARTICLE_LAST                                        78


#define  ADK_OOI_HEAD_FIRST                                      0               
#define  ADK_OOI_HEAD_DOCUMENT_NUMBER                            0              //eDouble
#define  ADK_OOI_HEAD_DOCUMENT_CONNECTION_NUMBER1                1              //eDouble
#define  ADK_OOI_HEAD_DOCUMENT_CONNECTION_NUMBER2                2              //eDouble
#define  ADK_OOI_HEAD_DOCUMENT_CONNECTION_NUMBER3                3              //eDouble
#define  ADK_OOI_HEAD_DOCUMENT_CONNECTION_NUMBER4                4              //eDouble
#define  ADK_OOI_HEAD_DOCUMENT_NOT_DONE                          5              //eBool 
#define  ADK_OOI_HEAD_DOCUMENT_PRINTED                           6              //eBool 
#define  ADK_OOI_HEAD_DOCUMENT_CANCELLED                         7              //eBool 
#define  ADK_OOI_HEAD_DOCUMENT_DATE1                             8              //eDate 
#define  ADK_OOI_HEAD_DOCUMENT_DATE2                             9              //eDate 
#define  ADK_OOI_HEAD_ORDER_DELIVERED                           10              //eBool 
#define  ADK_OOI_HEAD_ORDER_PICK_PRINTED                        11              //eBool 
#define  ADK_OOI_HEAD_ORDER_DELIVERY_NOTE_PRINTED               12              //eBool 
#define  ADK_OOI_HEAD_TYPE_OF_INVOICE                           13              //eChar 
#define  ADK_OOI_HEAD_CUSTOMER_NUMBER                           14              //eChar 
#define  ADK_OOI_HEAD_CUSTOMER_NAME                             15              //eChar 
#define  ADK_OOI_HEAD_MAILING_ADDRESS1                          16              //eChar 
#define  ADK_OOI_HEAD_MAILING_ADDRESS2                          17              //eChar 
#define  ADK_OOI_HEAD_ZIPCODE                                   18              //eChar 
#define  ADK_OOI_HEAD_CITY                                      19              //eChar 
#define  ADK_OOI_HEAD_COUNTRY                                   20              //eChar 
#define  ADK_OOI_HEAD_DELIVERY_NAME                             21              //eChar 
#define  ADK_OOI_HEAD_DELIVERY_MAILING_ADDRESS1                 22              //eChar 
#define  ADK_OOI_HEAD_DELIVERY_MAILING_ADDRESS2                 23              //eChar 
#define  ADK_OOI_HEAD_DELIVERY_ZIPCODE                          24              //eChar 
#define  ADK_OOI_HEAD_DELIVERY_CITY                             25              //eChar 
#define  ADK_OOI_HEAD_DELIVERY_COUNTRY                          26              //eChar 
#define  ADK_OOI_HEAD_CUSTOMER_REFERENCE_NAME                   27              //eChar 
#define  ADK_OOI_HEAD_CUSTOMER_ORDER_NUMBER                     28              //eChar 
#define  ADK_OOI_HEAD_CUSTOMER_REFERENCE_NUMBER                 29              //eChar 
#define  ADK_OOI_HEAD_OUR_REFERENCE_NAME                        30              //eChar 
#define  ADK_OOI_HEAD_DISTRICT_CODE                             31              //eChar 
#define  ADK_OOI_HEAD_SELLER_CODE                               32              //eChar 
#define  ADK_OOI_HEAD_CURRENCY_CODE                             33              //eChar 
#define  ADK_OOI_HEAD_LANGUAGE_CODE                             34              //eChar 
#define  ADK_OOI_HEAD_CURRENCY_RATE                             35              //eDouble
#define  ADK_OOI_HEAD_CURRENCY_UNIT                             36              //eDouble
#define  ADK_OOI_HEAD_REMINDER                                  37              //eBool 
#define  ADK_OOI_HEAD_DEMAND_FEE                                38              //eBool 
#define  ADK_OOI_HEAD_INVOICE_INTEREST                          39              //eBool 
#define  ADK_OOI_HEAD_EXPORT                                    40              //eBool 
#define  ADK_OOI_HEAD_INCLUDING_VAT                             41              //eBool 
#define  ADK_OOI_HEAD_DO_NOT_CREATE_BACKORDER                   42              //eBool 
#define  ADK_OOI_HEAD_LIST_OF_PRICE_CODE                        43              //eChar 
#define  ADK_OOI_HEAD_INVOICE_DISCOUNT                          44              //eDouble
#define  ADK_OOI_HEAD_CODE_OF_DISCOUNT                          45              //eChar 
#define  ADK_OOI_HEAD_CODE_OF_TERMS_OF_PAYMENT                  46              //eChar 
#define  ADK_OOI_HEAD_CODE_OF_TERMS_OF_DELIVERY                 47              //eChar 
#define  ADK_OOI_HEAD_CODE_OF_WAY_OF_DELIVERY                   48              //eChar 
#define  ADK_OOI_HEAD_TEXT1                                     49              //eChar 
#define  ADK_OOI_HEAD_TEXT2                                     50              //eChar 
#define  ADK_OOI_HEAD_TEXT3                                     51              //eChar 
#define  ADK_OOI_HEAD_SET_OF_VAT1                               52              //eDouble
#define  ADK_OOI_HEAD_SET_OF_VAT2                               53              //eDouble
#define  ADK_OOI_HEAD_SET_OF_VAT3                               54              //eDouble
#define  ADK_OOI_HEAD_SET_OF_VAT4                               55              //eDouble
#define  ADK_OOI_HEAD_CARGO_AMOUNT                              56              //eDouble
#define  ADK_OOI_HEAD_CARGO_VAT_CODE                            57              //eChar 
#define  ADK_OOI_HEAD_DISPATCH_FEE                              58              //eDouble
#define  ADK_OOI_HEAD_VAT_CODE_DISPATCH_FEE                     59              //eChar 
#define  ADK_OOI_HEAD_ROUND_OFF                                 60              //eDouble
#define  ADK_OOI_HEAD_TOTAL_AMOUNT                              61              //eDouble
#define  ADK_OOI_HEAD_BALANCE                                   62              //eDouble
#define  ADK_OOI_HEAD_PROJECT_CODE                              63              //eChar 
#define  ADK_OOI_HEAD_PROFIT_CENTRE                             64              //eChar 
#define  ADK_OOI_HEAD_BASIS_OF_VAT0                             65              //eDouble
#define  ADK_OOI_HEAD_BASIS_OF_VAT1                             66              //eDouble
#define  ADK_OOI_HEAD_BASIS_OF_VAT2                             67              //eDouble
#define  ADK_OOI_HEAD_BASIS_OF_VAT3                             68              //eDouble
#define  ADK_OOI_HEAD_BASIS_OF_VAT4                             69              //eDouble
#define  ADK_OOI_HEAD_AMOUNT_OF_VAT1                            70              //eDouble
#define  ADK_OOI_HEAD_AMOUNT_OF_VAT2                            71              //eDouble
#define  ADK_OOI_HEAD_AMOUNT_OF_VAT3                            72              //eDouble
#define  ADK_OOI_HEAD_AMOUNT_OF_VAT4                            73              //eDouble
#define  ADK_OOI_HEAD_PENALTY_INTEREST_RATE                     74              //eDouble
#define  ADK_OOI_HEAD_CUSTOMER_DEMAND_ACCOUNT                   75              //eChar 
#define  ADK_OOI_HEAD_CARGO_ACCOUNT                             76              //eChar 
#define  ADK_OOI_HEAD_DISPATCH_FEE_ACCOUNT                      77              //eChar 
#define  ADK_OOI_HEAD_BALANCE2                                  78              //eDouble
// ADK_DUMMY                                                    79              //Dummy
#define  ADK_OOI_HEAD_NUMBER_OF_ORIGINAL_INVOICE                80              //eDouble
#define  ADK_OOI_HEAD_VAT1_ACCOUNT                              81              //eChar 
#define  ADK_OOI_HEAD_VAT2_ACCOUNT                              82              //eChar 
#define  ADK_OOI_HEAD_VAT3_ACCOUNT                              83              //eChar 
#define  ADK_OOI_HEAD_VAT4_ACCOUNT                              84              //eChar 
#define  ADK_OOI_HEAD_ROUND_OFF_ACCOUNT                         85              //eChar 
#define  ADK_OOI_HEAD_DISCOUNT_ACCOUNT                          86              //eChar 
#define  ADK_OOI_HEAD_CUSTOMER_INVOICE_VAT_NUMBER               87              //eChar 
#define  ADK_OOI_HEAD_SUMMARY_INVOICE                           88              //eBool 
#define  ADK_OOI_HEAD_EU_ACCOUNT_FOR_QUARTERLY                  89              //eBool 
#define  ADK_OOI_HEAD_EU_THIRD_PART_TRADE                       90              //eBool 
#define  ADK_OOI_HEAD_INVOICE_WORK_BY_CONTRACT_SENT             91              //eBool 
#define  ADK_OOI_HEAD_INVOICE_WORK_BY_CONTRACT_DONE             92              //eBool 
#define  ADK_OOI_HEAD_SAVE_TEXT                                 93              //eBool 
#define  ADK_OOI_HEAD_EXTRA_DOCUMENT_PRINTED                    94              //eBool 
#define  ADK_OOI_HEAD_BOOK_ORDER                                95              //eBool              
#define  ADK_OOI_HEAD_GROSS                                     96              //eDouble     
#define  ADK_OOI_HEAD_NET                                       97              //eDouble   
#define  ADK_OOI_HEAD_EXCLUDING_OF_VAT                          98              //eDouble   
#define  ADK_OOI_HEAD_VAT_AMOUNT                                99              //eDouble   
#define  ADK_OOI_HEAD_CONTRIBUTION_MARGIN                      100              //eDouble   
#define  ADK_OOI_HEAD_VALUE                                    101              //eDouble   
#define  ADK_OOI_HEAD_TYPE_IN_TEXT                             102              //eChar     
#define  ADK_OOI_HEAD_ROWS                                     103              //eData 
#define  ADK_OOI_HEAD_NROWS                                    104              //eDouble                          
#define  ADK_OOI_HEAD_LOCAL_REMARK                             105              //eChar                          
#define  ADK_OOI_HEAD_CREDIT_INVOICE_COPY_NUMBER               106              //eDouble 
#define  ADK_OOI_HEAD_CREDIT_INVOICE_COPY_WHAT                 107              //eDouble 
#define  ADK_OOI_HEAD_EANLOC								   108              //eChar
#define  ADK_OOI_HEAD_DELIVERY_EANLOC						   109	            //eChar
#define  ADK_OOI_HEAD_DISPATCHER							   110              //eChar
#define  ADK_OOI_HEAD_CREDIT_NOTE_STORAGE_AFFECT			   111              //eBool
#define  ADK_OOI_HEAD_OCR_NUMBER			                   112              //eChar
#define  ADK_OOI_HEAD_CODE_OF_COUNTRY              			   113              //eChar
#define  ADK_OOI_HEAD_DELIVERY_CODE_OF_COUNTRY   			   114              //eChar
#define  ADK_OOI_HEAD_INVOICE_BASE			                   115              //eDouble
#define  ADK_OOI_HEAD_CONTRACTNR			                   116              //eChar
#define  ADK_OOI_HEAD_TOT_SHIPWT                               117              //eDouble
#define  ADK_OOI_HEAD_DOCUMENT_DATE3                           118              //eDate
#define	 ADK_OOI_HEAD_BUILDSERVICE							   119				//eBool
#define  ADK_OOI_HEAD_LAST_PAYMENT							   120				//eDate
#define  ADK_OOI_HEAD_CASH_RECEIPT							   121				//eBool
#define	 ADK_OOI_HEAD_STOCK_SHIP_VER_DATE					   122				//eDate
#define  ADK_OOI_HEAD_REDUCED_GENERAL_PENSION_FEE			   123				//eBool
#define  ADK_OOI_HEAD_CREATED_INVCOM						   124				//eBool
#define  ADK_OOI_HEAD_CREATED_SEND							   125				//eBool
#define  ADK_OOI_HEAD_CREATED_RECEIVED						   126				//eBool
#define  ADK_OOI_HEAD_TAX_REDUCTION_INCLUDED				   127				//eBool
#define  ADK_OOI_HEAD_TAX_REDUCTION_MANUALLY				   128				//eBool
#define  ADK_OOI_HEAD_TAX_REDUCTION_TAX_BASIS				   129				//eDouble
#define  ADK_OOI_HEAD_TAX_REDUCTION							   130				//eDouble
#define  ADK_OOI_HEAD_TAX_REDUCTION_NUMBER_OF_PERSONS		   131				//eDouble
#define  ADK_OOI_HEAD_TAX_REDUCTION_BUILDING_WORK			   132				//eBool	
#define  ADK_OOI_HEAD_TAX_REDUCTION_HOUSING_COOPERATIVE_IDENTITY_NUMBER 133		//eChar	
#define  ADK_OOI_HEAD_TAX_REDUCTION_DESCRIPTION_OF_PROPERTY	   134				//eChar
#define  ADK_OOI_HEAD_TAX_REDUCTION_AMOUNT_TO_PAY			   135				//eDouble
#define  ADK_OOI_HEAD_AGREEMENT_DATE_TYPE					   136
#define  ADK_OOI_HEAD_TIMESTAMP								   137				//eDate
#define  ADK_OOI_HEAD_CUSTOMER_REFERENCE_SIGN                  138              //eChar 
#define  ADK_OOI_HEAD_DELIVERY_ID							   139              //eDouble
#define  ADK_OOI_HEAD_ORDER_BASE							   140              //eDouble
#define  ADK_OOI_HEAD_ORDER_BASE_TYPE						   141              //eChar
#define  ADK_OOI_HEAD_ELECTRONIC_REFERENCE					   142              //eChar
#define  ADK_OOI_HEAD_PRINTOPTION							   143              //eDouble
#define  ADK_OOI_HEAD_PRINTOPTION_DELIVERY_NOTE				   144              //eDouble
#define  ADK_OOI_HEAD_PRINTOPTION_EXTRA_DOCUMENT			   145              //eDouble
#define  ADK_OOI_HEAD_ELECTRONIC_INVOICE_ATTACHMENT			   146              //eChar
#define  ADK_OOI_HEAD_AI_IMPORTED_XML_NAME					   147              //eChar
#define	 ADK_OOI_HEAD_TAX_REDUCTION_PROC					   148				//eDouble
#define	 ADK_OOI_HEAD_TAX_REDUCTION_MAXAMOUNT				   149				//eDouble
#define	 ADK_OOI_HEAD_TAX_REDUCTION_GREEN_TECHNOLOGY		   150				//eBool
#define ADK_OOI_HEAD_TAX_REDUCTION_ALL_TYPES				   151				//eBool
#define  ADK_OOI_HEAD_LAST                                     151

#define  ADK_OOI_ROW_FIRST                                       0
#define  ADK_OOI_ROW_ARTICLE_NUMBER                              0              //eChar         
#define  ADK_OOI_ROW_SUPPLIER_ARTICLE_NUMBER                     1              //eChar 
#define  ADK_OOI_ROW_QUANTITY1 	                                 2              //eDouble
#define  ADK_OOI_ROW_QUANTITY2   	                             3              //eDouble
#define  ADK_OOI_ROW_QUANTITY3   		                         4              //eDouble       
#define  ADK_OOI_ROW_PRICE_EACH_CURRENT_CURRENCY                 5              //eDouble
#define  ADK_OOI_ROW_PRICE2             		                 6              //eDouble
#define  ADK_OOI_ROW_DISCOUNT                                    7              //eDouble
#define  ADK_OOI_ROW_AMOUNT_DISCOUNT_FLAG                        8              //eBool 
#define  ADK_OOI_ROW_AMOUNT_CURRENT_CURRENCY 	                 9              //eDouble
#define  ADK_OOI_ROW_AMOUNT_DOMESTIC_CURRENCY		            10              //eDouble
#define  ADK_OOI_ROW_ACCOUNT_NUMBER	  	                        11              //eChar 
#define  ADK_OOI_ROW_PROFIT_CENTRE	                            12              //eChar 
#define  ADK_OOI_ROW_PROJECT	  	                            13              //eChar 
#define  ADK_OOI_ROW_TEXT	  	                                14              //eChar 
#define  ADK_OOI_ROW_UNIT  	                                    15              //eChar 
#define  ADK_OOI_ROW_VAT_CODE                  	                16              //eChar 
#define  ADK_OOI_ROW_NOTE_OF_OUTSTANDING_ORDERS  	            17              //eBool 
#define  ADK_OOI_ROW_DATE2                  	                18              //eDate 
#define  ADK_OOI_ROW_TYPE_OF_ROW             		            19              //eChar 
#define  ADK_OOI_ROW_CONTRIBUTION_DEGREE                        20              //eDouble      
#define  ADK_OOI_ROW_CONTRIBUTION_MARGIN                        21              //eDouble      
#define  ADK_OOI_ROW_PRINT                                      22              //eBool
#define  ADK_OOI_ROW_PRINT2                                     23              //eBool
// ADK_DUMMY                                                    24              //Dummy
#define  ADK_OOI_ROW_BAR_CODE                                   25              //eChar  
#define  ADK_OOI_ROW_DATE3                                      26              //eDate                             
#define  ADK_OOI_ROW_ARTICLE_TYPE                               27              //eChar     //Föreningsspecifikt
#define  ADK_OOI_ROW_FROM_TYPE                                  28              //eDouble 
#define  ADK_OOI_ROW_FROM_DOCUMENT                              29              //eDouble 
#define  ADK_OOI_ROW_FROM_DOCROW                                30              //eChar
#define  ADK_OOI_ROW_ROWNUMBER                                  31              //eDouble
#define  ADK_OOI_ROW_CONNECTION_TYPE                            32              //eChar 
#define  ADK_OOI_ROW_CONNECTION_DOCUMENT                        33              //eChar   
#define  ADK_OOI_ROW_CONNECTION_DOCROW                          34              //eChar   
#define  ADK_OOI_ROW_SERIAL_NUMBER                              35              //eChar   
#define  ADK_OOI_ROW_BATCH_NUMBER                               36              //eChar   
#define  ADK_OOI_ROW_BEST_BEFORE                                37              //eDate                             
#define  ADK_OOI_ROW_NOTIFY_QT1                                 38              //eDouble   
#define  ADK_OOI_ROW_NOTIFY_QT2                                 39              //eDouble  
#define  ADK_OOI_ROW_PIN_BOOKING			                    40              //eBool   
#define  ADK_OOI_ROW_NUM_PIN_BOOKING							41              //eDouble  
#define  ADK_OOI_ROW_LABOUR_COST								42				//eBool
#define  ADK_OOI_ROW_QT_BOOKING									43				//eDouble
#define  ADK_OOI_ROW_ORDER_BASE_TYPE							44				//eChar
#define  ADK_OOI_ROW_USER_ID									45				//eChar
#define  ADK_OOI_ROW_STRUCTURE_ORDER							46				//eDouble
#define  ADK_OOI_ROW_PACKAGE									47				//eBool
#define  ADK_OOI_ROW_STRUCTURE									48				//eBool
#define  ADK_OOI_ROW_TIMESTAMP									49				//eDate
#define  ADK_OOI_ROW_TAX_REDUCTION_TYPES_ID						50				//eChar
#define  ADK_OOI_ROW_HOURS_WORKED								51				//eDouble
#define  ADK_OOI_ROW_H_SCHAB_PROC								52				//eDouble
#define  ADK_OOI_ROW_LAST                                       52              


#define ADK_SUP_INV_HEAD_FIRST		                             0
#define ADK_SUP_INV_HEAD_GIVEN_NUMBER                            0              //eDouble       
#define ADK_SUP_INV_HEAD_SUPPLIER_NUMBER                         1              //eChar 
#define ADK_SUP_INV_HEAD_SUPPLIER_NAME                           2              //eChar  
#define ADK_SUP_INV_HEAD_PGIRO                                   3              //eChar  
#define ADK_SUP_INV_HEAD_ORGANISATION_NUMBER                     4              //eChar  
#define ADK_SUP_INV_HEAD_BGIRO	                                 5              //eChar  
#define ADK_SUP_INV_HEAD_INVOICE_NUMBER                          6              //eChar  
#define ADK_SUP_INV_HEAD_CUSTOMER_NUMBER                         7              //eChar  
#define ADK_SUP_INV_HEAD_INVOICE_DATE                            8              //eDate
#define ADK_SUP_INV_HEAD_DUE_DATE                                9              //eDate
#define ADK_SUP_INV_HEAD_CURRENCY_CODE                          10              //eChar  
#define ADK_SUP_INV_HEAD_CURRENCY_RATE                          11              //eDouble
#define ADK_SUP_INV_HEAD_TYPE_OF_INVOICE                        12              //eChar  
#define ADK_SUP_INV_HEAD_TOTAL	                                13              //eDouble
#define ADK_SUP_INV_HEAD_BALANCE_CURRENT_CURRENCY               14              //eDouble
#define ADK_SUP_INV_HEAD_OUTGOING_PAYMENTS_CURRENT_CURRENCY     15              //eDouble
#define ADK_SUP_INV_HEAD_VAT_AMOUNT                             16              //eDouble
#define ADK_SUP_INV_HEAD_CARGO_FEE                              17              //eDouble
#define ADK_SUP_INV_HEAD_NAME_OF_CERTIFIER            	        18              //eChar  
#define ADK_SUP_INV_HEAD_CERTIFIED                  		    19              //eBool  
#define ADK_SUP_INV_HEAD_CANCELLED                  		    20              //eBool  
#define ADK_SUP_INV_HEAD_PROJECT                    	        21              //eChar  
#define ADK_SUP_INV_HEAD_PROFIT_CENTRE          		        22              //eChar  
#define ADK_SUP_INV_HEAD_JOURNAL_NUMBER	                        23              //eDouble
#define ADK_SUP_INV_HEAD_NOTE1                  		        24              //eChar  
#define ADK_SUP_INV_HEAD_NOTE2                  		        25              //eChar  
#define ADK_SUP_INV_HEAD_NOTE3                  		        26              //eChar  
#define ADK_SUP_INV_HEAD_CURRENCY_UNIT                     	    27              //eDouble
#define ADK_SUP_INV_HEAD_SUPPLIER_DEBT_ACCOUNT         	        28              //eChar  
#define ADK_SUP_INV_HEAD_CODE_OF_CENTRAL_BANK                   29              //eChar
#define ADK_SUP_INV_HEAD_PAY_WITH_CURRENCY_ACCOUNT              30 	            //eBool
#define ADK_SUP_INV_HEAD_PAYMENT_ABROAD                         31 	            //eBool
#define ADK_SUP_INV_HEAD_CODE_OF_CHARGE_ON_PAYMENT_ABROAD       32	            //eDouble
#define ADK_SUP_INV_HEAD_TYPE_IN_TEXT                           33              //eChar     
#define ADK_SUP_INV_HEAD_VERIFICATION_SERIES_ID                 34              //eChar     
#define ADK_SUP_INV_HEAD_CHANGE_OF_STOCK                        35              //eBool
#define ADK_SUP_INV_HEAD_ROWS       	                        36              //eData  
#define ADK_SUP_INV_HEAD_NROWS      	                        37              //eDouble
#define ADK_SUP_INV_HEAD_CREDIT_INVOICE_COPY_NUMBER             38              //eDouble
#define ADK_SUP_INV_HEAD_CREDIT_INVOICE_COPY_WHAT               39              //eDouble
#define ADK_SUP_INV_HEAD_CREDIT_NUMBER							40              //eChar
#define ADK_SUP_INV_HEAD_IGNORE_CHECK_INVNR						41				//eBool
#define ADK_SUP_INV_HEAD_DOCUMENT								42				//eChar
#define ADK_SUP_INV_HEAD_TIMESTAMP								43				//eDate
#define ADK_SUP_INV_HEAD_AUTOGIRO	                  		    44              //eBool  
#define ADK_SUP_INV_HEAD_PAYMSTOP	                  		    45              //eBool  
#define ADK_SUP_INV_HEAD_LOCAL_REMARK							46				//eChar
#define ADK_SUP_INV_HEAD_AI_IMPORTED_XML_NAME					47				//eChar
#define ADK_SUP_INV_HEAD_LAST                                   47      	                            


#define ADK_PROJECT_FIRST                                        0              
#define ADK_PROJECT_CODE_OF_PROJECT                              0              //eChar 
#define ADK_PROJECT_NAME                                         1              //eChar 
#define ADK_PROJECT_DATE_OF_BEGINNING                            2              //eDate 
#define ADK_PROJECT_DATE_OF_END                                  3              //eDate 
#define ADK_PROJECT_DATE_OF_CLOSURE                              4              //eDate 
#define ADK_PROJECT_RESPONSIBLE_OF_PROJECT                       5              //eChar 
#define ADK_PROJECT_CUSTOMER_NUMBER                              6              //eChar 
#define ADK_PROJECT_CUSTOMER_NAME                                7              //eChar 
#define ADK_PROJECT_OUR_ORDER_NUMBER                             8              //eDouble
#define ADK_PROJECT_CUSTOMER_ORDER_NUMBER                        9              //eChar 
#define ADK_PROJECT_CUSTOMER_REFERENCE_NAME                     10              //eChar 
#define ADK_PROJECT_TELEPHONE                                   11              //eChar 
#define ADK_PROJECT_FAX                                         12              //eChar 
#define ADK_PROJECT_NOTE_ABOUT_WORKPLACE                        13              //eChar 
#define ADK_PROJECT_NOTE_ABOUT_WORKPLACE2                       14              //eChar 
#define ADK_PROJECT_NOTE1                                       15              //eChar 
#define ADK_PROJECT_NOTE2                                       16              //eChar 
#define ADK_PROJECT_NOTE3                                       17              //eChar 
#define ADK_PROJECT_NOTE4                           		    18              //eChar 
#define ADK_PROJECT_CHART_OF_ACCOUNTS_TYPE 		                19              //eChar 
#define ADK_PROJECT_CLOSED                                      20   	        //eBool 
#define ADK_PROJECT_TIMESTAMP									21				//eDate
#define ADK_PROJECT_DOCUMENT_PATH								22				//eChar
#define ADK_PROJECT_LAST                                        22   


#define ADK_ACCOUNT_FIRST   	                                 0          
#define ADK_ACCOUNT_SEASON_ID	                                 0       	    //eChar
#define ADK_ACCOUNT_NUMBER	                                     1              //eChar
#define ADK_ACCOUNT_TEXT                                         2              //eChar
#define ADK_ACCOUNT_VAT_CODE	                                 3              //eChar
#define ADK_ACCOUNT_SRU_CODE	                                 4              //eChar
#define ADK_ACCOUNT_DEBIT_CREDIT                                 5              //eChar
#define ADK_ACCOUNT_AUTOMATION_DEVIDE     	                     6              //eChar
#define ADK_ACCOUNT_MANUAL_CODING                                7              //eBool
#define ADK_ACCOUNT_PROFIT_CENTRE_ON_ACCOUNT 	                 8              //eChar
#define ADK_ACCOUNT_PROFIT_CENTRE                                9              //eChar
#define ADK_ACCOUNT_PROJECT_ON_ACCOUNT                          10         	    //eChar
#define ADK_ACCOUNT_PROJECT                                     11              //eChar
#define ADK_ACCOUNT_SUB_ACCOUNT                                 12              //eChar
#define ADK_ACCOUNT_SUB_ACCOUNT_DEFINITION                      13              //eChar
#define ADK_ACCOUNT_QUANTITY_UNIT_ON_ACCOUNT                    14              //eChar
#define ADK_ACCOUNT_QUANTITY_UNIT                               15              //eChar
#define ADK_ACCOUNT_QUANTITY_UNIT_NORMAL                        16              //eChar
#define ADK_ACCOUNT_ROW_INFO_ON_ACCOUNT                         17              //eChar
#define ADK_ACCOUNT_ROW_INFO                                    18              //eChar
#define ADK_ACCOUNT_TYPE_OF_ACCOUNT                             19              //eChar
#define ADK_ACCOUNT_NOT_ACTIVE		                            20              //eBool
#define ADK_ACCOUNT_NEVER_DETAILED                              21              //eBool
#define ADK_ACCOUNT_TIMESTAMP									22				//eDate
#define ADK_ACCOUNT_SALDO										23				//eDouble
#define ADK_ACCOUNT_BALANCE										24				//eDouble
#define ADK_ACCOUNT_LAST                                        24


#define ADK_SUPPLIER_FIRST                                       0   
#define ADK_SUPPLIER_NUMBER	                                     0              //eChar 
#define ADK_SUPPLIER_NAME                                        1              //eChar 
#define ADK_SUPPLIER_SHORT_NAME                                  2              //eChar 
#define ADK_SUPPLIER_MAILING_ADDRESS                             3              //eChar 
#define ADK_SUPPLIER_MAILING_ADDRESS2                            4              //eChar 
#define ADK_SUPPLIER_VISITING_ADDRESS                            5              //eChar 
#define ADK_SUPPLIER_ZIPCODE                                     6              //eChar 
#define ADK_SUPPLIER_CITY                                        7              //eChar 
#define ADK_SUPPLIER_COUNTRY	                                 8              //eChar 
#define ADK_SUPPLIER_TELEPHONE                                   9              //eChar 
#define ADK_SUPPLIER_TELEPHONE2	                                10              //eChar 
#define ADK_SUPPLIER_FAX                                        11              //eChar 
#define ADK_SUPPLIER_REFERENCE	                                12              //eChar 
#define ADK_SUPPLIER_OUR_REFERENCE                              13              //eChar 
#define ADK_SUPPLIER_ORGANISATION_NUMBER                        14              //eChar 
#define ADK_SUPPLIER_CODE_OF_CURRENCY                           15              //eChar 
#define ADK_SUPPLIER_CODE_OF_LANGUAGE                           16              //eChar 
#define ADK_SUPPLIER_BGIRO                                      17              //eChar 
#define ADK_SUPPLIER_PGIRO                                      18              //eChar 
#define ADK_SUPPLIER_OUR_CUSTOMER_NUMBER                        19              //eChar 
#define ADK_SUPPLIER_CREDIT_LIMIT                               20              //eDouble
#define ADK_SUPPLIER_DEBT                                       21              //eDouble
#define ADK_SUPPLIER_PAYMENT_SENT                               22              //eDouble
#define ADK_SUPPLIER_LAST_INVOICE_DATE                          23              //eDate 
#define ADK_SUPPLIER_ACCUMULATE_TURNOVER_THIS_YEAR              24              //eDouble
#define ADK_SUPPLIER_ACCUMULATE_TURNOVER_LAST_YEAR              25              //eDouble
#define ADK_SUPPLIER_CODE_OF_TERMS_OF_PAYMENT                   26              //eChar 
#define ADK_SUPPLIER_CODE_OF_TERMS_OF_DELIVERY                  27              //eChar 
#define ADK_SUPPLIER_CODE_OF_WAY_OF_DELIVERY                    28              //eChar 
#define ADK_SUPPLIER_REMARK1	                                29              //eChar 
#define ADK_SUPPLIER_REMARK2	                                30              //eChar 
#define ADK_SUPPLIER_SORT_ORDER                                 31              //eChar 
#define ADK_SUPPLIER_CODE_OF_COUNTRY                            32              //eChar 
#define ADK_SUPPLIER_CODE_OF_CENTRAL_BANK                       33              //eChar 
#define ADK_SUPPLIER_RECIEVER_NUMBER_OF_BANK                    34              //eDouble
#define ADK_SUPPLIER_SWIFT_ADDRESS                              35              //eChar 
#define ADK_SUPPLIER_CODE_OF_BANK                               36              //eChar 
#define ADK_SUPPLIER_NAME_OF_BANK                               37              //eChar 
#define ADK_SUPPLIER_ADDRESS_OF_BANK                            38              //eChar 
#define ADK_SUPPLIER_ZIPCODE_OF_BANK                            39              //eChar 
#define ADK_SUPPLIER_CITY_OF_BANK                               40              //eBool 
#define ADK_SUPPLIER_PAYMENT_ABROAD                             41              //eDouble
#define ADK_SUPPLIER_BG_CODE_OF_FEE_FOR_PAYMENT_ABROAD          42              //eChar 
#define ADK_SUPPLIER_EMAIL                                      43              //eChar 
#define ADK_SUPPLIER_WWW                                        44              //eChar
#define ADK_SUPPLIER_DOCUMENT                                   45              //eChar
#define ADK_SUPPLIER_OCR_SUPPLIER                               46              //eBool
#define ADK_SUPPLIER_CURRENCY_ACCOUNT                           47              //eBool
#define ADK_SUPPLIER_EANLOC										48              //eChar
#define ADK_SUPPLIER_EU_PAYMENT_SEK_EUR                         49              //eBool
#define ADK_SUPPLIER_NOTES										50				//eChar
#define ADK_SUPPLIER_MOBILE_PHONE								51				//eChar
#define ADK_SUPPLIER_SIGN										52				//eChar
#define ADK_SUPPLIER_IGNORE_ORGANISATION_NUMBER_CHECK			53				//eBool
#define ADK_SUPPLIER_TIMESTAMP									54				//eDate
#define ADK_SUPPLIER_PROFIT_CENTRE								55				//eChar
#define ADK_SUPPLIER_PROJECT									56				//eChar
#define ADK_SUPPLIER_INACTIVE  	                                57				//eBool
#define ADK_SUPPLIER_AUTOGIRO  	                                58				//eBool
#define ADK_SUPPLIER_PRINTOPTION_ORDER  	                    59				//eDouble
#define ADK_SUPPLIER_COPY_ORDER  								60				//eDouble
#define ADK_SUPPLIER_EDI_RECEIVER_ID_OTHER_ID  					61				//eChar
#define ADK_SUPPLIER_ELECTRONIC_REFERENCE  						62				//eChar
#define ADK_SUPPLIER_SERVICE_PROVIDER  							63				//eChar
#define ADK_SUPPLIER_AI_ID  									64				//eChar
#define ADK_SUPPLIER_CODE_OF_BANK_COUNTRY						65				//eChar
#define ADK_SUPPLIER_LAST                                       65


#define ADK_CODE_OF_TERMS_OF_DELIVERY_FIRST                      0   
#define ADK_CODE_OF_TERMS_OF_DELIVERY_CODE                       0              //eChar 
#define ADK_CODE_OF_TERMS_OF_DELIVERY_TEXT                       1              //eChar 
#define ADK_CODE_OF_TERMS_OF_DELIVERY_TIMESTAMP					 2				//eDate
#define ADK_CODE_OF_TERMS_OF_DELIVERY_LAST                       2   
 

#define ADK_CODE_OF_WAY_OF_DELIVERY_FIRST                        0  
#define ADK_CODE_OF_WAY_OF_DELIVERY_CODE                         0              //eChar
#define ADK_CODE_OF_WAY_OF_DELIVERY_TEXT                         1              //eChar
#define ADK_CODE_OF_WAY_OF_DELIVERY_TIMESTAMP					 2				//eDate
#define ADK_CODE_OF_WAY_OF_DELIVERY_LAST                         2


#define ADK_CODE_OF_TERMS_OF_PAYMENT_FIRST                       0
#define ADK_CODE_OF_TERMS_OF_PAYMENT_CODE                        0              //eChar
#define ADK_CODE_OF_TERMS_OF_PAYMENT_TEXT                        1              //eChar
#define ADK_CODE_OF_TERMS_OF_PAYMENT_PAYMENT_CODE                2              //eChar
#define ADK_CODE_OF_TERMS_OF_PAYMENT_TIMESTAMP					 3				//eDate
#define ADK_CODE_OF_TERMS_OF_PAYMENT_LAST                        3


#define ADK_CODE_OF_LANGUAGE_FIRST                               0  
#define ADK_CODE_OF_LANGUAGE_CODE                                0              //eChar
#define ADK_CODE_OF_LANGUAGE_TEXT                                1              //eChar
#define ADK_CODE_OF_LANGUAGE_ISO								 2				//eBool
#define ADK_CODE_OF_LANGUAGE_TIMESTAMP							 3				//eDate
#define ADK_CODE_OF_LANGUAGE_LAST                                3


#define ADK_CODE_OF_CURRENCY_FIRST                               0  
#define ADK_CODE_OF_CURRENCY_CODE                                0              //eChar
#define ADK_CODE_OF_CURRENCY_COUNTRY                             1              //eChar
#define ADK_CODE_OF_CURRENCY_UNIT                                2              //eDouble
#define ADK_CODE_OF_CURRENCY_DATE_OF_REGISTRATION                3              //eDate
#define ADK_CODE_OF_CURRENCY_SELL                                4              //eDouble
#define ADK_CODE_OF_CURRENCY_BUY                                 5              //eDouble
#define ADK_CODE_OF_CURRENCY_TIMESTAMP							 6				//eDate
#define ADK_CODE_OF_CURRENCY_LAST                                6


#define ADK_CODE_OF_CUSTOMER_CATEGORY_FIRST                      0  
#define ADK_CODE_OF_CUSTOMER_CATEGORY_CODE                       0              //eChar
#define ADK_CODE_OF_CUSTOMER_CATEGORY_TEXT                       1              //eChar
#define ADK_CODE_OF_CUSTOMER_CATEGORY_MEMBER_CATEGORY            2              //eBool
#define ADK_CODE_OF_CUSTOMER_CATEGORY_TIMESTAMP					 3				//eDate
#define ADK_CODE_OF_CUSTOMER_CATEGORY_LAST                       3


#define ADK_CODE_OF_DISTRICT_FIRST                               0  
#define ADK_CODE_OF_DISTRICT_CODE                                0              //eChar
#define ADK_CODE_OF_DISTRICT_TEXT                                1              //eChar
#define ADK_CODE_OF_DISTRICT_TIMESTAMP							 2				//eDate
#define ADK_CODE_OF_DISTRICT_LAST                                2


#define ADK_CODE_OF_SELLER_FIRST                                 0  
#define ADK_CODE_OF_SELLER_SIGN                                  0              //eChar
#define ADK_CODE_OF_SELLER_NAME                                  1              //eChar
#define ADK_CODE_OF_SELLER_SELLER								 2				//eBool
#define ADK_CODE_OF_SELLER_REF									 3				//eBool
#define ADK_CODE_OF_SELLER_ATT									 4				//eBool
#define ADK_CODE_OF_SELLER_TIMESTAMP							 5				//eDate
#define ADK_CODE_OF_SELLER_LAST                                  5


#define ADK_DISCOUNT_AGREEMENT_FIRST                             0  
#define ADK_DISCOUNT_AGREEMENT_CODE                              0              //eChar
#define ADK_DISCOUNT_AGREEMENT_TEXT                              1              //eChar
#define ADK_DISCOUNT_AGREEMENT_PRICE_LIST                        2              //eChar
#define ADK_DISCOUNT_AGREEMENT_INVOICE_DISCOUNT                  3              //eDouble
#define ADK_DISCOUNT_AGREEMENT_ROW_DISCOUNT                      4              //eDouble
#define ADK_DISCOUNT_AGREEMENT_TIMESTAMP						 5				//eDate
#define ADK_DISCOUNT_AGREEMENT_LAST                              5              


#define ADK_CODE_OF_ARTICLE_GROUP_FIRST                          0  
#define ADK_CODE_OF_ARTICLE_GROUP_CODE                           0              //eChar
#define ADK_CODE_OF_ARTICLE_GROUP_TEXT                           1              //eChar
#define ADK_CODE_OF_ARTICLE_GROUP_TIMESTAMP						 2				//eDate
#define ADK_CODE_OF_ARTICLE_GROUP_LAST                           2
  

#define ADK_CODE_OF_ARTICLE_ACCOUNT_FIRST                        0              
#define ADK_CODE_OF_ARTICLE_ACCOUNT_CODE                         0              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_TEXT                         1              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_SALES                        2              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_EXPORT_SALES                 3              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_SALES_EU                     4              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_PURCHASE                     5              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_STOCK                        6              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_STOCK_CHANGE                 7              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_PROFIT_CENTRE                8              //eChar 
#define ADK_CODE_OF_ARTICLE_ACCOUNT_VAT                          9              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_VAT_EU                      10              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_SERVICE						11				//eBool
#define ADK_CODE_OF_ARTICLE_ACCOUNT_BUILD						12              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_MIDMAN		 				13              //eChar
#define ADK_CODE_OF_ARTICLE_ACCOUNT_REDUCED_GPF					14				//eChar //Fältet används inte
#define ADK_CODE_OF_ARTICLE_ACCOUNT_PROJECT						15              //eChar 
#define ADK_CODE_OF_ARTICLE_ACCOUNT_TIMESTAMP					16				//eDate
#define ADK_CODE_OF_ARTICLE_ACCOUNT_LAST                        16



#define ADK_CODE_OF_UNIT_FIRST                                   0 
#define ADK_CODE_OF_UNIT_CODE                                    0              //eChar  
#define ADK_CODE_OF_UNIT_DOMESTIC                                1              //eBool
#define ADK_CODE_OF_UNIT_LANGUAGE                                2              //eChar
#define ADK_CODE_OF_UNIT_TEXT                                    3              //eChar
#define ADK_CODE_OF_UNIT_DECIMALS	                             4              //eDouble
#define ADK_CODE_OF_UNIT_ISO									 5				//eChar
#define ADK_CODE_OF_UNIT_TIMESTAMP								 6				//eDate
#define ADK_CODE_OF_UNIT_LAST   	                             6


#define ADK_CODE_OF_PROFIT_CENTRE_FIRST                          0	
#define ADK_CODE_OF_PROFIT_CENTRE_YEAR_ID                        0              //eChar	
#define ADK_CODE_OF_PROFIT_CENTRE_CODE                           1              //eChar
#define ADK_CODE_OF_PROFIT_CENTRE_NAME                           2              //eChar
#define ADK_CODE_OF_PROFIT_CENTRE_TIMESTAMP						 3				//eDate
#define ADK_CODE_OF_PROFIT_CENTRE_LAST	                         3


#define ADK_CODE_OF_PRICE_LIST_FIRST 	                         0              
#define ADK_CODE_OF_PRICE_LIST_CODE 	                         0              //eChar
#define ADK_CODE_OF_PRICE_LIST_TEXT                              1              //eChar   
#define ADK_CODE_OF_PRICE_LIST_CURRENCY_CODE                     2              //eChar   
#define ADK_CODE_OF_PRICE_LIST_LANGUAGE_CODE                     3              //eChar   
#define ADK_CODE_OF_PRICE_LIST_INCLUDING_VAT                     4              //eBool   
#define ADK_CODE_OF_PRICE_LIST_NOTE                              5		        //eChar   
#define ADK_CODE_OF_PRICE_LIST_CHANGE_DATE                       6              //eDate   
#define ADK_CODE_OF_PRICE_LIST_INTERVAL1                         7              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_INTERVAL2                         8              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_INTERVAL3                         9              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_INTERVAL4                        10              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_ROUND_OFF1	                    11              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_ROUND_OFF2                       12              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_ROUND_OFF3	                    13              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_ROUND_OFF4	                    14              //eDouble 
#define ADK_CODE_OF_PRICE_LIST_TIMESTAMP						15				//eDate
#define ADK_CODE_OF_PRICE_LIST_LAST 	                        15   


#define ADK_PRM_FIRST                                            0              
#define ADK_PRM_NAME		                                     0              //eChar
#define ADK_PRM_MAILING_ADDRESS                                  1              //eChar
#define ADK_PRM_VISITING_ADDRESS                                 2              //eChar
#define ADK_PRM_ZIPCODE	                                         3              //eChar
#define ADK_PRM_CITY		                                     4              //eChar
#define ADK_PRM_COUNTRY		                                     5              //eChar
#define ADK_PRM_TELEPHONE		                                 6              //eChar
#define ADK_PRM_TELEPHONE2		                                 7              //eChar
#define ADK_PRM_FAX		                                         8              //eChar
#define ADK_PRM_BGIRO		                                     9              //eChar
#define ADK_PRM_PGIRO		                                    10              //eChar
#define ADK_PRM_ORGANISATION_NUMBER	                            11              //eChar
#define ADK_PRM_VAT_REGISTER_NUMBER	                            12              //eChar
#define ADK_PRM_VAT_NUMBER		                                13              //eChar
#define ADK_PRM_CODE_OF_LANGUAGE                                14              //eChar
#define ADK_PRM_CODE_OF_CURRENCY                                15              //eChar
#define ADK_PRM_CODE_OF_BRANCH                                  16              //eChar
#define ADK_PRM_EMAIL	                                        17              //eChar
#define ADK_PRM_WWW		                                        18              //eChar
#define ADK_PRM_SEAT	                                        19              //eChar
#define ADK_PRM_DELIVERY_NAME	                                20              //eChar
#define ADK_PRM_DELIVERY_ADDRESS                                21              //eChar
#define ADK_PRM_DELIVERY_ADDRESS2                               22              //eChar
#define ADK_PRM_DELIVERY_ZIPCODE                                23              //eChar
#define ADK_PRM_DELIVERY_CITY	                                24              //eChar
#define ADK_PRM_DELIVERY_MAILING_ADDRESS                        25              //eChar
#define ADK_PRM_DELIVERY_COUNTRY	                            26              //eChar
#define ADK_PRM_DELIVERY_TELEPHONE	                            27              //eChar
#define ADK_PRM_DELIVERY_REFERENCE                              28              //eChar
#define ADK_PRM_EANLOC											29              //eChar
#define ADK_PRM_DELIVERY_EANLOC									30              //eChar
#define	ADK_PRM_IBAN_NUMBER										31              //eChar
#define	ADK_PRM_SWIFT_ADRESS									32              //eChar
#define	ADK_PRM_BANK_NAME										33              //eChar
#define	ADK_PRM_BANK_ADRESS										34              //eChar
#define	ADK_PRM_BANK_ADRESS2									35              //eChar
#define	ADK_PRM_BANK_ZIPCODE									36              //eChar
#define	ADK_PRM_BANK_CITY										37              //eChar
#define	ADK_PRM_CODE_OF_COUNTRY									38              //eChar
#define	ADK_PRM_ACCOUNT_NUMBER									39              //eChar
#define ADK_PRM_ADDRESS_CODE_OF_COUNTRY                         40              //eChar
#define ADK_PRM_DELIVERY_CODE_OF_COUNTRY                        41              //eChar
#define ADK_PRM_TAX_REDUCTION_ACTIVATED							42				//eBool
#define ADK_PRM_TAX_REDUCTION_PERCENT							43				//eDouble
#define ADK_PRM_TAX_REDUCTION_MAX_AMOUNT						44				//eDouble
#define	ADK_PRM_PROGRAM											45              //eChar	
#define	ADK_PRM_DATABASE_VERSION								46              //eDouble
#define	ADK_PRM_QUANTITY_ACCOUNTING_ACTIVATED					47              //eBool	
#define	ADK_PRM_TRANSACTIONINFO_ACTIVATED						48              //eBool	
#define	ADK_PRM_SUBACCOUNTS_ACTIVATED							49              //eBool	
#define	ADK_PRM_LANGUAGE_CODE									50              //eChar	
#define	ADK_PRM_CURRENCY_CODE									51              //eChar	
#define	ADK_PRM_DEFAULT_SUP_INV_ATTEST							52              //eChar	
#define	ADK_PRM_DEFAULT_SUPPLIER_PAYM_TERMS						53              //eChar	
#define ADK_PRM_DEFAULT_SUPPLIER_DELIV_TERMS					54              //eChar	
#define ADK_PRM_DEFAULT_SUPPLIER_DELIV_WAY						55              //eChar	
#define ADK_PRM_DEFAULT_SUPPLIER_OUR_REFERENCE					56              //eChar	
#define ADK_PRM_DEFAULT_SUP_INV_ATTEST_ACTIVATED				57				//eBool	
#define ADK_PRM_DEFAULT_PRICE_LIST_ROUND_FROM1					58				//eDouble
#define	ADK_PRM_DEFAULT_PRICE_LIST_ROUND_FROM2					59				//eDouble
#define	ADK_PRM_DEFAULT_PRICE_LIST_ROUND_FROM3					60              //eDouble
#define	ADK_PRM_DEFAULT_PRICE_LIST_ROUND_FROM4					61              //eDouble
#define	ADK_PRM_DEFAULT_PRICE_LIST_ROUND1						62              //eDouble
#define	ADK_PRM_DEFAULT_PRICE_LIST_ROUND2						63              //eDouble
#define	ADK_PRM_DEFAULT_PRICE_LIST_ROUND3						64              //eDouble
#define	ADK_PRM_DEFAULT_PRICE_LIST_ROUND4						65              //eDouble
#define	ADK_PRM_DEFAULT_ARTICLE_GROUP							66              //eChar  
#define	ADK_PRM_DEFAULT_ARTICLE_ACCOUNTING_CODE					67              //eChar	
#define ADK_PRM_DEFAULT_ARTICLE_UNIT_CODE						68              //eChar	
#define ADK_PRM_DEFAULT_ARTICLE_STOCK_GOODS						69              //eBool	
#define ADK_PRM_SNI_CODE										70              //eChar	
#define ADK_PRM_VER_SERIES_ACTIVATED							71              //eBool	
#define ADK_PRM_PRICE_4_DECIMALS_ACTIVATED						72				//eBool	
#define ADK_PRM_DEFAULT_ARTICLE_BARCODE_TYPE					73				//eDouble
#define ADK_PRM_BARCODE_ACTIVATED								74				//eBool 
#define ADK_PRM_AKI_BG_BETSATT									75				//eChar
#define ADK_PRM_AKI_PG_BETSATT									76				//eChar
#define ADK_PRM_TAX_REDUCTION_PERCENT_BUILDING_WORK				77				//eDouble
#define ADK_PRM_TAX_REDUCTION_MAX_AMOUNT_BUILDING_WORK			78				//eDouble
#define ADK_PRM_TAX_REDUCTION_DEFAULT_TYPE						79				//eDouble
#define ADK_PRM_AKI_OCR											80				//eBool
#define ADK_PRM_TAX_REDUCTION_MAX_AMOUNT_GT						81				//eDouble
#define ADK_PRM_LAST                                            81

#define ADK_INVENTORY_ARTICLE_FIRST	 							 0				
#define ADK_INVENTORY_ARTICLE_ARTICLE_NUMBER					 0				//eChar
#define ADK_INVENTORY_ARTICLE_ARTICLE_NAME						 1				//eChar  
#define ADK_INVENTORY_ARTICLE_ARTICLE_GROUP						 2				//eChar  
#define ADK_INVENTORY_ARTICLE_ARTICLE_PLACE_IN_STOCK			 3				//eChar  
#define ADK_INVENTORY_ARTICLE_ARTICLE_UNIT_CODE					 4				//eChar  
#define ADK_INVENTORY_ARTICLE_QUANTITY							 5				//eDouble
#define ADK_INVENTORY_ARTICLE_DATE								 6				//eDate  
#define ADK_INVENTORY_ARTICLE_QUANTITY_IN_STOCK					 7				//eDouble
#define ADK_INVENTORY_ARTICLE_DIFFERENCE						 8				//eChar  
#define ADK_INVENTORY_ARTICLE_LAST_DATE							 9				//eDate  
#define ADK_INVENTORY_ARTICLE_LAST_DIFFERENCE					10				//eDouble
#define ADK_INVENTORY_ARTICLE_ACCUMULATED_DIFFERENCE			11				//eDouble
#define ADK_INVENTORY_ARTICLE_FLAG								12				//eBool
#define ADK_INVENTORY_ARTICLE_BARCODE							13				//eChar
#define ADK_INVENTORY_ARTICLE_LAST								13


#define ADK_MANUAL_DELIVERY_IN_FIRST	 						 0				
#define ADK_MANUAL_DELIVERY_IN_DOCUMENT_NUMBER					 0				//eDouble
#define ADK_MANUAL_DELIVERY_IN_DATE								 1				//eDate  
#define ADK_MANUAL_DELIVERY_IN_ARTICLE_NUMBER 					 2				//eChar  
#define ADK_MANUAL_DELIVERY_IN_ARTICLE_NAME 					 3				//eChar  
#define ADK_MANUAL_DELIVERY_IN_UNIT 							 4				//eChar  
#define ADK_MANUAL_DELIVERY_IN_QUANTITY 						 5				//eDouble
#define ADK_MANUAL_DELIVERY_IN_PRICE_EACH 						 6				//eDouble
#define ADK_MANUAL_DELIVERY_IN_CARGO_AMOUNT_EACH 				 7				//eDouble
#define ADK_MANUAL_DELIVERY_IN_TEXT 							 8				//eChar  
#define ADK_MANUAL_DELIVERY_IN_ACCOUNT 							 9				//eChar  
#define ADK_MANUAL_DELIVERY_IN_PROFIT_CENTRE 					10				//eChar	
#define ADK_MANUAL_DELIVERY_IN_PROJECT 							11				//eChar	
#define ADK_MANUAL_DELIVERY_IN_CANCELLED 						12				//eBool	
#define ADK_MANUAL_DELIVERY_IN_JOURNAL_PRINTED 					13				//eBool	
#define ADK_MANUAL_DELIVERY_IN_TIMESTAMP						14				//eDate
#define ADK_MANUAL_DELIVERY_IN_SERIAL_NUMBER                    15              //eChar   
#define ADK_MANUAL_DELIVERY_IN_BATCH_NUMBER                     16              //eChar   
#define ADK_MANUAL_DELIVERY_IN_BEST_BEFORE                      17              //eDate                             
#define ADK_MANUAL_DELIVERY_IN_LAST								17   


#define ADK_MANUAL_DELIVERY_OUT_FIRST	 						 0				
#define ADK_MANUAL_DELIVERY_OUT_DOCUMENT_NUMBER					 0				//eDouble
#define ADK_MANUAL_DELIVERY_OUT_DATE							 1				//eDate  
#define ADK_MANUAL_DELIVERY_OUT_ARTICLE_NUMBER 					 2				//eChar  
#define ADK_MANUAL_DELIVERY_OUT_ARTICLE_NAME 					 3				//eChar  
#define ADK_MANUAL_DELIVERY_OUT_UNIT 							 4				//eChar  
#define ADK_MANUAL_DELIVERY_OUT_QUANTITY 						 5				//eDouble
#define ADK_MANUAL_DELIVERY_OUT_TEXT 							 6				//eChar  
#define ADK_MANUAL_DELIVERY_OUT_ACCOUNT 						 7				//eChar  
#define ADK_MANUAL_DELIVERY_OUT_PROFIT_CENTRE 					 8				//eChar	
#define ADK_MANUAL_DELIVERY_OUT_PROJECT 						 9				//eChar	
#define ADK_MANUAL_DELIVERY_OUT_CANCELLED 						10				//eBool	
#define ADK_MANUAL_DELIVERY_OUT_JOURNAL_PRINTED 				11				//eBool	
#define ADK_MANUAL_DELIVERY_OUT_TIMESTAMP						12				//eDate
#define ADK_MANUAL_DELIVERY_OUT_SERIAL_NUMBER                   13              //eChar   
#define ADK_MANUAL_DELIVERY_OUT_BATCH_NUMBER                    14              //eChar   
#define ADK_MANUAL_DELIVERY_OUT_BEST_BEFORE                     15              //eDate                             
#define ADK_MANUAL_DELIVERY_OUT_LAST							15  


#define ADK_DISPATCHER_FIST										 0
#define ADK_DISPATCHER_ID										 0				//eChar
#define ADK_DISPATCHER_TEXT										 1				//eChar
#define ADK_DISPATCHER_OUR_CUSTOMER_NUMBER						 2				//eChar
#define ADK_DISPATCHER_TIMESTAMP								 3				//eDate
#define ADK_DISPATCHER_LAST										 3


#define ADK_BOOKING_FIRST										 0				
#define ADK_BOOKING_DOCUMENT_NUMBER								 0				//eDouble
#define ADK_BOOKING_SUPPLIER_NUMBER								 1				//eChar	
#define ADK_BOOKING_SUPPLIER_NAME								 2				//eChar	
#define ADK_BOOKING_MAILING_ADDRESS								 3				//eChar	
#define ADK_BOOKING_MAILING_ADDRESS2							 4				//eChar	
#define ADK_BOOKING_ZIPCODE										 5				//eChar	
#define ADK_BOOKING_CITY                                         6				//eChar	
#define ADK_BOOKING_COUNTRY										 7				//eChar	
#define ADK_BOOKING_DELIVERY_NAME								 8				//eChar	
#define ADK_BOOKING_DELIVERY_MAILING_ADDRESS1					 9				//eChar	
#define ADK_BOOKING_DELIVERY_MAILING_ADDRESS2					10				//eChar	
#define ADK_BOOKING_VISITING_ADDRESS							11				//eChar	
#define ADK_BOOKING_DELIVERY_ZIPCODE							12				//eChar	
#define ADK_BOOKING_DELIVERY_CITY								13				//eChar	
#define ADK_BOOKING_DELIVERY_COUNTRY							14				//eChar	
#define ADK_BOOKING_SUPPLIER_CUSTOMER_REFERENCE_NAME			15				//eChar	
#define ADK_BOOKING_SUPPLIER_REFERENCE							16				//eChar	
#define ADK_BOOKING_OUR_REFERENCE								17				//eChar	
#define ADK_BOOKING_LANGUAGE_CODE								18				//eChar	
#define ADK_BOOKING_CURRENCY_CODE								19				//eChar	
#define ADK_BOOKING_SUPPLIER_ORDER_NUMBER						20				//eChar	
#define ADK_BOOKING_NOT_DONE									21				//eBool	
#define ADK_BOOKING_DELIVERED									22				//eBool	
#define ADK_BOOKING_CANCELLED									23				//eBool	
#define ADK_BOOKING_PRINTED										24				//eBool	
#define ADK_BOOKING_CODE_OF_TERMS_OF_PAYMENT					25				//eChar	
#define ADK_BOOKING_CODE_OF_TERMS_OF_DELIVERY					26				//eChar	
#define ADK_BOOKING_CODE_OF_WAY_OF_DELIVERY						27				//eChar	
#define ADK_BOOKING_DATE										28				//eDate	
#define ADK_BOOKING_DELIVERY_DATE								29				//eDate	
#define ADK_BOOKING_PROJECT_CODE								30				//eChar	
#define ADK_BOOKING_PROFIT_CENTRE								31				//eChar	
#define ADK_BOOKING_TOTAL_AMOUNT								32				//eDouble
#define ADK_BOOKING_TEXT1										33				//eChar	
#define ADK_BOOKING_TEXT2										34				//eChar	
#define ADK_BOOKING_TEXT3										35				//eChar	
#define ADK_BOOKING_OUR_CUSTOMER_NUMBER							36				//eChar	
#define ADK_BOOKING_EANLOC										37				//eChar	
#define ADK_BOOKING_DELIVERY_EANLOC								38				//eChar	
#define ADK_BOOKING_ROWS										39				//eData   
#define ADK_BOOKING_NROWS										40				//eDouble 
#define ADK_BOOKING_CODE_OF_COUNTRY                             41              //eChar
#define ADK_BOOKING_DELIVERY_CODE_OF_COUNTRY                    42              //eChar
#define ADK_BOOKING_CONTRACTNR                                  43              //eChar
#define ADK_BOOKING_TIMESTAMP									44				//eDate
#define ADK_BOOKING_PRINTOPTION									45				//eDouble
#define ADK_BOOKING_ELECTRONIC_REFERENCE						46				//eChar
#define ADK_BOOKING_ELECTRONIC_ATTACHMENT						47             //eChar
#define ADK_BOOKING_LOCAL_REMARK								48             //eChar
#define ADK_BOOKING_LAST										48


#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_FIRST					 0				//eChar
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_CODE					 0				//eBool	
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_ARTICLE_GROUP_FLAG	 1				//eChar	
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_ARTICLE_GROUP			 2				//eChar
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_ARTICLE_NUMBER		 3				//eChar	
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_PRICELIST				 4				//eDouble
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_ROW_DISCOUNT			 5
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_TIMESTAMP				 6				//eDate
#define ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_LAST					 6


#define ADK_CODE_OF_ARTICLE_PARCEL_FIRST						 0
#define ADK_CODE_OF_ARTICLE_PARCEL_NR							 0				//eChar	
#define ADK_CODE_OF_ARTICLE_PARCEL_ARTICLE_NR					 1				//eChar	
#define ADK_CODE_OF_ARTICLE_PARCEL_TEXT							 2				//eChar	
#define ADK_CODE_OF_ARTICLE_PARCEL_TEXT2						 3				//eChar	
#define ADK_CODE_OF_ARTICLE_PARCEL_QUANTITY						 4				//eDouble
#define ADK_CODE_OF_ARTICLE_PARCEL_TOTAL						 5				//eDouble
#define ADK_CODE_OF_ARTICLE_PARCEL_ROWNR						 6				//eDouble
#define ADK_CODE_OF_ARTICLE_PARCEL_TYPE_OF_ROW					 7				//eChar	
#define ADK_CODE_OF_ARTICLE_PARCEL_WRITE_OFFER					 8				//eBool	
#define ADK_CODE_OF_ARTICLE_PARCEL_WRITE_ORDER					 9				//eBool	
#define ADK_CODE_OF_ARTICLE_PARCEL_WRITE_INVOICE				10				//eBool	
#define ADK_CODE_OF_ARTICLE_PARCEL_WRITE_DELIVERY_NOTE			11				//eBool
#define ADK_CODE_OF_ARTICLE_PARCEL_TIMESTAMP					12				//eDate
#define ADK_CODE_OF_ARTICLE_PARCEL_LAST							12


#define ADK_CODE_OF_ARTICLE_NAME_FIRST							 0
#define ADK_CODE_OF_ARTICLE_NAME_LANGUAGE_CODE					 0				//eChar
#define ADK_CODE_OF_ARTICLE_NAME_ARTICLE_NUMBER					 1				//eChar
#define ADK_CODE_OF_ARTICLE_NAME_NAME							 2				//eChar
#define ADK_CODE_OF_ARTICLE_NAME_NAME2							 3				//eChar
#define ADK_CODE_OF_ARTICLE_NAME_TIMESTAMP						 4				//eDate
#define ADK_CODE_OF_ARTICLE_NAME_LAST							 4


#define ADK_PRICE_FIRST											 0				
#define ADK_PRICE_PRICE_LIST									 0				//eChar	
#define ADK_PRICE_ARTICLE_NUMBER								 1				//eChar	
#define ADK_PRICE_QUANTITY										 2				//eDouble
#define ADK_PRICE_PRICE											 3				//eDouble
#define ADK_PRICE_BASE											 4				//eBool	
#define ADK_PRICE_PER_CENT										 5				//eDouble
#define ADK_PRICE_DATE_OF_CHANGE								 6				//eDate
#define ADK_PRICE_TIMESTAMP										 7				//eDate
#define ADK_PRICE_LAST											 7


#define ADK_ARTICLE_PURCHASE_PRICE_FIRST						 0
#define ADK_ARTICLE_PURCHASE_PRICE_ARTICLE_NUMBER				 0				//eChar	
#define ADK_ARTICLE_PURCHASE_PRICE_SUPPLIER_NUMBER				 1				//eChar	
#define ADK_ARTICLE_PURCHASE_PRICE_QUANTITY						 2				//eDouble
#define ADK_ARTICLE_PURCHASE_PRICE_PRICE						 3				//eDouble
#define ADK_ARTICLE_PURCHASE_PRICE_SUPPLIER_ARTICLE_NUMBER		 4				//eChar	
#define ADK_ARTICLE_PURCHASE_PRICE_BASE							 5				//eBool	
#define ADK_ARTICLE_PURCHASE_PRICE_CHANGED						 6				//eBool	
#define ADK_ARTICLE_PURCHASE_PRICE_CHANGED_DATE					 7				//eDate	
#define ADK_ARTICLE_PURCHASE_PRICE_PRICE_NEW					 8				//eDouble
#define ADK_ARTICLE_PURCHASE_PRICE_PRICE_PER_CENT				 9				//eDouble
#define ADK_ARTICLE_PURCHASE_PRICE_TIMESTAMP					10				//eDate
#define ADK_ARTICLE_PURCHASE_PRICE_LAST							10


#define ADK_CODE_OF_WAY_OF_PAYMENT_FIRST						 0	
#define ADK_CODE_OF_WAY_OF_PAYMENT_CODE							 0				//eChar
#define ADK_CODE_OF_WAY_OF_PAYMENT_TEXT							 1				//eChar
#define ADK_CODE_OF_WAY_OF_PAYMENT_ACCOUNT						 2				//eChar
#define ADK_CODE_OF_WAY_OF_PAYMENT_TIMESTAMP					 3				//eDate
#define ADK_CODE_OF_WAY_OF_PAYMENT_LAST							 3


 //SPCS Förening
#define ADK_FREE_CATEGORY_FIRST									 0
#define ADK_FREE_CATEGORY_CATEGORY								 0		
#define ADK_FREE_CATEGORY_NAME									 1
#define ADK_FREE_CATEGORY_TIMESTAMP								 2				//eDate
#define ADK_FREE_CATEGORY_LAST									 2


 //SPCS Förening
#define ADK_MEMBER_FIRST                                         0          
#define ADK_MEMBER_NUMBER                                        0              //eChar 
#define ADK_MEMBER_FIRST_NAME                                    1              //eChar 
#define ADK_MEMBER_LAST_NAME                                     2              //eChar 
#define ADK_MEMBER_OWN_ADDRESS                                   3              //eChar 
#define ADK_MEMBER_MAILING_ADDRESS                               4              //eBool 
#define ADK_MEMBER_MAILING_ADDRESS2                              5              //eChar
#define ADK_MEMBER_ZIPCODE	                                     6              //eChar 
#define ADK_MEMBER_CITY                                          7              //eChar 
#define ADK_MEMBER_COUNTRY	                                     8              //eChar 
#define ADK_MEMBER_TELEPHONE  	                                 9              //eChar 
#define ADK_MEMBER_TELEPHONE2	                                10              //eChar 
#define ADK_MEMBER_PERSONAL_NUMBER	                            11              //eChar 
#define ADK_MEMBER_SEX                                          12              //eDouble
#define ADK_MEMBER_EMAIL                                        13              //eChar 
#define ADK_MEMBER_DOCUMENT_PATH                                14              //eChar 
#define ADK_MEMBER_REMARK1                                      15              //eChar 
#define ADK_MEMBER_REMARK2                                      16              //eChar 
#define ADK_MEMBER_CATEGORY                                     17              //eChar 
#define ADK_MEMBER_FREE_CATEGORY1                               18              //eChar 
#define ADK_MEMBER_FREE_CATEGORY2                               19              //eChar 
#define ADK_MEMBER_FREE_CATEGORY3                               20              //eChar 
#define ADK_MEMBER_FREE_CATEGORY4                               21              //eChar 
#define ADK_MEMBER_FREE_CATEGORY5                               22              //eChar 
#define ADK_MEMBER_FREE_CATEGORY6                               23              //eChar 
#define ADK_MEMBER_FREE_CATEGORY7                               24              //eChar 
#define ADK_MEMBER_FREE_CATEGORY8                               25              //eChar 
#define ADK_MEMBER_FREE_CATEGORY9                               26              //eChar 
#define ADK_MEMBER_FREE_CATEGORY10                              27              //eChar 
#define ADK_MEMBER_SORT_ORDER                                   28              //eChar 
#define ADK_MEMBER_BGIRO	                                    29              //eChar 
#define ADK_MEMBER_PGIRO                                        30              //eChar 
#define ADK_MEMBER_CODE_OF_TERMS_OF_PAYMENT                     31              //eChar 
#define ADK_MEMBER_PRICE_LIST                                   32              //eChar 
#define ADK_MEMBER_INTEREST_INVOICE                             33              //eBool 
#define ADK_MEMBER_REMINDER                                     34              //eBool 
#define ADK_MEMBER_DEMAND_FEE                                   35              //eBool 
#define ADK_MEMBER_FAMILY_NUMBER                                36              //eChar 
#define ADK_MEMBER_TEL3			                                37              //eChar 
#define ADK_MEMBER_CODE_OF_COUNTRY                              38              //eChar 
#define ADK_MEMBER_CODE_OF_TERMS_OF_DELIVERY					39              //eChar 
#define ADK_MEMBER_CODE_OF_WAY_OF_DELIVERY						40              //eChar 
#define ADK_MEMBER_MOBILE_PHONE									41				//eChar
#define ADK_MEMBER_ACCEPT_COMMERCIAL_EMAIL						42				//eBool
#define ADK_MEMBER_ACCEPT_COMMERCIAL_SMS						43				//eBool
#define ADK_MEMBER_TIMESTAMP									44				//eDate
#define ADK_MEMBER_PRINTOPTION_INVOICE							45				//eDouble
#define ADK_MEMBER_PRINTOPTION_INVOICE_EX						46				//eDouble
#define ADK_MEMBER_PRINTOPTION_CREDITINVOICE					47				//eDouble
#define ADK_MEMBER_PRINTOPTION_INTERESTINVOICE					48				//eDouble
#define ADK_MEMBER_PRINTOPTION_CASH_INVOICE						49				//eDouble
#define ADK_MEMBER_COPY_INVOICE									50				//eDouble
#define ADK_MEMBER_COPY_INVOICE_EX								51				//eDouble
#define ADK_MEMBER_COPY_CREDITINVOICE							52				//eDouble
#define ADK_MEMBER_COPY_INTERESTINVOICE							53				//eDouble
#define ADK_MEMBER_COPY_CASH_INVOICE							54				//eDouble
#define ADK_MEMBER_LAST   	                                    54


#define ADK_DELIVERY_NOTE_FIRST									0
#define ADK_DELIVERY_NOTE_DOCUMENT_NUMBER						0				//eDouble
#define ADK_DELIVERY_NOTE_SUPPLIER_NUMBER						1				//eChar	
#define ADK_DELIVERY_NOTE_SUPPLIER_NAME							2				//eChar	
#define ADK_DELIVERY_NOTE_DELIVERY_NUMBER						3				//eChar	
#define ADK_DELIVERY_NOTE_DATE									4				//eDate	
#define ADK_DELIVERY_NOTE_ARRIVAL_DATE							5				//eDate	
#define ADK_DELIVERY_NOTE_CANCELLED								6				//eBool	
#define ADK_DELIVERY_NOTE_NOTE1									7				//eChar	
#define ADK_DELIVERY_NOTE_NOTE2									8				//eChar	
#define ADK_DELIVERY_NOTE_NOTE3								   	9				//eChar	
#define ADK_DELIVERY_NOTE_PROJECT_CODE						    10				//eChar	
#define ADK_DELIVERY_NOTE_PROFIT_CENTRE						    11				//eChar	
#define ADK_DELIVERY_NOTE_INVOICE_SENT					        12				//eBool	
#define ADK_DELIVERY_NOTE_CURRENCY_CODE							13				//eChar
#define ADK_DELIVERY_NOTE_ROWS									14				//eData   
#define ADK_DELIVERY_NOTE_NROWS									15				//eDouble 
#define ADK_DELIVERY_NOTE_DN_ARRIVAL_DATE					    16				//eDate	
#define ADK_DELIVERY_NOTE_DN_DELIVER_DATE					    17				//eDate	
#define ADK_DELIVERY_NOTE_DN_NUMBER		    			        18				//eChar	
#define ADK_DELIVERY_NOTE_DN_NOT_DONE							19				//eBool   
#define ADK_DELIVERY_NOTE_DN_CREATED_EDI					    20				//eBool	
#define ADK_DELIVERY_NOTE_INV_DATE								21				//eDate
#define ADK_DELIVERY_NOTE_TIMESTAMP								22				//eDate
#define ADK_DELIVERY_NOTE_LOCAL_REMARK		    			    23				//eChar	
#define ADK_DELIVERY_NOTE_LAST								    23


#define ADK_PACKAGE_HEAD_FIRST									0
#define ADK_PACKAGE_HEAD_PACKAGE_NUMBER		    				0				//eChar	
#define ADK_PACKAGE_HEAD_PACKAGE_REFERENCE						1				//eChar	
#define ADK_PACKAGE_HEAD_QUANTITY								2				//eDouble	
#define ADK_PACKAGE_HEAD_TYPE       							3				//eDate	
#define ADK_PACKAGE_HEAD_GROSS_WEIGHT							4				//eDouble	
#define ADK_PACKAGE_HEAD_GROSS_VOLUME							5				//eDouble	
#define ADK_PACKAGE_HEAD_NET_WEIGHT								6				//eDouble	
#define ADK_PACKAGE_HEAD_NET_VOLUME							   	7				//eDouble	
#define ADK_PACKAGE_HEAD_AREA              					    8				//eChar	
#define ADK_PACKAGE_HEAD_IDENT						            9				//eChar	
#define ADK_PACKAGE_HEAD_BATCH_NUMBER					        10				//eChar	
#define ADK_PACKAGE_HEAD_CONNECTION_DOCUMENT					11				//eDouble
#define ADK_PACKAGE_HEAD_BEST_BEFORE							12				//eDate
#define ADK_PACKAGE_HEAD_ROWS                                   13              //eData
#define ADK_PACKAGE_HEAD_NROWS									14				//eDouble    
#define ADK_PACKAGE_HEAD_LAST								    14


#define ADK_PACKAGE_ROW_FIRST									0
#define ADK_PACKAGE_ROW_ROWNR            	    				0				//eChar
#define ADK_PACKAGE_ROW_NAME            	    				1				//eChar
#define ADK_PACKAGE_ROW_QUANTITY           						2				//eDouble	
#define ADK_PACKAGE_ROW_ARTICLE_NUMBER							3				//eChar	
#define ADK_PACKAGE_ROW_SERIAL_NUMBER							4				//eChar	
#define ADK_PACKAGE_ROW_BATCH_NUMBER						   	5				//eChar	
#define ADK_PACKAGE_ROW_BEST_BEFORE       					    6				//eDate	
#define ADK_PACKAGE_ROW_ORDER_ROW_NUMBER			            7				//eDouble	
#define ADK_PACKAGE_ROW_LAST								    7


#define ADK_IMP_PACKAGE_HEAD_FIRST								0
#define ADK_IMP_PACKAGE_HEAD_PACKAGE_NUMBER		   				0				//eChar	
#define ADK_IMP_PACKAGE_HEAD_QUANTITY							1				//eDouble	
#define ADK_IMP_PACKAGE_HEAD_TYPE       						2				//eDate	
#define ADK_IMP_PACKAGE_HEAD_GROSS_WEIGHT						3				//eDouble	
#define ADK_IMP_PACKAGE_HEAD_GROSS_VOLUME						4				//eDouble	
#define ADK_IMP_PACKAGE_HEAD_NET_WEIGHT							5				//eDouble	
#define ADK_IMP_PACKAGE_HEAD_NET_VOLUME			    		   	6				//eDouble	
#define ADK_IMP_PACKAGE_HEAD_AREA              				    7				//eChar	
#define ADK_IMP_PACKAGE_HEAD_IDENT					            8				//eChar	
#define ADK_IMP_PACKAGE_HEAD_BATCH_NUMBER				        9				//eChar	
#define ADK_IMP_PACKAGE_HEAD_CONNECTION_DOCUMENT				10				//eDouble
#define ADK_IMP_PACKAGE_HEAD_BEST_BEFORE						11				//eDate
#define ADK_IMP_PACKAGE_HEAD_ROWS                               12              //eData
#define ADK_IMP_PACKAGE_HEAD_NROWS								13				//eDouble    
#define ADK_IMP_PACKAGE_HEAD_LAST							    13


#define ADK_IMP_PACKAGE_ROW_FIRST								0
#define ADK_IMP_PACKAGE_ROW_ROWNR            	    			0				//eChar
#define ADK_IMP_PACKAGE_ROW_NAME            	    			1				//eChar
#define ADK_IMP_PACKAGE_ROW_QUANTITY           					2				//eDouble	
#define ADK_IMP_PACKAGE_ROW_ARTICLE_NUMBER						3				//eChar	
#define ADK_IMP_PACKAGE_ROW_SERIAL_NUMBER						4				//eChar	
#define ADK_IMP_PACKAGE_ROW_BATCH_NUMBER					   	5				//eChar	
#define ADK_IMP_PACKAGE_ROW_BEST_BEFORE       				    6				//eDate	
#define ADK_IMP_PACKAGE_ROW_LAST							    6

#define ADK_DELIVERY_FIRST										0
#define ADK_DELIVERY_CUSTOMER_NUMBER							0				//eChar
#define ADK_DELIVERY_NAME										1				//eChar
#define ADK_DELIVERY_ADDRESS									2				//eChar
#define ADK_DELIVERY_ADDRESS2									3				//eChar
#define ADK_DELIVERY_EANLOC										4				//eChar
#define ADK_DELIVERY_VISITING_ADDRESS							5				//eChar
#define ADK_DELIVERY_ZIPCODE									6				//eChar
#define ADK_DELIVERY_CITY										7				//eChar
#define ADK_DELIVERY_CODE_OF_COUNTRY							8				//eChar
#define ADK_DELIVERY_COUNTRY									9				//eChar
#define ADK_DELIVERY_TELEPHONE1									10				//eChar
#define ADK_DELIVERY_TELEPHONE2									11				//eChar
#define ADK_DELIVERY_TELEPHONE3									12				//eChar
#define ADK_DELIVERY_FAX										13
#define ADK_DELIVERY_TIMESTAMP									14				//eDate
#define ADK_DELIVERY_ID											15				//eDouble
#define ADK_DELIVERY_LAST									    15

#define ADK_PRM2_FIRST											 0
#define ADK_PRM2_VAT1											 0				//eDouble
#define ADK_PRM2_VAT2											 1				//eDouble
#define ADK_PRM2_VAT3											 2				//eDouble
#define ADK_PRM2_VAT4											 3				//eDouble
#define ADK_PRM2_NORM											 4				//eChar
#define ADK_PRM2_DEFAULT_VATCODE_CARGO_FEE						 5				//eChar	
#define ADK_PRM2_DEFAULT_VATCODE_DISPATCH_FEE					 6				//eChar	
#define ADK_PRM2_DEFAULT_VATCODE_DEMAND_FEE						 7				//eChar	
#define ADK_PRM2_LIMIT_DISPATCH_FEE								 8				//eDouble
#define ADK_PRM2_LIMIT_CARGO_FEE								 9				//eDouble
#define ADK_PRM2_DEFAULT_PRICELIST								10				//eChar	
#define ADK_PRM2_DEFAULT_CUST_EXPORT							11				//eBool	
#define ADK_PRM2_DEFAULT_CUST_EU_CUSTOMER						12				//eBool	
#define ADK_PRM2_DEFAULT_CUST_PAYMENT_TERMS						13				//eChar	
#define ADK_PRM2_DEFAULT_CUST_DELIVERY_TERMS					14				//eChar	
#define ADK_PRM2_DEFAULT_CUST_DELIVERY_WAY						15				//eChar	
#define ADK_PRM2_DEFAULT_CUST_CREDIT_LIMIT						16				//eDouble
#define ADK_PRM2_DEFAULT_CUST_CATEGORY							17				//eChar	
#define ADK_PRM2_DEFAULT_CUST_SELLER							18				//eChar	
#define ADK_PRM2_DEFAULT_CUST_DISTRICT							19				//eChar	
#define ADK_PRM2_DEFAULT_CUST_INTEREST_INVOICE					20				//eBool	
#define ADK_PRM2_DEFAULT_CUST_REMINDER							21				//eBool	
#define ADK_PRM2_DEFAULT_CUST_DEMAND_FEE						22				//eBool	
#define ADK_PRM2_DEFAULT_CUST_DO_NOT_CREATE_BACKORDER			23				//eBool	
#define ADK_PRM2_DEFAULT_CUST_DISPATCH_FEE						24				//eBool	
#define ADK_PRM2_DEFAULT_CUST_SUMMARY_INVOICE					25				//eBool	
#define ADK_PRM2_DEFAULT_CUST_CARGO_FEE							26				//eBool	
#define ADK_PRM2_DEFAULT_CUST_DISPATCHER						27				//eChar	
#define ADK_PRM2_DEFAULT_CUST_ADDRESS_TO_BOOKING				28				//eBool	
#define ADK_PRM2_DEFAULT_OOI_OUR_REFERENCE_NAME					29				//eChar	
#define ADK_PRM2_DEFAULT_OOI_DISPATCH_FEE						30				//eDouble
#define ADK_PRM2_DEFAULT_OOI_CARGO_FEE							31				//eDouble
#define ADK_PRM2_DEFAULT_OOI_CARGO_FEE_INCL_VAT					32				//eDouble
#define ADK_PRM2_DEFAULT_OOI_DISPATCH_FEE_INCL_VAT				33				//eDouble
#define ADK_PRM2_DEFAULT_INVOICE_CREDIT_NOTE_STORAGE_AFFECT		34				//eBool	
#define ADK_PRM2_DEFAULT_OFFER_VALID_TIME						35				//eDouble
#define ADK_PRM2_NEXT_CUSTOMER_NO								36				//eChar	
#define ADK_PRM2_NEXT_SUPPLIER_NO								37				//eChar	
#define ADK_PRM2_NEXT_ARTICLE_NO								38				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_CASH							39				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_PGIRO							40				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_BGIRO							41				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_CUSTOMER_CLAIM					42				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_VAT_IN							43				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_SUPPL_DEBT						44				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_VAT1							45				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_VAT2							46				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_VAT3							47				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_VAT4							48				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_SALES							49				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_SALES_EXPORT					50				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_ROUND							51				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DISP_FEE						52				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DISP_FEE_EXPORT				53				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_CARGO_FEE						54				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_CARGO_FEE_EXP					55				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DISCOUNT						56				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_CUST_INTEREST					57				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DEMAND_FEE						58				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DEMAND_FEE_EXPORT				59				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_SUP_INV_CARGO_FEE				60				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DISOUNT_EXPORT					61				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_CURRENCY_ADJ					62				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_SALES_EU						63				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DISP_FEE_EU					64				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_CARGO_FEE_EU					65				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DISCOUNT_EU					66				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_PAYMENT_FEE					67				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_VAT_EU							68				//eChar	
#define ADK_PRM2_DEFAULT_ACCOUNT_DEBT_DELIV_NOTE				69				//eChar	
#define ADK_PRM2_DEFAULT_MEMBER_CATEGORY						70				//eChar	
#define ADK_PRM2_MEMBER_PNR_CHECK_ACTIVE						71				//eBool	
#define ADK_PRM2_FREE_CAT1_ACTIVE								72				//eBool	
#define ADK_PRM2_FREE_CAT2_ACTIVE								73				//eBool	
#define ADK_PRM2_FREE_CAT3_ACTIVE								74				//eBool	
#define ADK_PRM2_FREE_CAT4_ACTIVE								75				//eBool	
#define ADK_PRM2_FREE_CAT5_ACTIVE								76				//eBool	
#define ADK_PRM2_FREE_CAT6_ACTIVE								77				//eBool	
#define ADK_PRM2_FREE_CAT7_ACTIVE								78				//eBool	
#define ADK_PRM2_FREE_CAT8_ACTIVE								79				//eBool	
#define ADK_PRM2_FREE_CAT9_ACTIVE								80				//eBool	
#define ADK_PRM2_FREE_CAT10_ACTIVE								81				//eBool	
#define ADK_PRM2_FREE_CAT1_NAME									82				//eChar 
#define ADK_PRM2_FREE_CAT2_NAME									83				//eChar 
#define ADK_PRM2_FREE_CAT3_NAME									84				//eChar 
#define ADK_PRM2_FREE_CAT4_NAME									85				//eChar 
#define ADK_PRM2_FREE_CAT5_NAME									86				//eChar 
#define ADK_PRM2_FREE_CAT6_NAME									87				//eChar 
#define ADK_PRM2_FREE_CAT7_NAME									88				//eChar 
#define ADK_PRM2_FREE_CAT8_NAME									89				//eChar 
#define ADK_PRM2_FREE_CAT9_NAME									90				//eChar 
#define ADK_PRM2_FREE_CAT10_NAME								91				//eChar 
#define ADK_PRM2_LAST											91
																  
#define ADK_CODE_OF_YOUR_REF_CUSTOMER_FIRST						0 
#define ADK_CODE_OF_YOUR_REF_CUSTOMER_NUMBER					0				//eChar
#define ADK_CODE_OF_YOUR_REF_SIGN								1				//eChar
#define ADK_CODE_OF_YOUR_REF_NAME								2				//eChar
#define ADK_CODE_OF_YOUR_REF_TIMESTAMP							3				//eDate
#define ADK_CODE_OF_YOUR_REF_CUSTOMER_LAST						3

#define ADK_CODE_OF_YOUR_REF_SUPPLIER_FIRST						0
#define ADK_CODE_OF_YOUR_REF_SUPPLIER_NUMBER					0				//eChar
#define ADK_CODE_OF_YOUR_REF_SUPPLIER_SIGN						1				//eChar
#define ADK_CODE_OF_YOUR_REF_SUPPLIER_NAME						2				//eChar
#define ADK_CODE_OF_YOUR_REF_SUPPLIER_TIMESTAMP					3				//eDate
#define ADK_CODE_OF_YOUR_REF_SUPPLIER_LAST						3

#define ADK_CODE_OF_COUNTRY_CODE_FIRST							0
#define ADK_CODE_OF_COUNTRY_CODE_CODE							0				//eChar
#define ADK_CODE_OF_COUNTRY_CODE_COUNTRY						1				//eChar
#define ADK_CODE_OF_COUNTRY_CODE_ISO							2				//eBool
#define ADK_CODE_OF_COUNTRY_CODE_TIMESTAMP						3				//eDate
#define ADK_CODE_OF_COUNTRY_CODE_LAST							3

#define ADK_CONTACTS_FIRST										0		
#define ADK_CONTACTS_ID											0				//eDouble
#define ADK_CONTACTS_SIGN										1				//eChar
#define ADK_CONTACTS_NAME										2				//eChar
#define ADK_CONTACTS_CUSTOMER_NUMBER							3				//eChar
#define ADK_CONTACTS_SUPPLIER_NUMBER							4				//eChar
#define ADK_CONTACTS_TITLE										5				//eChar
#define ADK_CONTACTS_TELEPHONE									6				//eChar
#define ADK_CONTACTS_TELEPHONE2									7				//eChar
#define ADK_CONTACTS_MOBILEPHONE								8				//eChar
#define ADK_CONTACTS_EMAIL										9				//eChar
#define ADK_CONTACTS_COMPANY_NAME							   10				//eChar
#define ADK_CONTACTS_MAILING_ADDRESS						   11				//eChar
#define ADK_CONTACTS_MAILING_ADDRESS2						   12				//eChar
#define ADK_CONTACTS_VISITING_ADDRESS						   13				//eChar
#define ADK_CONTACTS_ZIP_CODE								   14				//eChar
#define ADK_CONTACTS_CITY									   15				//eChar
#define ADK_CONTACTS_CODE_OF_COUNTRY						   16				//eChar
#define ADK_CONTACTS_COUNTRY								   17				//eChar
#define ADK_CONTACTS_NOTES									   18				//eChar
#define ADK_CONTACTS_ACCEPT_COMMERCIAL_EMAIL				   19				//eBool
#define ADK_CONTACTS_ACCEPT_COMMERCIAL_SMS					   20				//eBool
#define ADK_CONTACTS_CATEGORY								   21				//eChar
#define ADK_CONTACTS_DELETE_INCLUDE_MAIN_REF				   22				//eBool
#define ADK_CONTACTS_TIMESTAMP								   23				//eDate
#define ADK_CONTACTS_LAST									   23

#define ADK_CODE_OF_CONTACT_TITLE_FIRST							0
#define ADK_CODE_OF_CONTACT_TITLE_ID							0				//eDouble
#define ADK_CODE_OF_CONTACT_TITLE_NAME							1				//eChar
#define ADK_CODE_OF_CONTACT_TITLE_TIMESTAMP						2				//eDate
#define ADK_CODE_OF_CONTACT_TITLE_LAST							2

#define ADK_CODE_OF_CONTACT_GROUPS_FIRST						0
#define ADK_CODE_OF_CONTACT_GROUPS_ID							0				//eDouble
#define ADK_CODE_OF_CONTACT_GROUPS_NAME							1				//eChar
#define ADK_CODE_OF_CONTACT_GROUPS_TIMESTAMP					2				//eDate
#define ADK_CODE_OF_CONTACT_GROUPS_LAST							2

#define ADK_CODE_OF_CONTACT_GROUP_CONTACTS_FIRST				0
#define ADK_CODE_OF_CONTACT_GROUP_CONTACTS_CONTACT_ID			0				//eDouble
#define ADK_CODE_OF_CONTACT_GROUP_CONTACTS_GROUP_ID				1				//eDouble
#define ADK_CODE_OF_CONTACT_GROUP_CONTACTS_GROUP_NAME			2				//eChar
#define ADK_CODE_OF_CONTACT_GROUP_CONTACTS_TIMESTAMP			3				//eDate
#define ADK_CODE_OF_CONTACT_GROUP_CONTACTS_LAST					3

#define ADK_CUSTOMERPAYMENT_FIRST								0
#define ADK_CUSTOMERPAYMENT_NR									0				//eDouble
#define ADK_CUSTOMERPAYMENT_INVOICE_NUMBER						1				//eDouble
#define ADK_CUSTOMERPAYMENT_DATE								2				//eDate
#define ADK_CUSTOMERPAYMENT_ADJUSTMENT_FL					    3				//eBool
#define ADK_CUSTOMERPAYMENT_ADJUSTMENT_DUE_TO_CURRENCY			4				//eBool
#define ADK_CUSTOMERPAYMENT_FEE								    5				//eBool
#define ADK_CUSTOMERPAYMENT_CURRENCY_RATE						6				//eDouble
#define ADK_CUSTOMERPAYMENT_AMOUNT_CURRENCY					    7				//eDouble
#define ADK_CUSTOMERPAYMENT_AMOUNT_KR							8				//eDouble
#define ADK_CUSTOMERPAYMENT_PAYTEXT								9				//eChar
#define ADK_CUSTOMERPAYMENT_CURRENCY_CODE					   10				//eChar
#define ADK_CUSTOMERPAYMENT_PAYMENT_CODE					   11				//eChar
#define ADK_CUSTOMERPAYMENT_STATUS							   12				//eChar
#define ADK_CUSTOMERPAYMENT_VERID							   13               //eChar
#define ADK_CUSTOMERPAYMENT_INCLUDED_IN_PAYMENT_BATCH		   14				//eBool
#define ADK_CUSTOMERPAYMENT_JOURNAL_NUMBER					   15				//eDouble
#define ADK_CUSTOMERPAYMENT_VER_NUMBER						   16				//eDouble
#define ADK_CUSTOMERPAYMENT_VER_SERIES						   17				//eChar
#define ADK_CUSTOMERPAYMENT_AMOUNT_OUT						   18				//eDouble
#define ADK_CUSTOMERPAYMENT_AMOUNT							   19				//eDouble
#define ADK_CUSTOMERPAYMENT_ADJUSTMENT_CODE					   20				//eChar
#define ADK_CUSTOMERPAYMENT_ADJUSTMENT						   21				//eDouble
#define ADK_CUSTOMERPAYMENT_ADJUSTMENT_KR					   22				//eDouble
#define ADK_CUSTOMERPAYMENT_ACCOUNT							   23				//eChar
#define ADK_CUSTOMERPAYMENT_CANCELLED						   24				//eBool
#define ADK_CUSTOMERPAYMENT_ROW_NUMBER					       25				//eDouble
#define ADK_CUSTOMERPAYMENT_CONNECTION_ROW					   26				//eDouble
#define ADK_CUSTOMERPAYMENT_FILE_FL							   27				//eBool
#define ADK_CUSTOMERPAYMENT_NOT_DONE						   28				//eBool
#define ADK_CUSTOMERPAYMENT_INVOICE_REF						   29				//eChar
#define ADK_CUSTOMERPAYMENT_STATUS_C						   30				//eChar
#define ADK_CUSTOMERPAYMENT_SETTLED							   31				//eBool
#define ADK_CUSTOMERPAYMENT_SETTLED_INVOICE_NR				   32				//eDouble
#define ADK_CUSTOMERPAYMENT_AMOUNT_FEE						   33				//eDouble
#define ADK_CUSTOMERPAYMENT_AMOUNTDEMAND					   34				//eDouble
#define ADK_CUSTOMERPAYMENT_AMOUNT_CANCELLED				   35				//eDouble
#define ADK_CUSTOMERPAYMENT_AMOUNT_PAID						   36				//eDouble
#define ADK_CUSTOMERPAYMENT_ROW_TYPE						   37				//eChar
#define ADK_CUSTOMERPAYMENT_TIMESTAMP						   38				//eDate
#define ADK_CUSTOMERPAYMENT_LAST							   38

#define ADK_CODE_OF_ADJUSTMENT_CODE_FIRST						0
#define ADK_CODE_OF_ADJUSTMENT_CODE_CODE						0				//eChar
#define ADK_CODE_OF_ADJUSTMENT_CODE_TEXT						1				//eChar
#define ADK_CODE_OF_ADJUSTMENT_CODE_ACCOUNT						2				//eChar
#define ADK_CODE_OF_ADJUSTMENT_CODE_TIMESTAMP					3				//eDate
#define ADK_CODE_OF_ADJUSTMENT_CODE_LAST						3

#define ADK_SUPPLIERPAYMENT_FIRST								0
#define ADK_SUPPLIERPAYMENT_PAYORDER							0				//eDouble
#define ADK_SUPPLIERPAYMENT_PAYROW								1				//eDouble
#define ADK_SUPPLIERPAYMENT_NR									2				//eDouble
#define ADK_SUPPLIERPAYMENT_TYPE								3				//eChar		
#define ADK_SUPPLIERPAYMENT_SUBTYPE								4				//eChar
#define ADK_SUPPLIERPAYMENT_INVOICE_NR							5				//eDouble
#define ADK_SUPPLIERPAYMENT_DATE								6				//eDate		
#define ADK_SUPPLIERPAYMENT_EXPDATE								7				//eDate	
#define ADK_SUPPLIERPAYMENT_AMOUNT_V							8				//eDouble
#define ADK_SUPPLIERPAYMENT_AMOUNT_I							9				//eDouble	
#define ADK_SUPPLIERPAYMENT_INFO							   10				//eChar
#define ADK_SUPPLIERPAYMENT_OCR								   11				//eChar
#define ADK_SUPPLIERPAYMENT_SACCOUNT						   12				//eChar
#define ADK_SUPPLIERPAYMENT_UACCOUNT						   13				//eChar
#define ADK_SUPPLIERPAYMENT_ROW								   14				//eDouble
#define ADK_SUPPLIERPAYMENT_JOURNAL							   15				//eDouble
#define ADK_SUPPLIERPAYMENT_VERNR							   16				//eDouble
#define ADK_SUPPLIERPAYMENT_PAYED							   17				//eBool
#define ADK_SUPPLIERPAYMENT_CANCELLED						   18				//eBool
#define ADK_SUPPLIERPAYMENT_CON_SPEC						   19				//eDouble
#define ADK_SUPPLIERPAYMENT_PAYMENT_CODE					   20				//eDouble
#define ADK_SUPPLIERPAYMENT_SUPPLIER_NR						   21				//eChar
#define ADK_SUPPLIERPAYMENT_SUPPLIER_NAME					   22				//eChar
#define ADK_SUPPLIERPAYMENT_SUPPLIER_CUSTOMER_NR			   23				//eChar
#define ADK_SUPPLIERPAYMENT_SUPPLIER_ADR1					   24				//eChar
#define ADK_SUPPLIERPAYMENT_SUPPLIER_ADR2					   25				//eChar
#define ADK_SUPPLIERPAYMENT_SUPPLIER_ZIPCODE				   26				//eChar
#define ADK_SUPPLIERPAYMENT_SUPPLIER_CITY					   27				//eChar
#define ADK_SUPPLIERPAYMENT_SUPPLIER_COUNTRY				   28				//eChar
#define ADK_SUPPLIERPAYMENT_CURRENCY_CODE					   29				//eChar
#define ADK_SUPPLIERPAYMENT_ACCOUNT_NR						   30				//eChar
#define ADK_SUPPLIERPAYMENT_CURRENCY_RATE					   31				//eDouble
#define ADK_SUPPLIERPAYMENT_KAMOUNT_V						   32				//eDouble
#define ADK_SUPPLIERPAYMENT_AAMOUNT_V						   33				//eDouble
#define ADK_SUPPLIERPAYMENT_AAMOUNT_I						   34				//eDouble
#define ADK_SUPPLIERPAYMENT_CURRENCY_ACCOUNT				   35				//eChar
#define ADK_SUPPLIERPAYMENT_FEE_CODE						   36				//eChar
#define ADK_SUPPLIERPAYMENT_FEE_AMOUNT						   37				//eDouble
#define ADK_SUPPLIERPAYMENT_FEE_ACCOUNT						   38				//eChar
#define ADK_SUPPLIERPAYMENT_VER_SERIE						   39				//eChar
#define ADK_SUPPLIERPAYMENT_PAYDATE							   40				//eDouble
#define ADK_SUPPLIERPAYMENT_AMOUNT							   41				//eDouble
#define ADK_SUPPLIERPAYMENT_INVNR							   42				//eChar
#define ADK_SUPPLIERPAYMENT_PGIRO							   43				//eChar
#define ADK_SUPPLIERPAYMENT_BGIRO							   44				//eChar
#define ADK_SUPPLIERPAYMENT_VER_ID						       45				//eChar
#define ADK_SUPPLIERPAYMENT_STATUS							   46				//eChar
#define ADK_SUPPLIERPAYMENT_PAYTXT							   47				//eChar
#define ADK_SUPPLIERPAYMENT_TIMESTAMP						   48				//eDate
#define ADK_SUPPLIERPAYMENT_LAST							   48

#define ADK_VERIFICATION_HEAD_FIRST								0
#define ADK_VERIFICATION_HEAD_AAR_ID							0				//eChar	
#define ADK_VERIFICATION_HEAD_VER_NR							1				//eDouble 
#define ADK_VERIFICATION_HEAD_DATE1								2				//eDate	
#define ADK_VERIFICATION_HEAD_DATE2								3				//eDate	
#define ADK_VERIFICATION_HEAD_DATE3								4				//eDate	
#define ADK_VERIFICATION_HEAD_INFO								5				//eChar	 
#define ADK_VERIFICATION_HEAD_DEBIT								6				//eDouble 
#define ADK_VERIFICATION_HEAD_CREDIT							7				//eDouble 
#define ADK_VERIFICATION_HEAD_DEBIT_R							8				//eDouble 
#define ADK_VERIFICATION_HEAD_CREDIT_R							9				//eDouble 
#define ADK_VERIFICATION_HEAD_SIGN							   10				//eChar	
#define ADK_VERIFICATION_HEAD_KSIGN							   11				//eChar	 
#define ADK_VERIFICATION_HEAD_CORRECTS						   12				//eDouble 
#define ADK_VERIFICATION_HEAD_CORRECTED						   13				//eDouble 
#define ADK_VERIFICATION_HEAD_ROWS							   14				//eData   
#define ADK_VERIFICATION_HEAD_NROWS							   15				//eDouble 
#define ADK_VERIFICATION_HEAD_VER_SERIE						   16				//eChar
#define ADK_VERIFICATION_HEAD_TYPE_OF_JOURNAL				   17				//eChar
#define ADK_VERIFICATION_HEAD_JOURNAL_NR					   18				//eDouble
#define ADK_VERIFICATION_HEAD_TIMESTAMP						   19				//eDate
#define ADK_VERIFICATION_HEAD_LAST							   19

#define ADK_VERIFICATION_ROW_FIRST								0
#define ADK_VERIFICATION_ROW_AAR_ID								0				//eChar	
#define ADK_VERIFICATION_ROW_VER_NR								1				//eDouble
#define ADK_VERIFICATION_ROW_ROW								2				//eDouble
#define ADK_VERIFICATION_ROW_DATE1								3				//eDate	
#define ADK_VERIFICATION_ROW_DATE2								4				//eDate	
#define ADK_VERIFICATION_ROW_AMOUNT								5				//eDouble
#define ADK_VERIFICATION_ROW_ADDED								6				//eBool	
#define ADK_VERIFICATION_ROW_DELETED							7				//eBool	
#define ADK_VERIFICATION_ROW_ACCOUNT							8				//eChar	
#define ADK_VERIFICATION_ROW_INFO								9				//eChar	
#define ADK_VERIFICATION_ROW_PROJECT						   10				//eChar	
#define ADK_VERIFICATION_ROW_PROFIT_CENTRE					   11				//eChar	
#define ADK_VERIFICATION_ROW_KSIGN							   12				//eChar
#define ADK_VERIFICATION_ROW_SUB_ACCOUNT 					   13				//eChar
#define ADK_VERIFICATION_ROW_QUANTITY						   14				//eDouble
#define ADK_VERIFICATION_ROW_VER_SERIE						   15				//eChar
#define ADK_VERIFICATION_ROW_LAST							   15	

#define ADK_CODE_OF_BOOKINGYEAR_FIRST							0
#define ADK_CODE_OF_BOOKINGYEAR_ID								0				//eChar
#define ADK_CODE_OF_BOOKINGYEAR_START							1				//eDate
#define ADK_CODE_OF_BOOKINGYEAR_END								2				//eDate
#define ADK_CODE_OF_BOOKINGYEAR_TIMESTAMP					    3				//eDate
#define ADK_CODE_OF_BOOKINGYEAR_APTYPE							4				//eChar
#define ADK_CODE_OF_BOOKINGYEAR_LOCKED_MONTH					5				//eChar	
#define ADK_CODE_OF_BOOKINGYEAR_YEAR_LOCKED						6				//eBool
#define ADK_CODE_OF_BOOKINGYEAR_LAST							6

#define ADK_CODE_OF_DISCOUNT_FIRST								0
#define ADK_CODE_OF_DISCOUNT_FILTER								0				//eChar
#define ADK_CODE_OF_DISCOUNT_CODE								1				//eChar
#define ADK_CODE_OF_DISCOUNT_PER_CENT							2				//eDouble
#define ADK_CODE_OF_DISCOUNT_TIMESTAMP						    3				//eDate
#define ADK_CODE_OF_DISCOUNT_LAST								3

#define ADK_TAX_REDUCTION_FIRST									0
#define ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER			0
#define ADK_TAX_REDUCTION_PERSONAL_IDENTITY_NUMBER				1
#define ADK_TAX_REDUCTION_NAME									2
#define ADK_TAX_REDUCTION_APPLIED_AMOUNT						3
#define ADK_TAX_REDUCTION_APPLIED_DATE							4
#define ADK_TAX_REDUCTION_GRANTED_AMOUNT						5
#define ADK_TAX_REDUCTION_GRANTED_DATE							6
#define ADK_TAX_REDUCTION_CUSTOMER_PAYMENT_DATE					7
#define ADK_TAX_REDUCTION_STATUS								8
#define ADK_TAX_REDUCTION_TIMESTAMP								9				//eDate
#define ADK_TAX_REDUCTION_DOCTYPE							   10				//eChar
#define ADK_TAX_REDUCTION_LAST								   10

#define ADK_AGREEMENT_HEAD_FIRST								0
#define ADK_AGREEMENT_HEAD_DOCUMENT_NUMBER						0            
#define ADK_AGREEMENT_HEAD_DOCUMENT_NOT_DONE                    1
#define ADK_AGREEMENT_HEAD_DOCUMENT_CANCELLED                   2
#define ADK_AGREEMENT_HEAD_DOCUMENT_DATE1                       3
#define ADK_AGREEMENT_HEAD_CUSTOMER_ORDER_NUMBER				4
#define ADK_AGREEMENT_HEAD_CUSTOMER_NUMBER                      5
#define ADK_AGREEMENT_HEAD_CUSTOMER_NAME                        6
#define ADK_AGREEMENT_HEAD_MAILING_ADDRESS1                     7
#define ADK_AGREEMENT_HEAD_MAILING_ADDRESS2                     8
#define ADK_AGREEMENT_HEAD_ZIPCODE                              9
#define ADK_AGREEMENT_HEAD_CITY                                10
#define ADK_AGREEMENT_HEAD_COUNTRY                             11
#define ADK_AGREEMENT_HEAD_DELIVERY_NAME                       12
#define ADK_AGREEMENT_HEAD_DELIVERY_MAILING_ADDRESS1           13
#define ADK_AGREEMENT_HEAD_DELIVERY_MAILING_ADDRESS2           14
#define ADK_AGREEMENT_HEAD_DELIVERY_ZIPCODE                    15
#define ADK_AGREEMENT_HEAD_DELIVERY_CITY                       16
#define ADK_AGREEMENT_HEAD_DELIVERY_COUNTRY                    17
#define ADK_AGREEMENT_HEAD_CUSTOMER_REFERENCE_NAME             18
#define ADK_AGREEMENT_HEAD_OUR_REFERENCE_NAME                  19
#define ADK_AGREEMENT_HEAD_DISTRICT_CODE                       20
#define ADK_AGREEMENT_HEAD_SELLER_CODE                         21
#define ADK_AGREEMENT_HEAD_CURRENCY_CODE                       22
#define ADK_AGREEMENT_HEAD_LANGUAGE_CODE                       23
#define ADK_AGREEMENT_HEAD_REMINDER                            24
#define ADK_AGREEMENT_HEAD_DEMAND_FEE                          25
#define ADK_AGREEMENT_HEAD_INVOICE_INTEREST                    26
#define ADK_AGREEMENT_HEAD_EXPORT                              27
#define ADK_AGREEMENT_HEAD_INCLUDING_VAT                       28
#define ADK_AGREEMENT_HEAD_LIST_OF_PRICE_CODE                  29
#define ADK_AGREEMENT_HEAD_INVOICE_DISCOUNT                    30
#define ADK_AGREEMENT_HEAD_CODE_OF_DISCOUNT                    31
#define ADK_AGREEMENT_HEAD_CODE_OF_TERMS_OF_PAYMENT            32
#define ADK_AGREEMENT_HEAD_CODE_OF_TERMS_OF_DELIVERY           33
#define ADK_AGREEMENT_HEAD_CODE_OF_WAY_OF_DELIVERY             34
#define ADK_AGREEMENT_HEAD_TEXT1                               35
#define ADK_AGREEMENT_HEAD_TEXT2                               36
#define ADK_AGREEMENT_HEAD_TEXT3                               37
#define ADK_AGREEMENT_HEAD_SET_OF_VAT1                         38
#define ADK_AGREEMENT_HEAD_SET_OF_VAT2                         39
#define ADK_AGREEMENT_HEAD_SET_OF_VAT3                         40
#define ADK_AGREEMENT_HEAD_SET_OF_VAT4                         41
#define ADK_AGREEMENT_HEAD_CARGO_AMOUNT                        42
#define ADK_AGREEMENT_HEAD_CARGO_VAT_CODE                      43
#define ADK_AGREEMENT_HEAD_DISPATCH_FEE                        44
#define ADK_AGREEMENT_HEAD_VAT_CODE_DISPATCH_FEE               45
#define ADK_AGREEMENT_HEAD_ROUND_OFF                           46
#define ADK_AGREEMENT_HEAD_TOTAL_AMOUNT                        47
#define ADK_AGREEMENT_HEAD_BALANCE                             48
#define ADK_AGREEMENT_HEAD_PROJECT_CODE                        49
#define ADK_AGREEMENT_HEAD_PROFIT_CENTRE                       50
#define ADK_AGREEMENT_HEAD_BASIS_OF_VAT0                       51
#define ADK_AGREEMENT_HEAD_BASIS_OF_VAT1                       52
#define ADK_AGREEMENT_HEAD_BASIS_OF_VAT2                       53
#define ADK_AGREEMENT_HEAD_BASIS_OF_VAT3                       54
#define ADK_AGREEMENT_HEAD_BASIS_OF_VAT4                       55
#define ADK_AGREEMENT_HEAD_AMOUNT_OF_VAT1                      56
#define ADK_AGREEMENT_HEAD_AMOUNT_OF_VAT2                      57
#define ADK_AGREEMENT_HEAD_AMOUNT_OF_VAT3                      58
#define ADK_AGREEMENT_HEAD_AMOUNT_OF_VAT4                      59
#define ADK_AGREEMENT_HEAD_PENALTY_INTEREST_RATE               60
#define ADK_AGREEMENT_HEAD_CUSTOMER_DEMAND_ACCOUNT             61
#define ADK_AGREEMENT_HEAD_CARGO_ACCOUNT                       62
#define ADK_AGREEMENT_HEAD_DISPATCH_FEE_ACCOUNT                63
#define ADK_AGREEMENT_HEAD_BALANCE2                            64
#define ADK_AGREEMENT_HEAD_VAT1_ACCOUNT                        65
#define ADK_AGREEMENT_HEAD_VAT2_ACCOUNT                        66
#define ADK_AGREEMENT_HEAD_VAT3_ACCOUNT                        67
#define ADK_AGREEMENT_HEAD_VAT4_ACCOUNT                        68
#define ADK_AGREEMENT_HEAD_ROUND_OFF_ACCOUNT                   69
#define ADK_AGREEMENT_HEAD_DISCOUNT_ACCOUNT                    70
#define ADK_AGREEMENT_HEAD_CUSTOMER_INVOICE_VAT_NUMBER         71
#define ADK_AGREEMENT_HEAD_EU_ACCOUNT_FOR_QUARTERLY            72
#define ADK_AGREEMENT_HEAD_EU_THIRD_PART_TRADE                 73
#define ADK_AGREEMENT_HEAD_SAVE_TEXT                           74
#define ADK_AGREEMENT_HEAD_GROSS                               75
#define ADK_AGREEMENT_HEAD_NET                                 76
#define ADK_AGREEMENT_HEAD_EXCLUDING_OF_VAT                    77
#define ADK_AGREEMENT_HEAD_VAT_AMOUNT                          78
#define ADK_AGREEMENT_HEAD_CONTRIBUTION_MARGIN                 79
#define ADK_AGREEMENT_HEAD_VALUE                               80
#define ADK_AGREEMENT_HEAD_TYPE_IN_TEXT                        81
#define ADK_AGREEMENT_HEAD_ROWS                                82
#define ADK_AGREEMENT_HEAD_NROWS                               83
#define ADK_AGREEMENT_HEAD_LOCAL_REMARK						   84
#define ADK_AGREEMENT_HEAD_EANLOC							   85
#define ADK_AGREEMENT_HEAD_DELIVERY_EANLOC					   86
#define ADK_AGREEMENT_HEAD_DISPATCHER						   87
#define ADK_AGREEMENT_HEAD_CODE_OF_COUNTRY					   88
#define ADK_AGREEMENT_HEAD_DELIVERY_CODE_OF_COUNTRY 		   89
#define	ADK_AGREEMENT_HEAD_BUILDSERVICE						   90		
#define ADK_AGREEMENT_HEAD_TOT_SHIPWT						   91
#define ADK_AGREEMENT_HEAD_AGREEMENT_TYPE					   92
#define ADK_AGREEMENT_HEAD_COMPLETED						   93
#define ADK_AGREEMENT_HEAD_DATE_START						   94
#define ADK_AGREEMENT_HEAD_DATE_END							   95
#define ADK_AGREEMENT_HEAD_FIRST_MONTH						   96
#define ADK_AGREEMENT_HEAD_INTERVAL							   97
#define ADK_AGREEMENT_HEAD_DAY								   98
#define ADK_AGREEMENT_HEAD_UPDATE_PRICE						   99
#define ADK_AGREEMENT_HEAD_UPDATE_ADRESS					  100
#define ADK_AGREEMENT_HEAD_PERIOD							  101
#define ADK_AGREEMENT_HEAD_AVERAGE_UNIT_PRICE_DONT_UPDATE	  102
#define ADK_AGREEMENT_HEAD_NEXT_INVOICE						  103
#define ADK_AGREEMENT_HEAD_PERIOD_START						  104
#define ADK_AGREEMENT_HEAD_PERIOD_END					      105
#define ADK_AGREEMENT_HEAD_PRICE_CHANGE						  106
#define ADK_AGREEMENT_HEAD_AGREEMENT_INTERVAL				  107
#define ADK_AGREEMENT_HEAD_NEXT_PERIOD_INTERVAL				  108
#define ADK_AGREEMENT_HEAD_ACTIVE_YEAR						  109
#define	ADK_AGREEMENT_HEAD_CURRENCY_RATE					  110	
#define	ADK_AGREEMENT_HEAD_CURRENCY_UNIT					  111
#define ADK_AGREEMENT_HEAD_TIMESTAMP						  112						//eDate
#define ADK_AGREEMENT_HEAD_TAX_REDUCTION_INCLUDED			  113
#define ADK_AGREEMENT_HEAD_TAX_REDUCTION_TAX_BASIS			  114
#define ADK_AGREEMENT_HEAD_TAX_REDUCTION_NUMBER_OF_PERSONS	  115
#define ADK_AGREEMENT_HEAD_TAX_REDUCTION_BUILDING_WORK		  116
#define ADK_AGREEMENT_HEAD_TAX_REDUCTION_HOUSING_COOPERATIVE_IDENTITY_NUMBER  117
#define ADK_AGREEMENT_HEAD_TAX_REDUCTION_DESCRIPTION_OF_PROPERTY			  118
#define ADK_AGREEMENT_HEAD_ELECTRONIC_REFERENCE				  119
#define ADK_AGREEMENT_HEAD_LAST								  119

#define ADK_VERIFICATION_SERIES_FIRST							0
#define ADK_VERIFICATION_SERIES_VER_SERIE						0
#define ADK_VERIFICATION_SERIES_NAME							1
#define ADK_VERIFICATION_SERIES_ACTIVE							2
#define ADK_VERIFICATION_SERIES_USERS							3
#define ADK_VERIFICATION_SERIES_TIMESTAMP						4
#define ADK_VERIFICATION_SERIES_LAST							4

#define ADK_BOOKKEEPINGHIST_FIRST								0
#define ADK_BOOKKEEPINGHIST_NR									0
#define ADK_BOOKKEEPINGHIST_DATE								1
#define ADK_BOOKKEEPINGHIST_TIME								2
#define ADK_BOOKKEEPINGHIST_SIGN								3
#define ADK_BOOKKEEPINGHIST_TEXT								4
#define ADK_BOOKKEEPINGHIST_PRINTED								5
#define ADK_BOOKKEEPINGHIST_TIMESTAMP							6
#define ADK_BOOKKEEPINGHIST_LAST								6

#define ADK_PERIODIC_ADJUSTMENT_FIRST		   					0
#define ADK_PERIODIC_ADJUSTMENT_ID								0
#define ADK_PERIODIC_ADJUSTMENT_TEXT							1
#define ADK_PERIODIC_ADJUSTMENT_ACCOUNT							2
#define ADK_PERIODIC_ADJUSTMENT_DATE							3
#define ADK_PERIODIC_ADJUSTMENT_REMAINING_AMOUNT                4
#define ADK_PERIODIC_ADJUSTMENT_NUMBER_DONE						5
#define ADK_PERIODIC_ADJUSTMENT_START_DATE						6
#define ADK_PERIODIC_ADJUSTMENT_END_DATE						7
#define ADK_PERIODIC_ADJUSTMENT_TOTAL_AMOUNT					8
#define ADK_PERIODIC_ADJUSTMENT_DONE_AMOUNT						9
#define ADK_PERIODIC_ADJUSTMENT_AMOUNT_TO_DO					10
#define ADK_PERIODIC_ADJUSTMENT_CONTRA_ACCOUNT					11
#define ADK_PERIODIC_ADJUSTMENT_NUMBER_OF_MONTHS				12
#define ADK_PERIODIC_ADJUSTMENT_PROJECT							13
#define ADK_PERIODIC_ADJUSTMENT_PROFIT_CENTRE					14
#define ADK_PERIODIC_ADJUSTMENT_VER_SERIE						15
#define ADK_PERIODIC_ADJUSTMENT_TYPE							16
#define ADK_PERIODIC_ADJUSTMENT_CONNECTED_DOCUMENT				17
#define ADK_PERIODIC_ADJUSTMENT_CONNECTED_VER_SERIE				18
#define ADK_PERIODIC_ADJUSTMENT_SHOW_DONE						19
#define ADK_PERIODIC_ADJUSTMENT_NAME							20
#define ADK_PERIODIC_ADJUSTMENT_CONNECTED_ROW_NUMBER			21
#define ADK_PERIODIC_ADJUSTMENT_CONNECTED_BOOKINGYEAR_ID		22
#define ADK_PERIODIC_ADJUSTMENT_LAST							22

#define ADK_CUSTOMER_ARTICLE_FIRST								0
#define ADK_CUSTOMER_ARTICLE_ARTNR								0
#define ADK_CUSTOMER_ARTICLE_CUSTNR								1
#define ADK_CUSTOMER_ARTICLE_CUSTARTNR							2
#define ADK_CUSTOMER_ARTICLE_TIMESTAMP							3
#define ADK_CUSTOMER_ARTICLE_LAST								3

#define ADK_ATTACHMENT_INFO_FIRST								0
#define ADK_ATTACHMENT_INFO_GUID								0
#define ADK_ATTACHMENT_INFO_TYP									1
#define ADK_ATTACHMENT_INFO_DOKNR								2
#define ADK_ATTACHMENT_INFO_DOKTYP								3
#define ADK_ATTACHMENT_INFO_AARID								4
#define ADK_ATTACHMENT_INFO_VERNR								5
#define ADK_ATTACHMENT_INFO_VERSERIE							6
#define ADK_ATTACHMENT_INFO_TIMESTAMP							7
#define ADK_ATTACHMENT_INFO_LAST								7

#define ADK_TAX_REDUCTION_TYPES_FIRST							0
#define ADK_TAX_REDUCTION_TYPES_ID								0
#define ADK_TAX_REDUCTION_TYPES_NAME							1
#define ADK_TAX_REDUCTION_TYPES_TYPE							2
#define ADK_TAX_REDUCTION_TYPES_SUBTYPE							3
#define ADK_TAX_REDUCTION_TYPES_ACTIVE							4
#define ADK_TAX_REDUCTION_TYPES_TAXNAME							5
#define ADK_TAX_REDUCTION_TYPES_SCHAB_PROC						6
#define ADK_TAX_REDUCTION_TYPES_LAST							6

#define ADK_PRM3_FIRST											0
#define ADK_PRM3_DEFAULT_ACCOUNT_BUILDSERVICE					0				//eChar
#define ADK_PRM3_LAST											0

#define REG_ID_CUSTOMER										 	0
#define REG_ID_SUPPLIER										 	1
#define REG_ID_OFFER										 	2
#define REG_ID_ORDER										 	3
#define REG_ID_INVOICE										 	4
#define	REG_ID_SUPPLIER_INVOICE								 	5
#define REG_ID_ARTICLE										 	6
#define REG_ID_PROJEKT										 	7
#define REG_ID_ACCOUNT										 	8
#define REG_ID_DISCOUNT_AGREEMENT							 	9
#define REG_ID_INVENTORY_ARTICLE							   10
#define REG_ID_MANUAL_DELIVERY_IN							   11
#define REG_ID_MANUAL_DELIVERY_OUT							   12
#define REG_ID_BOOKING										   13
#define REG_ID_PRICE										   14
#define REG_ID_MEMBER										   15
#define REG_ID_DELIVERY_NOTE								   16
#define REG_ID_CUSTOMERPAYMENT								   17
#define REG_ID_SUPPLIERPAYMENT								   18
#define REG_ID_VERIFICATION									   19
#define REG_ID_CONTACT										   20
#define REG_ID_AGREEMENT									   21

typedef enum
{
    eUnused = 0,
    eBool = 1,
    eChar = 2,
    eDouble = 4,
    eDate = 5,
    eData = 6,
}ADK_FIELD_TYPE;

typedef enum
{
    eReadOnly = 0,
    eReadWrite  = 1,
}ADK_RW;

struct _AdkData;

typedef struct _AdkField
{
	INT  iType;
	BOOL bChanged;
	INT  iFieldId;
	INT  iInternalFieldId;
	INT  iLenght;
	INT  iDec;
	ADK_RW iRW;
	union
	{
		DOUBLE    d;
		CHAR*     s;
		LONG      l;
		BOOL      b;
		LONG      date;
		struct _AdkData* data;
	}
	value;
} ADK_FIELD;

typedef struct _AdmMetaData
{
	ADK_HANDLE hHandle;
	INT        iDatabaseId;
	INT        iFields;
	INT        iStructSize;
} ADK_META;

typedef struct _AdkData
{
	ADK_META  metaData;
	ADK_FIELD rgField[MAX_FIELD];
} ADK_DATA, *PADK_DATA;

typedef enum
{
	SIE1 = 1,
	SIE2 = 2,
	SIE3 = 3,
	SIE4 = 4,
	SIE4X = 5,
}ADK_SIE_TYPE;

typedef struct _Error
{
    LONG lRc;
    LONG lDbTable;
    LONG lField;
    LONG lFunction;
    LONG lProgramPart;
} ADK_ERROR, *PADK_ERROR;

typedef enum 
{
    elRc = 0,
    elDbTable = 1,
    elField = 2,
    elFunction = 3,           
    elProgramPart = 4,
}ADK_ERROR_TEXT_TYPE;

typedef enum
{
	PERIOD_LEVFKT = 3,
	PERIOD_VERIF = 4,
	PERIOD_KUNDFKT = 5,
	PERIOD_LEVFKTNY = 6,
} ADK_PERIOD_TYPE;

typedef enum
{
	ePrinter				= 102,
	ePDF					= 104,
	ePDFMail				= 105,
	eAutoInvoiceElectronic	= 108,
	eAutoInvoicePrintA		= 109,
	eAutoInvoiceMailPDF		= 111,
}ADK_PRINT_CHOICE;

typedef enum
{
    //Gemensamma (Customer, Offer, Order, Invoice, Agreement)
    eCustomerNr									= 0,    //ADK_CUSTOMER_NUMBER, ADK_OOI_HEAD_CUSTOMER_NUMBER, ADK_AGREEMENT_HEAD_CUSTOMER_NUMBER - eChar
    eCustomerName								= 1,	//ADK_CUSTOMER_NAME, ADK_OOI_HEAD_CUSTOMER_NAME, ADK_AGREEMENT_HEAD_CUSTOMER_NAME - eChar

    //Gemensamma (SupplierInvoice, Supplier)
    eSupplierNr									= 2,	//ADK_SUPPLIER_NUMBER, ADK_SUP_INV_HEAD_SUPPLIER_NUMBER - eChar
    eSupplierName								= 3,    //ADK_SUPPLIER_NAME, ADK_SUP_INV_HEAD_SUPPLIER_NAME - eChar

    //Customer
	eCustomerShortName							= 4,	//ADK_CUSTOMER_SHORT_NAME - eChar
	eCustomerPostCode							= 5,    //ADK_CUSTOMER_ZIPCODE - eChar
	eCustomerSortOrder							= 6,	//ADK_CUSTOMER_SORT_ORDER - eChar
    
    //Offer
    eOfferNr									= 7,    //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eOfferDate									= 8,    //ADK_OOI_HEAD_DOCUMENT_DATE1 - eDate
    
    //Order
    eOrderNr									= 9,    //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
    eOrderDate									= 10,   //ADK_OOI_HEAD_DOCUMENT_DATE1 - eDate
    eOrderDeliveryDate							= 11,	//ADK_OOI_HEAD_DOCUMENT_DATE2 - eDate

    //Invoice
    eInvoiceNr									= 12,   //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
    eInvoiceDate								= 13,   //ADK_OOI_HEAD_DOCUMENT_DATE1 - eDate

    //SupplierInvoice
    eSupplierInvoiceNr							= 14,	//ADK_SUP_INV_HEAD_GIVEN_NUMBER - eDouble
	eSupplierInvoiceExpireDate					= 15,	//ADK_SUP_INV_HEAD_DUE_DATE - eDate
    
    //Article
    eArticleNr									= 16,   //ADK_ARTICLE_NUMBER, ADK_INVENTORY_ARTICLE_ARTICLE_NUMBER - eChar	
	eArticleName								= 17,   //ADK_ARTICLE_NAME, ADK_INVENTORY_ARTICLE_ARTICLE_NAME - eChar	  
	eArticleShortName							= 18,	//ADK_ARTICLE_SHORT_NAME - eChar
	eArticleSortOrder							= 19,	//ADK_ARTICLE_SORT_ORDER - eChar
    eArticleGroup								= 20,	//ADK_ARTICLE_GROUP, ADK_INVENTORY_ARTICLE_ARTICLE_GROUP - eChar

    //Account
    eAccountNr									= 21,	//ADK_ACCOUNT_NUMBER - eChar
    eAccountText								= 22,	//ADK_ACCOUNT_TEXT - eChar

    //Project
    eProjectCode								= 23,	//ADK_PROJECT_CODE_OF_PROJECT - eChar
    eProjectName								= 24,	//ADK_PROJECT_NAME - eChar 

    //Supplier
    eSupplierShortName							= 25,	//ADK_SUPPLIER_SHORT_NAME - eChar
    eSupplierSortOrder							= 26,	//ADK_SUPPLIER_SORT_ORDER - eChar
    eSupplierTelephone							= 27,	//ADK_SUPPLIER_TELEPHONE - eChar

    //Code of Delivery
    eCodeOfTermsOfDelivery						= 28,   //ADK_CODE_OF_TERMS_OF_DELIVERY_CODE - eChar

    //Way of Delivery
    eCodeOfWayOfDelivery						= 29,   //ADK_CODE_OF_WAY_OF_DELIVERY_CODE - eChar

    //Code of Peyment Terms
    eCodeOfTermsOfPayment						= 30,   //ADK_CODE_OF_TERMS_OF_PAYMENT_CODE - eChar

    //Code Of Language
    eCodeOfLanguage								= 31,   //ADK_CODE_OF_LANGUAGE_CODE - eChar
    eCodeOfLanguageText							= 32,   //ADK_CODE_OF_LANGUAGE_TEXT - eChar

    //Code Of Currency
    eCodeOfCurrency								= 33,   //ADK_CODE_OF_CURRENCY_CODE - eChar

    //Code of Customer Category
    eCodeOfCustomerCategory						= 34,   //ADK_CODE_OF_CUSTOMER_CATEGORY_CODE - eChar

    //Code of District
    eCodeOfDistrict								= 35,   //ADK_CODE_OF_DISTRICT_CODE - eChar
    
    //Code of Seller
    eCodeOfSeller								= 36,   //ADK_CODE_OF_SELLER_SIGN - eChar

    //Discount agreement
    eDiscountAgreementNr						= 37,   //ADK_DISCOUNT_AGREEMENT_CODE - eChar
    eDiscountAgreementText						= 38,   //ADK_DISCOUNT_AGREEMENT_TEXT - eChar

    //Code of Article Group
    eCodeOfArticleGroup							= 39,   //ADK_CODE_OF_ARTICLE_GROUP_CODE - eChar

    //Code of Article Account
    eCodeOfArticleAccount						= 40,   //ADK_CODE_OF_ARTICLE_ACCOUNT_CODE - eChar

    //Code of Unit
    eCodeOfUnit									= 41,   //ADK_CODE_OF_UNIT_CODE - eChar

    //Code of Profit Centre
    eCodeOfProfitCentreUnit						= 42,   //ADK_CODE_OF_PROFIT_CENTRE_CODE - eChar
    
    //Code of PriceList
    eCodeOfPriceList							= 43,   //ADK_CODE_OF_PRICE_LIST_CODE - eChar

	//Offer
	eOfferNotOrderCustomerNr					= 44,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eOfferNotPrintedOfferNr						= 45,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eOfferNotPrintedDate						= 46,	//ADK_OOI_HEAD_DOCUMENT_DATE1 - eDate
	eOfferNotPrintedCustomerNr					= 47,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eOfferNotPrintedCustomerName				= 48,	//ADK_OOI_HEAD_CUSTOMER_NAME - eChar

	//Order
	eOrderNoInvoiceCustomerNr					= 49,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eOrderBackorderOrderNr						= 50,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eOrderNotPrintedOrderNr						= 51,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eOrderNotPrintedDate						= 52,	//ADK_OOI_HEAD_DOCUMENT_DATE1 - eDate	
	eOrderNotPrintedCustomerNr					= 53,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eOrderNotPrintedCustomerName				= 54,	//ADK_OOI_HEAD_CUSTOMER_NAME - eChar
	eOrderNotPrintedDeliveryDate				= 55,	//ADK_OOI_HEAD_DOCUMENT_DATE2 - eDate
	eOrderNoDeliveryNoteOrderNr					= 56,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eOrderNoDeliveryNoteDate					= 57,	//ADK_OOI_HEAD_DOCUMENT_DATE1 - eDate
	eOrderNoDeliveryNoteCustomerNr				= 58,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eOrderNoDeliveryNoteCustomerName			= 59,	//ADK_OOI_HEAD_CUSTOMER_NAME - eChar
	eOrderNoDeliveryNoteDeliveryDate			= 60,	//ADK_OOI_HEAD_DOCUMENT_DATE2 - eDate

	//Invoice
	eInvoiceInledgerExpireDate					= 61,	//ADK_OOI_HEAD_DOCUMENT_DATE2 - eDate
	eInvoiceInledgerCustomerNr					= 62,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eInvoiceInledgerCustomerName				= 63,	//ADK_OOI_HEAD_CUSTOMER_NAME - eChar
	eInvoiceInledgerInvoiceNr					= 64,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eInvoiceNotPayedCustomerNr					= 65,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eInvoiceNotPayedDate						= 66,	//ADK_OOI_HEAD_DOCUMENT_DATE2 - eDate
	eInvoicePayedCustomerNr						= 67,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eInvoiceManuellInvoiceNr					= 68,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eInvoiceNotPrintedInvoiceNr					= 69,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eInvoiceNotPrintedDate						= 70,	//ADK_OOI_HEAD_DOCUMENT_DATE1 - eDate
	eInvoiceNotPrintedCustomerNr				= 71,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eInvoiceNotPrintedCustomerName				= 72,	//ADK_OOI_HEAD_CUSTOMER_NAME - eChar
	eInvoiceNoIntrestInvoiceNr					= 73,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eInvoiceNoIntrestCustomerNr					= 74,	//ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar
	eInvoiceAgreementInvoiceNr					= 75,	//ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble

	//SupplierInvoice
	eSupplierInvoiceNotPayedInvoiceNr			= 76,	//ADK_SUP_INV_HEAD_GIVEN_NUMBER - eDouble
	eSupplierInvoiceNotPayedSupplierNr			= 77,	//ADK_SUP_INV_HEAD_SUPPLIER_NUMBER - eChar
	eSupplierInvoiceNotPayedSupplierName		= 78,	//ADK_SUP_INV_HEAD_SUPPLIER_NAME - eChar
	eSupplierInvoiceNotPayedExpireDate			= 79,	//ADK_SUP_INV_HEAD_DUE_DATE - eDate
	eSupplierInvoicePayedSupplierNr				= 80,	//ADK_SUP_INV_HEAD_SUPPLIER_NUMBER - eChar 
	eSupplierInvoicePaymentAbroadInvoiceNr		= 81,	//ADK_SUP_INV_HEAD_GIVEN_NUMBER - eDouble
	eSupplierInvoicePaymentAbroadSupplierNr		= 82,	//ADK_SUP_INV_HEAD_SUPPLIER_NUMBER - eChar
	eSupplierInvoicePaymentAbroadSupplierName	= 83,	//ADK_SUP_INV_HEAD_SUPPLIER_NAME - eChar	
	eSupplierInvoicePaymentAbroadExpireDate		= 84,	//ADK_SUP_INV_HEAD_DUE_DATE - eDate
	eSupplierInvoiceDomesticInvoiceNr			= 85,	//ADK_SUP_INV_HEAD_GIVEN_NUMBER - eDouble
	eSupplierInvoiceDomesticSupplierNr			= 86,	//ADK_SUP_INV_HEAD_SUPPLIER_NUMBER - eChar
	eSupplierInvoiceDomesticSupplierName		= 87,	//ADK_SUP_INV_HEAD_SUPPLIER_NAME - eChar	
	eSupplierInvoiceDomesticExpireDate			= 88,	//ADK_SUP_INV_HEAD_DUE_DATE - eDate
	eSupplierInvoiceNotJournalInvoiceNr			= 89,	//ADK_SUP_INV_HEAD_GIVEN_NUMBER - eDouble

	//Article
	eArticleLackOf								= 90,	//ADK_ARTICLE_NUMBER - eChar
	eArticlePlaceInStock						= 91,	//ADK_ARTICLE_PLACE_IN_STOCK, ADK_INVENTORY_ARTICLE_ARTICLE_PLACE_IN_STOCK - eChar		
	
	//Account
	eAccountActiveNr							= 92,	//ADK_ACCOUNT_NUMBER - eChar
	eAccountActiveText							= 93,	//ADK_ACCOUNT_TEXT - eChar

	//Project
	eProjectNotFinishedCode						= 94,	//ADK_PROJECT_CODE_OF_PROJECT - eChar	
	eProjectNotFinishedName						= 95,	//ADK_PROJECT_NAME - eChar 	
	eProjectFinishedCode						= 96,	//ADK_PROJECT_CODE_OF_PROJECT - eChar	
	eProjectFinishedName						= 97,	//ADK_PROJECT_NAME - eChar 

	//ManualDeliveryIn
	eManualDeliveryIn							= 98,	//ADK_MANUAL_DELIVERY_IN_DOCUMENT_NUMBER - eDouble 

	//ManualDeliveryOut
	eManualDeliveryOut							= 99,	//ADK_MANUAL_DELIVERY_OUT_DOCUMENT_NUMBER - eDouble 

	//Dispatcher
	eDispatcher									= 100,	//ADK_DISPATCHER_ID - eChar 

    //Booking
	eBookingNr									= 101,	//ADK_BOOKING_DOCUMENT_NUMBER - eDouble
	eBookingSupplierNumber						= 102,	//ADK_BOOKING_SUPPLIER_NUMBER - eChar
	eBookingSupplierName						= 103,	//ADK_BOOKING_SUPPLIER_NAME - eChar
	eBookingNotPrintedBookingNr					= 104,	//ADK_BOOKING_DOCUMENT_NUMBER - eDouble
	eBookingNotPrintedSupplierNumber			= 105,	//ADK_BOOKING_SUPPLIER_NUMBER - eChar
	eBookingNotPrintedDeliveryDate				= 106,	//ADK_BOOKING_DELIVERY_DATE - eDate
	eBookingNotDeliveredBookingNr				= 107,	//ADK_BOOKING_DOCUMENT_NUMBER - eDouble
	eBookingNotDeliveredSupplierNumber			= 108,	//ADK_BOOKING_SUPPLIER_NUMBER - eChar
	eBookingNotDeliveredSupplierName			= 109,	//ADK_BOOKING_SUPPLIER_NAME - eChar
	eBookingNotDeliveredSupplierDeliveryDate	= 110,	//ADK_BOOKING_DELIVERY_DATE - eDate

	//CustomerDiscountRow
	eCustomerDiscountRowArtGrp					= 111,	//ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_CODE - eChar	
	eCustomerDiscountRowArtNr					= 112,	//ADK_CODE_OF_CUSTOMER_DISCOUNT_ROW_CODE - eChar

	//ArticleParcel
	eArticleParcelRowNrParcel					= 113,	//ADK_CODE_OF_ARTICLE_PARCEL_NR - eChar
	eArticleParcelArticleNrParcel				= 114,	//ADK_CODE_OF_ARTICLE_PARCEL_NR - eChar
	eArticleParcelArticleNr						= 115,	//ADK_CODE_OF_ARTICLE_PARCEL_ARTICLE_NR - eChar

	//ArticleName
	eArticleNameNr								= 116,	//ADK_CODE_OF_ARTICLE_NAME_ARTICLE_NUMBER - eChar

	//Price
	ePriceArticleNr								= 117, //ADK_PRICE_ARTICLE_NUMBER - eChar	
	ePriceBaseArticleNr							= 118, //ADK_PRICE_ARTICLE_NUMBER - eChar
	ePriceNotBaseArticleNr						= 119, //ADK_PRICE_ARTICLE_NUMBER - eChar	
	ePriceList									= 120, //ADK_PRICE_PRICE_LIST - eChar		
	ePriceBaseList								= 121, //ADK_PRICE_PRICE_LIST - eChar	
	ePriceNotBaseList							= 122, //ADK_PRICE_PRICE_LIST - eChar	

	//PurchasePrice
	ePurchasePriceArticleNrBase					= 123, //ADK_ARTICLE_PURCHASE_PRICE_ARTICLE_NUMBER - eChar
	ePurchasePriceArticleNrStf					= 124, //ADK_ARTICLE_PURCHASE_PRICE_ARTICLE_NUMBER - eChar
	ePurchasePriceArticleNrAll					= 125, //ADK_ARTICLE_PURCHASE_PRICE_ARTICLE_NUMBER - eChar
	ePurchasePriceSupplierNrBase				= 126, //ADK_ARTICLE_PURCHASE_PRICE_SUPPLIER_NUMBER - eChar
	ePurchasePriceSupplierNrStf					= 127, //ADK_ARTICLE_PURCHASE_PRICE_SUPPLIER_NUMBER - eChar
	ePurchasePriceSupplierArticleNr				= 128, //ADK_ARTICLE_PURCHASE_PRICE_SUPPLIER_NUMBER - eChar

	//WayOfPayment
	eWayOfPayment								= 129, //ADK_CODE_OF_WAY_OF_PAYMENT_CODE - eChar

    //Member
    eMemberNr									= 130,  //ADK_MEMBER_NUMBER - eChar
    eMemberFirstName							= 131,	//ADK_MEMBER_FIRST_NAME - eChar
    eMemberLastName								= 132,	//ADK_MEMBER_LAST_NAME - eChar
	eMemberPostCode							    = 133,  //ADK_MEMBER_ZIPCODE - eChar
    eMemberPersonalNumber                       = 134,  //ADK_MEMBER_PERSONAL_NUMBER - eChar
    eMemberCategory                             = 135,  //ADK_MEMBER_CATEGORY - eChar
    eMemberFreeCategory1                        = 136,  //ADK_MEMBER_FREE_CATEGORY1 - eChar
    eMemberFreeCategory2                        = 137,  //ADK_MEMBER_FREE_CATEGORY2 - eChar
    eMemberFreeCategory3                        = 138,  //ADK_MEMBER_FREE_CATEGORY3 - eChar
    eMemberFreeCategory4                        = 139,  //ADK_MEMBER_FREE_CATEGORY4 - eChar
    eMemberFreeCategory5                        = 140,  //ADK_MEMBER_FREE_CATEGORY5 - eChar
    eMemberFreeCategory6                        = 141,  //ADK_MEMBER_FREE_CATEGORY6 - eChar
    eMemberFreeCategory7                        = 142,  //ADK_MEMBER_FREE_CATEGORY7 - eChar
    eMemberFreeCategory8                        = 143,  //ADK_MEMBER_FREE_CATEGORY8 - eChar
    eMemberFreeCategory9                        = 144,  //ADK_MEMBER_FREE_CATEGORY9 - eChar
    eMemberFreeCategory10                       = 145,  //ADK_MEMBER_FREE_CATEGORY10 - eChar

    //DeliveryNote
    eDeliveryNoteNr								= 146, 	//ADK_DELIVERY_NOTE_DOCUMENT_NUMBER - eDouble	
    eDeliveryNoteSupplierNumber					= 147, 	//ADK_DELIVERY_NOTE_SUPPLIER_NUMBER - eChar
    eDeliveryNoteSupplierName					= 148, 	//ADK_DELIVERY_NOTE_SUPPLIER_NAME - eChar
    eDeliveryNoteInvoiceNotSentDeliveryNoteNr	= 149, 	//ADK_DELIVERY_NOTE_DOCUMENT_NUMBER - eDouble	
    eDeliveryNoteInvoiceNotSentSupplierNumber	= 150, 	//ADK_DELIVERY_NOTE_SUPPLIER_NUMBER - eChar
    eDeliveryNoteInvoiceNotSentSupplierName		= 151, 	//ADK_DELIVERY_NOTE_SUPPLIER_NAME - eChar
    
    //Package
    ePackageOrderNr                             = 152,  //ADK_PACKAGE_HEAD_CONNECTION_DOCUMENT - eDouble

    //Package Import
    eImpPackageDelNoteNr                        = 153,  //ADK_IMP_PACKAGE_HEAD_CONNECTION_DOCUMENT - eDouble

	//DeliveryAddress
	eDeliveryAddressCustomerNr					= 154,	//ADK_DELIVERY_CUSTOMER_NUMBER -eChar

	//Article
	eArticleWebShop								= 155,	//ADK_ARTICLE_NUMBER, ADK_ARTICLE_WEBSHOP - eChar, eBool
	eArticleBarCode								= 156,	//ADK_INVENTORY_ARTICLE_BARCODE - eChar

	//Enhetskod
	eCodeOfUnitLanguage							= 157,  //ADK_CODE_OF_UNIT_CODE - eChar

	//ErRefKund
	eCodeOfYourRefCustomer						= 158,  //ADK_CODE_OF_YOUR_REF_CUSTOMER_NUMBER - eChar

	//ErRefLev
	eCodeOfYourRefSupplier						= 159,  //ADK_CODE_OF_YOUR_REF_SUPPLIER_NUMBER - eChar

	//Landskod
	eCodeOfCountryCode							= 160,  //ADK_CODE_OF_COUNTRY_CODE_CODE - eChar

	//Kundbetbnt2
	eCustomerPaymentInvoice						= 161,  //ADK_CUSTOMERPAYMENT_INVOICE_NUMBER - eDouble
	eCustomerPaymentAdjustment					= 162,  //ADK_CUSTOMERPAYMENT_INVOICE_NUMBER - eDouble
	eCustomerPaymentFee							= 163,  //ADK_CUSTOMERPAYMENT_INVOICE_NUMBER - eDouble
	eCustomerPaymentInvoicePaydate				= 164,  //ADK_CUSTOMERPAYMENT_INVOICE_NUMBER - eDouble
	eCustomerPaymentNotJournal					= 165,  //ADK_CUSTOMERPAYMENT_INVOICE_NUMBER - eDouble
	eCustomerPaymentAdjustmentCurrency			= 166,  //ADK_CUSTOMERPAYMENT_INVOICE_NUMBER - eDouble
	eCustomerPaymentInvoiceRows					= 167,  //ADK_CUSTOMERPAYMENT_INVOICE_NUMBER - eDouble

	//Bortskrivningskoder
	eCodeOfAdjustmenCode						= 168,  //ADK_CODE_OF_ADJUSTMENT_CODE_CODE - eChar

	//Levbetspec
	eSupplierPaymentAll							= 169,  //ADK_SUPPLIERPAYMENT_INVOICE_NR - eChar
	eSupplierPaymentInvAll						= 170,  //ADK_SUPPLIERPAYMENT_INVOICE_NR - eChar
	eSupplierPaymentInvNotPayed					= 171,  //ADK_SUPPLIERPAYMENT_INVOICE_NR - eChar
	eSupplierPaymentInvOnWay					= 172,  //ADK_SUPPLIERPAYMENT_INVOICE_NR - eChar
	eSupplierPaymentInvPayed					= 173,  //ADK_SUPPLIERPAYMENT_INVOICE_NR - eChar

	//Kassakvitto (faktura)
	eCashReceiptNr								= 174,  //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eCashReceiptDate							= 175,  //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eCashReceiptCustomerNr						= 176,  //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eCashReceiptCustomerName					= 177,  //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble

	//Order
	eOrderNoInvoice								= 178,  //ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar

	//Verifikationer
	eVerificationNr								= 179,  //ADK_VERIFICATION_HEAD_VER_NR - eDouble
	eVerificationTDate							= 180,  //ADK_VERIFICATION_HEAD_DATE1 - eDate

	//Bokföringsår
	eCodeOfBookingyear							= 181,  //ADK_CODE_OF_BOOKINGYEAR_ID - eChar
	eCodeOfBookingyearStart						= 182,  //ADK_CODE_OF_BOOKINGYEAR_START - eDate

	//Rabattkod
	eCodeOfDiscount								= 183,  //ADK_CODE_OF_DISCOUNT_FILTER, ADK_CODE_OF_DISCOUNT_CODE - eChar

	//Kontakt
	eContactID									= 184,  //ADK_CONTACTS_ID - eDouble
	eContact									= 185,  //ADK_CONTACTS_NAME - eChar
	eContactCompany								= 186,  //ADK_CONTACTS_COMPANY_NAME - eChar
	eContactTitle								= 187,	//ADK_CONTACTS_TITLE - eChar
	eContactCustomer							= 188,  //ADK_CONTACTS_NAME - eChar
	eContactCustomerCompany						= 189,  //ADK_CONTACTS_COMPANY_NAME - eChar
	eContactCustomerTitle						= 190,	//ADK_CONTACTS_TITLE - eChar
	eContactCustomerNr							= 191,  //ADK_CONTACTS_CUSTOMER_NUMBER - eChar
	eContactSupplier							= 192,  //ADK_CONTACTS_NAME - eChar
	eContactSupplierCompany						= 193,  //ADK_CONTACTS_COMPANY_NAME - eChar
	eContactSupplierTitle						= 194,	//ADK_CONTACTS_TITLE - eChar
	eContactSupplierNr							= 195,	//ADK_CONTACTS_SUPPLIER_NUMBER - eChar
	eContactOther								= 196,  //ADK_CONTACTS_NAME - eChar
	eContactOtherCompany						= 197,  //ADK_CONTACTS_COMPANY_NAME - eChar
	eContactOtherTitle							= 198,	//ADK_CONTACTS_TITLE - eChar
	eContactCommercialSMS						= 199,  //ADK_CONTACTS_NAME - eChar
	eContactCommercialEmail						= 200,  //ADK_CONTACTS_NAME - eChar
	eContactCustomerSign						= 201,  //ADK_CONTACTS_CUSTOMER_NUMBER - eChar
	eContactSupplierSign						= 202,  //ADK_CONTACTS_SUPPLIER_NUMBER - eChar
	eContactOtherSign							= 203,  //ADK_CONTACTS_SIGN - eChar

	//KontaktTitel
	eCodeOfContactTitle							= 204,  //ADK_CODE_OF_CONTACT_TITLE_ID - eDouble
	eCodeOfContactTitleName						= 205,  //ADK_CODE_OF_CONTACT_TITLE_NAME - eChar

	//KontaktGrupper
	eCodeOfContactGroup							= 206,  //ADK_CODE_OF_CONTACT_GROUPS_ID - eDouble
	eCodeOfContactGroupName						= 207,  //ADK_CODE_OF_CONTACT_GROUPS_NAME

	//Kopplade kontakter i kontaktgrupper
	eCodeOfContactsAndContactsGroup				= 208,  //ADK_CODE_OF_CONTACT_GROUP_CONTACTS_CONTACT_ID - eDouble
	eCodeOfContactsAndContactsGroupGroupID		= 209,  //ADK_CODE_OF_CONTACT_GROUP_CONTACTS_GROUP_ID - eDouble

	//SKVHUS
	eTaxReductionInvoiceNumber					= 210,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble
	eTaxReductionInvoiceNumberApplied			= 211,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble
	eTaxReductionInvoiceNumberGranted			= 212,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble
	eTaxReductionPersonalIdentityNumber			= 213,  //ADK_TAX_REDUCTION_PERSONAL_IDENTITY_NUMBER - eChar
	eTaxReductionPersonalIdentityNumberApplied  = 214,  //ADK_TAX_REDUCTION_PERSONAL_IDENTITY_NUMBER - eChar
	eTaxReductionPersonalIdentityNumberGranted  = 215,  //ADK_TAX_REDUCTION_PERSONAL_IDENTITY_NUMBER - eChar
	eTaxReductionPIDInvoice						= 216,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble

	//Order
	eOrderNotDelivered							= 217,  //ADK_OOI_HEAD_DOCUMENT_NUMBER - eDouble
	eOrderNotDeliveredCustomerNr				= 218,  //ADK_OOI_HEAD_CUSTOMER_NUMBER - eChar

	//Avtal
	eAgreementNr								= 219,  //ADK_AGREEMENT_HEAD_DOCUMENT_NUMBER - eDouble

	//Generell
	eTimeStamp									= 220,

	//Free category
	eFreeCategory								= 221,  //ADK_FREE_CATEGORY_CATEGORY - eChar

	//Verserie
	eVerSerie									= 222, //ADK_VERIFICATION_SERIES_VER_SERIE - eChar

	//Bokhist
	eBookkeepingHistNr							= 223, //ADK_BOOKKEEPINGHIST_NR - eDouble
	eBookkeepingHistDate						= 224, //ADK_BOOKKEEPINGHIST_DATE - eDate
	eBookkeepingHistText						= 225, //ADK_BOOKKEEPINGHIST_TEXT - eChar

	//SKVHUS ORDER
	eTaxReductionOrderNumber					= 226,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble
	eTaxReductionPersonalIdentityNumberOrder	= 227,  //ADK_TAX_REDUCTION_PERSONAL_IDENTITY_NUMBER - eChar
	eTaxReductionPIDOrder						= 228,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble

	//SKVHUS AVTAL
	eTaxReductionAgreementNumber				= 229,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble
	eTaxReductionPersonalIdentityNumberAgreement= 230,  //ADK_TAX_REDUCTION_PERSONAL_IDENTITY_NUMBER - eChar
	eTaxReductionPIDAgreement					= 231,  //ADK_TAX_REDUCTION_DOCUMENT_CONNECTION_NUMBER - eDouble
	
	//Periodic adjustment
	ePeriodicAdjustmentAccount					= 232,  //ADK_PERIODIC_ADJUSTMENT_ACCOUNT - eChar

	//CustomerPayment
	eCustomerPaymentDate						= 233,  //ADK_CUSTOMERPAYMENT_DATE - eDouble

	//CustomerArticle
	eCustomerArticleArtnrCustnr					= 234,  //ADK_CUSTOMER_ARTICLE_ARTNR - eChar	
	eCustomerArticleCustnrArtnr					= 235,  //ADK_CUSTOMER_ARTICLE_CUSTNR - eChar
	eCustomerArticleCustnrCustartnr				= 236,  //ADK_CUSTOMER_ARTICLE_CUSTNR - eChar

	//AttachmentInfo
	eAttachmentInfoSupplierInvoice				= 237,  //ADK_ATTACHMENT_INFO_DOKNR - eDouble
	eAttachmentInfoVerification					= 238,	//ADK_ATTACHMENT_INFO_VERNR - eDouble

	//TaxReductionTypes
	eTaxReductionTypesId						= 239,	//ADK_TAX_REDUCTION_TYPES_ID - eChar

    //Customer
	eCustomerEmail								= 240,	//ADK_CUSTOMER_EMAIL - eChar

}ADK_SORT_ORDER;

//Streckkodstyper
typedef enum
{
	eEmpty = 0,								//Tom
	eEAN_8 = 1,								//EAN 8
	eEAN_13 = 2,							//EAN 13
	eUPC_A = 3,								//UPC-A
	eUPC_E = 4,								//UPC-E
	eCode_39 = 5,							//Code 39
	eInterleaved_2_5 = 6,					//Interleaved 2/5
	eUS_Postnet = 7,						//US Postnet
	eCode_128 = 8,							//Code 128
}ADK_BAR_CODE_TYPE;

//Avgiftskod
typedef enum
{                               // Bank                         FB  HB  Nord    SE  Spar
    eBgSenderPays       = 0,    // sender pays all              *   *   *       *   *
    eBgRecipPays        = 1,    // recipiant pays all         	    *           *
    eBgRecipPaysExpr    = 2,    // recipiant pays express fee                   *
    eBgRecipPaysForeign = 3     // recipiant pays foreign fee   *   *   *       *   *
}ADK_CODE_BG_FOREIGN_FEE;

//Vad ska kopieras vid Kreditfaktura?
typedef enum
{
	eEntireInvoice = 0,						//The entire Invoice
	eInformation = 1,						//Customer/Supplier-Information
	eNothing = 2,							//Nothing
}ADK_CREDIT_INVOICE_TO_COPY;

//Kön (Medlemsregistret)
typedef enum
{
    eSexMale    = 0,    //Man
    eSexFemale  = 1,    //Kvinna
    eSexNone    = 2,    //Saknas = juridisk person
}ADK_CODE_OF_SEX;

//Valuta (Kundspecifika priser)
typedef enum
{
    eCustomerPriceCurCustomer	= 0,    //Kundens valuta
    eCustomerPriceCurKr			= 1,    //Inhemsk valuta
    eCustomerPriceCurPriceList	= 2,    //Prislistans valuta
}ADK_CODE_OF_CUSTOMERPRICE;


#ifdef __cplusplus
extern "C" 
{
#endif //__cplusplus

    __declspec(dllexport) PADK_DATA __stdcall AdkCreateData(INT iDatabaseId);
    __declspec(dllexport) PADK_DATA __stdcall AdkCreateDataRow(INT lDatabaseId, INT iNumber);
    __declspec(dllexport) PADK_DATA __stdcall AdkGetDataRow(ADK_DATA* pDataRow, INT iIx);
    __declspec(dllexport) ADK_ERROR __stdcall AdkDeleteStruct(ADK_DATA* pData);    
    
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetStr(ADK_DATA* pData, INT iFieldId, CHAR** ppsValue, INT iLen);
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetBool(ADK_DATA* pData, INT iFieldId, INT* piValue);
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetData(ADK_DATA* pData, INT iFieldId, INT iIx, ADK_DATA** ppDataRow);
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetDouble(ADK_DATA* pData, INT iFieldId, DOUBLE* pdValue);
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetDate(ADK_DATA* pData, INT iFieldId, LONG* plValue);
    
    __declspec(dllexport) ADK_ERROR __stdcall AdkSetStr(ADK_DATA* pData, INT iFieldId, CHAR* pValue);
    __declspec(dllexport) ADK_ERROR __stdcall AdkSetBool(ADK_DATA* pData, INT iFieldId, INT iValue);
    __declspec(dllexport) ADK_ERROR __stdcall AdkSetData(ADK_DATA* pData, INT iFieldId, ADK_DATA* pDataRow);
    __declspec(dllexport) ADK_ERROR __stdcall AdkSetDouble(ADK_DATA* pData, INT iFieldId, DOUBLE dValue);
    __declspec(dllexport) ADK_ERROR __stdcall AdkSetDate(ADK_DATA* pData, INT iFieldId, LONG lValue);

    __declspec(dllexport) ADK_ERROR __stdcall AdkLongToDate(LONG lValue, CHAR** ppsValue, INT iLen);
    __declspec(dllexport) ADK_ERROR __stdcall AdkDateToLong(CHAR* sValue, LONG* plValue);

    __declspec(dllexport) ADK_ERROR __stdcall AdkGetType(ADK_DATA* pData, INT iFieldId, ADK_FIELD_TYPE* peType);    
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetLength(ADK_DATA* pData, INT iFieldId, INT* iLength);  
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetDecimals(ADK_DATA* pData, INT iFieldId, INT* iDec);  
    __declspec(dllexport) BOOL __stdcall AdkIsReadWrite(ADK_DATA* pData, INT iFieldId);

    __declspec(dllexport) ADK_ERROR __stdcall AdkAdd(ADK_DATA* pData);
    __declspec(dllexport) ADK_ERROR __stdcall AdkUpdate(ADK_DATA* pData);
    __declspec(dllexport) ADK_ERROR __stdcall AdkFind(ADK_DATA* pData);
    __declspec(dllexport) ADK_ERROR __stdcall AdkNext(ADK_DATA* pData);
	__declspec(dllexport) ADK_ERROR __stdcall AdkPrevious(ADK_DATA* pData);
    __declspec(dllexport) ADK_ERROR __stdcall AdkFirst(ADK_DATA* pData);
	__declspec(dllexport) ADK_ERROR __stdcall AdkLast(ADK_DATA* pData);
    __declspec(dllexport) ADK_ERROR __stdcall AdkDelete(ADK_DATA* pData);
    __declspec(dllexport) ADK_ERROR __stdcall AdkDeleteRow(ADK_DATA* pData, INT iRowNr);
    __declspec(dllexport) ADK_ERROR __stdcall AdkResetStruct(ADK_DATA* pData);

    __declspec(dllexport) ADK_ERROR __stdcall AdkSetSortOrder(ADK_DATA* pData, ADK_SORT_ORDER nSortOrder);
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetFieldName(INT iDataBaseId, INT iFieldId, CHAR** ppsValue, INT iLen);
    
    __declspec(dllexport) ADK_ERROR __stdcall AdkOpen(CHAR* pszSystemPath, CHAR* pszFtgPath);
    __declspec(dllexport) ADK_ERROR __stdcall AdkOpenEx(CHAR* pszSystemPath, CHAR* pszFtgPath, long lLogOn);
    __declspec(dllexport) VOID __stdcall AdkClose();

    __declspec(dllexport) VOID __stdcall AdkSetWarningFunction(void(__stdcall*function)(ADK_ERROR*));
    
    __declspec(dllexport) VOID __stdcall AdkGetErrorText(ADK_ERROR* error, ADK_ERROR_TEXT_TYPE nErrorTextType, CHAR** achBuf, INT iLen);

    __declspec(dllexport) ADK_ERROR __stdcall AdkGetAdmSize(INT* piAdmSize, CHAR** chBuf, INT iBufSize); //Rekommenderad storlek buffert: >43 tecken
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetAdmSizeEx(INT* piAdmSize, CHAR** chBuf, INT iBufSize); //Rekommenderad storlek buffert: >43 tecken

	/* Nyheter v 4.4 */
	__declspec(dllexport) ADK_ERROR __stdcall AdkFindEx(ADK_DATA* pData, BOOL bRow);
    __declspec(dllexport) ADK_ERROR __stdcall AdkNextEx(ADK_DATA* pData, BOOL bRow);
	__declspec(dllexport) ADK_ERROR __stdcall AdkPreviousEx(ADK_DATA* pData, BOOL bRow);
	__declspec(dllexport) ADK_ERROR __stdcall AdkFirstEx(ADK_DATA* pData, BOOL bRow);
	__declspec(dllexport) ADK_ERROR __stdcall AdkLastEx(ADK_DATA* pData, BOOL bRow);

	__declspec(dllexport) ADK_ERROR __stdcall AdkGetVatpercentOnArticle(CHAR* strArticle, DOUBLE* dVal);
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetCustomerPrice(CHAR* strCustomer, CHAR* strArticle, DOUBLE dQuantity, BOOL bInvDisc, BOOL bRowDisc, BOOL bInclVAT, INT iSelCur, DOUBLE* dVal);

	/* Nyheter v 5.0 */
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetVariant(INT* piVariant, BOOL* pbApi, CHAR** chBuf, INT iBufSize, CHAR* pszSystemPath); //Rekommenderad storlek buffert: >43 tecken
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetSie(ADK_SIE_TYPE type, CHAR chAar, CHAR* chFilename, CHAR* chPath);

	/* Nyheter v 5.1 */
	__declspec(dllexport) ADK_ERROR __stdcall AdkFind2(ADK_DATA* pData, BOOL bRow);
    __declspec(dllexport) ADK_ERROR __stdcall AdkLongToDateTime(LONG lValue, CHAR** ppsValue, INT iLen);
    __declspec(dllexport) ADK_ERROR __stdcall AdkDateTimeToLong(CHAR* sValue, LONG* plValue);
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetTimestampField(ADK_DATA* pData, INT* iFieldId);
    __declspec(dllexport) ADK_ERROR __stdcall AdkGetBookingYearId(LONG lValue, CHAR** chBuf, INT iBufSize);
    __declspec(dllexport) VOID __stdcall AdkGetVersion(LONG* lMajor, LONG* lMinor);

	/* Nyheter v 5.3 */
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetCompanyName(CHAR* pszFtgPath, BOOL bStrict, CHAR* pszSystemPath, CHAR** chBuf, INT iBufSize, INT* piVariant, LONG* lMajor, LONG* lMinor); //Rekommenderad storlek buffert: >50 tecken
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetCompanyNameEx(CHAR* pszFtgPath, BOOL bStrict, CHAR* pszSystemPath, CHAR** chBuf, INT iBufSize, INT* piVariant, LONG* lMajor, LONG* lMinor); //Rekommenderad storlek buffert: >50 tecken


	/* Nyheter v 5.4 */
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetCustomerPrice2(CHAR* strCustomer, CHAR* strArticle, DOUBLE dQuantity, BOOL bInvDisc, BOOL bRowDisc, BOOL bInclVAT, INT iSelCur, DOUBLE* dVal, CHAR** ppsCurrency, INT iLenCurrency);
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetCompanySetting(CHAR* pszSetting, INT* piValue);

	/* Nyheter v 2013.0 */
	__declspec(dllexport) VOID __stdcall AdkGetProgramDatabaseVersion(LONG* lMajor, LONG* lMinor);

	/*Nyheter v 2017.1*/
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetLastFldId(ADK_DATA* pData, INT* piFieldId);
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetNrowsFldId(ADK_DATA* pData, INT* piFieldId);
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetRowsFldId(ADK_DATA* pData, INT* piFieldId);
	__declspec(dllexport) ADK_ERROR __stdcall AdkGetRowDbId(ADK_DATA* pData, INT* piRowDbId);

    __declspec(dllexport) ADK_ERROR __stdcall AdkOpen2(CHAR* pszSystemPath, CHAR* pszFtgPath, CHAR* pszUserName, CHAR* pszPassword);
    __declspec(dllexport) ADK_ERROR __stdcall AdkOpenEx2(CHAR* pszSystemPath, CHAR* pszFtgPath, CHAR* pszUserName, CHAR* pszPassword, long lLogOn);
    __declspec(dllexport) ADK_ERROR __stdcall AdkIsLoginActivated(CHAR* pszSystemPath, CHAR* pszFtgPath, INT* piValue);

	/*Nyheter v 2018.1*/
    __declspec(dllexport) ADK_ERROR __stdcall AdkAddEx(ADK_DATA* pData, BOOL bRow);
    __declspec(dllexport) ADK_ERROR __stdcall AdkUpdateEx(ADK_DATA* pData, BOOL bRow);

	/*Nyheter v 2018.6*/
    __declspec(dllexport) ADK_ERROR __stdcall AdkSetFilter(ADK_DATA* pData, INT iFieldId, const char* pExpression, INT iVersion);
    __declspec(dllexport) ADK_ERROR __stdcall AdkIsFilterable(ADK_DATA* pData, INT iFieldId, BOOL* pbIsFilterable);
    __declspec(dllexport) ADK_ERROR __stdcall AdkClearFilters(ADK_DATA* pData);

	/*Nyheter v 2019.2*/
	 __declspec(dllexport) ADK_ERROR __stdcall AdkDeleteRecord(ADK_DATA* pData);


#ifdef __cplusplus

}
#endif //__cplusplus

#endif
