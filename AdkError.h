// AdmError.h: interface for the CAdmError class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ADMERROR_H__8C6183C3_F5E3_11D4_9BC2_000103482EA6__INCLUDED_)
#define AFX_ADMERROR_H__8C6183C3_F5E3_11D4_9BC2_000103482EA6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

const long ADKE_OK										    = 0; 
const long ADKE_INTERNAL								    = 1; 
const long ADKE_CUST_DISCOUNT_EXIST						    = 2; 
const long ADKE_EXPORT_INVOICE							    = 3; 
const long ADKE_OOF_EDIT_DENIED							    = 4; 
const long ADKE_NOT_PRINTED_IF_NOT_READY				    = 5; 
const long ADKE_NO_CHANGE_ON_EXPORT						    = 6; 
const long ADKE_NO_ARTNR_ON_TEXT_ROW					    = 7; 
const long ADKE_NO_ARTNR_CHANGE_ON_PACKET				    = 8; 
const long ADKE_EDIT_DENIED_OBLITERATED	        		    = 9; 
const long ADKE_OFFER_EDIT_DENIED_CREATED     			    = 10; 
const long ADKE_ORDER_EDIT_DENIED_CREATED     			    = 11; 
const long ADKE_EDIT_DENIED_PRINTED			    	        = 12; 
const long ADKE_ORDER_EDIT_DENIED_DELIVERED			    	= 13; 
const long ADKE_ORDER_EDIT_DENIED_NEW_ORDER_CREATED	    	= 14; 
const long ADKE_ORDER_EDIT_DENIED_NO_GROUP_INVOICE	    	= 15; 
const long ADKE_ORDER_EDIT_DENIED_ALREADY_REST		    	= 16; 
const long ADKE_ORDER_EDIT_DENIED_PACKET_NO_REST	    	= 17; 
const long ADKE_OOF_EDIT_DENIED_SUBSUM				    	= 18; 
const long ADKE_OOF_EDIT_DENIED_ALREADY_IN_LEDGER	    	= 19; 
const long ADKE_COULD_NOT_FIND_ARTICLE				    	= 20; 
const long ADKE_COULD_NOT_FIND_CUSTOMER				    	= 21; 
const long ADKE_DENIED_PROFIT_CENTRE_ON_ACCOUNT             = 22;
const long ADKE_INVOICE_EDIT_DENIED_JOURNAL 		    	= 23; 
const long ADKE_INVOICE_EDIT_DENIED_BOOKKEEPING		    	= 24; 
const long ADKE_INVOICE_EDIT_DENIED_ALREADY_IN_LEDGER   	= 25; 
const long ADKE_INVOICE_EDIT_DENIED_OTHER_INVOICE           = 26; 
const long ADKE_INVOICE_EDIT_DENIED_INTREST_LINE            = 27; 
const long ADKE_INVOICE_EDIT_DENIED_CUSTOMER_NR             = 28; 
const long ADKE_INVOICE_EDIT_DENIED_ORDERINFO               = 29; 
const long ADKE_INVOICE_EDIT_DENIED_AGREEMENT_PERIOD        = 30; 
const long ADKE_INVOICE_EDIT_DENIED_MANUAL                  = 31; 
const long ADKE_ARTICLE_DENIED_KLKPRICE_MANUAL              = 32; 
const long ADKE_ARTICLE_DENIED_PARCELART_STOCK              = 33; 
const long ADKE_INVALID_STRING                              = 34; 
const long ADKE_INVALID_PRISL                               = 35; 
const long ADKE_ORDER_EDIT_DENIED_OFFER_CANT_BE_LOCKED      = 36; 
const long ADKE_CUSTOMER_INVALID_KUNDKAT                    = 37; 
const long ADKE_CUSTOMER_INVALID_DISTRIKT                   = 38; 
const long ADKE_CUSTOMER_INVALID_SELLER                     = 39; 
const long ADKE_INVALID_DELIVERY_TERMS                      = 40; 
const long ADKE_INVALID_PAYMENT_TERMS                       = 41; 
const long ADKE_INVALID_DELIVERY_WAY                        = 42; 
const long ADKE_INVALID_CURRENCY_CODE                       = 43; 
const long ADKE_INVALID_LAUNGUAGE_CODE                      = 44; 
const long ADKE_ARTICLE_INVALID_ARTGRP                      = 45; 
const long ADKE_ARTICLE_INVALID_KONTKOD                     = 46; 
const long ADKE_ARTICLE_INVALID_UNITCODE                    = 47; 
const long ADKE_ARTICLE_INVALID_SUPPLIER                    = 48; 
const long ADKE_OOF_INVALID_CUSTOMER                        = 49; 
const long ADKE_OOF_INVALID_ARTICLE                         = 50; 
const long ADKE_CUSTOMER_INVALID_CUSTOMERNR                 = 51; 

//databastabeller; 
const long ADKE_DBTABLE_CUSTOMER                            = 52;
const long ADKE_DBTABLE_ARTICLE                             = 53; 
const long ADKE_DBTABLE_OOF                                 = 54; 
const long ADKE_DBTABLE_ARTRAD                              = 55; 
const long ADKE_DBTABLE_KUNDKAT                             = 56; 
const long ADKE_DBTABLE_DISTRICT                            = 57; 
const long ADKE_DBTABLE_SELLER                              = 58; 
const long ADKE_DBTABLE_DEL_TERMS                           = 59; 
const long ADKE_DBTABLE_PAYMENT_TERMS                       = 60; 
const long ADKE_DBTABLE_CURRENCY_CODE                       = 61; 
const long ADKE_DBTABLE_LANGUAGE_CODE                       = 62; 
const long ADKE_DBTABLE_PRICELIST                           = 63;
const long ADKE_DBTABLE_ARTGROUP                            = 64; 
const long ADKE_DBTABLE_ARTKNT_KONTKOD                      = 65; 
const long ADKE_DBTABLE_UNIT_CODE                           = 66; 
const long ADKE_DBTABLE_SUPPLIER                            = 67; 
const long ADKE_DBTABLE_PRICEL                              = 68; 
const long ADKE_DBTABLE_LEVFKT                              = 69; 
const long ADKE_DBTABLE_ACCOUNT                             = 70; 
const long ADKE_DBTABLE_PROJECT                             = 71; 
const long ADKE_DBTABLE_DEL_WAY                             = 72; 
const long ADKE_DBTABLE_DISCOUNT_AGREEMENT                  = 73; 
const long ADKE_DBTABLE_RESULT_UNIT                         = 74; 
 
const long ADKE_INVALID_DB_PROG                             = 75;
const long ADKE_INVALID_DB_NEWER                            = 76; 
const long ADKE_INVALID_DB_OLDER                            = 77; 
const long ADKE_BOF                                         = 78; 
const long ADKE_EOF                                         = 79; 
const long ADKE_NO_DB_OPEN                                  = 80; 

//Funktioner; 
const long ADKE_ADD                                         = 81;
const long ADKE_FIND                                        = 82; 
const long ADKE_FIRST                                       = 83; 
const long ADKE_NEXT                                        = 84; 
const long ADKE_UPDATE                                      = 85; 
const long ADKE_SET_LONG                                    = 86; 
const long ADKE_SET_BOOL                                    = 87; 
const long ADKE_SET_DOUBLE                                  = 88; 
const long ADKE_SET_STRING                                  = 89; 
const long ADKE_SET_DATA            				    	= 90; 
const long ADKE_SET_DATE                                    = 91; 
const long ADKE_GET_STRING                                  = 92; 
const long ADKE_GET_LONG                                    = 93; 
const long ADKE_GET_BOOL                                    = 94; 
const long ADKE_GET_DOUBLE                                  = 95; 
const long ADKE_GET_DATE                                    = 96; 
const long ADKE_GET_TYPE              				    	= 97; 
const long ADKE_GET_DATA            				    	= 98; 
const long ADKE_GET_DATA_ROW                                = 99; 
const long ADKE_OPEN                                        = 100;  

const long ADKE_DELETE_STRUCT                               = 101;
const long ADKE_UNKNON_DB_FIELD                             = 102; 
const long ADKE_INVALID_DATA_TYPE                           = 103; 
const long ADKE_NOT_VALID_SORTORDER                         = 104; 
const long ADKE_NO_PRICELIST                                = 105; 
const long ADKE_COULD_NOT_FIND_SUPPLIER				    	= 106; 
const long ADKE_INVALID_DB            				    	= 107; 
const long ADKE_INVALID_CONTROLNR                           = 108; 
const long ADKE_EDIT_DENIED_FIELD                           = 109; 
const long ADKE_INVALID_INVOICE_TYPE                        = 110; 
const long ADKE_INVALID_INDEX                               = 111; 
const long ADKE_NO_KEY                                      = 112;
const long ADKE_LONG_TO_DATE                                = 113; 
const long ADKE_TO_SHORT_STRING                             = 114;
const long ADKE_NOT_FOUND                                   = 115; 
const long ADKE_INVALID_PATH_COMPANY                        = 116; 
const long ADKE_SET_SORT_ORDER                              = 117; 
const long ADKE_NO_ACTIVE_PRICE_LIST                        = 118; 
const long ADKE_RECIEVER_NUMBER_USED                        = 119; 
const long ADKE_INVALID_CODE_OF_FEE                         = 120;
const long ADKE_DENIED_DELETE_CODE_SWE                      = 121;
const long ADKE_DENIED_DELETE_CODE_DOMESTIC                 = 122;
const long ADKE_DENIED_DELETE_CODE_USED                     = 123;
const long ADKE_IN_DISCOUNT_AGREEMENT                       = 124;
const long ADKE_DENIED_DELETE_RES_CODE_USED                 = 125;
const long ADKE_DENIED_DELETE_RES_CODE_ING                  = 126;
const long ADKE_DENIED_DELETE_RES_CODE_BUDGET               = 127;
const long ADKE_INVALID_NET_LICENCE                         = 128;
const long ADKE_INVALID_TIME                                = 129;
const long ADKE_INVALID_SERIAL                              = 130;
const long ADKE_INVALID_ADM_PATH_INI                        = 131;
const long ADKE_APP_OLD                                     = 132;
const long ADKE_APP_NEW                                     = 133;
const long ADKE_CANT_OPEN_FILE                              = 134;
const long ADKE_TOO_MANY_LICENCE                            = 135;
const long ADKE_UTDATE_ARTICLE_NUMBER_DENIED                = 136;
const long ADKE_INVALID_ADM_PATH                            = 137;
const long ADKE_DATE_TO_LONG                                = 138; 
const long ADKE_NO_NAME                                     = 139; 
const long ADKE_EDIT_DENIED_PAYMENT_JOURNAL                 = 140; 
const long ADKE_EDIT_DENIED_INVOICE_PAYED                   = 141; 
const long ADKE_EDIT_DENIED_PAYMENTS_ON_INVOICE             = 142; 
const long ADKE_EDIT_DENIED_ROWS_TO_SUPPLIER                = 143; 
const long ADKE_DENIED_BAD_ROW_TYPE                         = 144;
const long ADKE_DENIED_INVOICE_ROW                          = 145;
const long ADKE_DENIED_BST_OTHER_SUPPLIER                   = 146;
const long ADKE_DENIED_COLLECTION_INVOICE                   = 147;
const long ADKE_INVLAID_ACCOUNT                             = 148;
const long ADKE_INVLAID_PROJECT                             = 149;
const long ADKE_INVLAID_RESULT_UNIT                         = 150;
const long ADKE_NO_ARTICLE_TO_DELIVER                       = 151;
const long ADKE_INVALID_DISCOUNT_AGGREMENT                  = 152; 
const long ADKE_INVALID_ROW_CONNECTION                      = 153; 
const long ADKE_DELETE                                      = 154; 
const long ADKE_DELETE_DENIED_CONNECTION                    = 155; 
const long ADKE_DELETE_DENIED_DEBT                          = 156; 
const long ADKE_DELETE_DENIED_STOCK                         = 157; 
const long ADKE_DELETE_DENIED_RESERVATION                   = 158; 
const long ADKE_DELETE_DENIED_ORDER                         = 159; 
const long ADKE_DELETE_DENIED_PARCEL                        = 160;   
const long ADKE_DELETE_DENIED_INVALID_TYPE                  = 161; 
const long ADKE_DELETE_DENIED_INVOICE_ROWS                  = 162; 
const long ADKE_DELETE_DENIED_ONLY_PLANED_DIRECT            = 163; 
const long ADKE_DELETE_DENIED                               = 164; 
const long ADKE_DELETE_ROW                                  = 165; 
const long ADKE_INVALID_BST                                 = 166; 
const long ADKE_END_BEFORE_START                            = 167; 
const long ADKE_END_AND_START                               = 168;
const long ADKE_INVALID_FLJ                                 = 169; 
const long ADKE_NOT_TYPE_AND_DOC                            = 170; 
const long ADKE_INVALID_OFFER                               = 171; 
const long ADKE_INVALID_ORDER                               = 172; 
const long ADKE_INVALID_INVOICE                             = 173; 
const long ADKE_INVALID_AGREEMENT                           = 174; 
const long ADKE_INVALID_JOURNAL                             = 175; 
const long ADKE_INVALID_VER                                 = 176; 
const long ADKE_NO_SEARCH_VALUE                             = 177;
const long ADKE_GET_LENGTH            				    	= 178; 
const long ADKE_GET_DECIMALS          				    	= 179; 
const long ADKE_TOO_MANY_SIGNS        				    	= 180; 
const long ADKE_TOO_MANY_DECIMALS      				    	= 181; 
const long ADKE_EDIT_DENIED_ON_TEXT_ROW					    = 182;
const long ADKE_CANT_FIND_ACCOUNT   					    = 183;
const long ADKE_OLD_PROJECT_NUMBER   					    = 184;
const long ADKE_DB_NOT_ADM_2000        					    = 185;
const long ADKE_GET_FIELD_NAME        					    = 186;

const long ADKE_NO_DB_INVOLVED         					    = 187;
const long ADKE_NO_FIELD_INVOLVED     					    = 188;
const long ADKE_QUARTER_DENIED_IF_NO_VAT    			    = 189;
const long ADKE_DENIED_FOLJ_MAKUL                           = 190;
const long ADKE_DENIED_FOLJ_INVALID_SUPPIER                 = 191;
const long ADKE_DENIED_PROJECT_ON_ACCOUNT                   = 192;
const long ADKE_DENIED_DELETE_CURRENCY_CODE_SWE             = 193;
const long ADKE_DENIED_DELETE_CURRENCY_CODE_DOMESTIC        = 194;
const long ADKE_CAN_NOT_CHANGE_ARTICLE_ROW_TO_TEXT_ROW      = 195;
const long ADKE_CAN_NOT_CHANGE_TEXT_ROW_TO_ARTICLE_ROW      = 196;
const long ADKE_INVALID_ROW_TYPE                            = 197;
const long ADKE_CAN_NOT_CHANGE_TEXT_ROW_TO_SUB_SUM          = 198;
const long ADKE_CAN_NOT_CHANGE_OOF_TYPE                     = 199;
const long ADKE_CAN_NOT_CHANGE_SUB_SUM_TO_TEXT_ROW          = 200;
const long ADKE_DENIED_UPDATE_TEXT_ROW                      = 201;
const long ADKE_ARTICLE_DENIED_NEED_GROUND_PRICE            = 202; 
const long ADKE_ORDER_EDIT_DENIED_CHANGE_DATE_ON_PACKET    	= 203; 
const long ADKE_PREVIOUS                                    = 204;  
const long ADKE_LAST                                        = 205;  
const long ADKE_CANT_UPDATE_ART_NR                          = 206;  
const long ADKE_DB_NOT_ADM_1000        					    = 207;
const long ADKE_FIELD_NOT_IN_ADM_VER  					    = 208;
const long ADKE_CURRENCY_LANGUAGE_INACTIVE					= 209;
const long ADKE_BARCODE_INACTIVE							= 210;
const long ADKE_INVALID_STRUCT_POINTER						= 211;
const long ADKE_INVALID_STRUCT_POINTER_TO_ROW				= 212;
const long ADKE_ARTICLE_INVALID_BARCODE                     = 213; 
const long ADKE_KEY_TAKEN_IN_NUMBERSERIES                   = 214;
const long ADKE_INVALID_SUPPLIER_ART_NUMBER                 = 215;
const long ADKE_INVALID_POST				                = 216;
const long ADKE_ORDER_HAS_CREATED_INVOICE	                = 217;
const long ADKE_ORDER_HAS_OTHER_OFFERNR						= 218;
const long ADKE_OFFER_HAS_OTHER_ORDERNR						= 219;
const long ADKE_ORDER_HAS_OTHER_INVOICENR					= 220;
const long ADKE_INVOICE_HAS_OTHER_ORDERNR					= 221;
const long ADKE_OOF_INVALID_BARCODE                         = 222;
const long ADKE_API_APP_DIFF                                = 223; 
const long ADKE_EDIT_DENIED_ALREADY_IN_LEDGER	    		= 224;
const long ADKE_DELIVERY_NO_STOCK_OBJECT			   		= 225;
const long ADKE_QUANTITY_0			   						= 226;
const long ADKE_NO_ARTNR			   						= 227;
const long ADKE_ONLY_OBLITERATED	   						= 228;
const long ADKE_DBTABLE_INVENTORY							= 229; 
const long ADKE_DBTABLE_MANUAL_DELIVERY_IN					= 230; 
const long ADKE_DBTABLE_MANUAL_DELIVERY_OUT					= 231;
const long ADKE_DBTABLE_DISPATCHER							= 232;
const long ADKE_DENIED_CREDIT_CREDIT_INVOICE				= 233;
const long ADKE_DENIED_CREDIT_OBLITERATED_INVOICE			= 234;
const long ADKE_INVALID_TYPE_TO_COPY						= 235; 
const long ADKE_INVALID_DISPATCHER							= 236;
const long ADKE_EDIT_DENIED_ON_THIS_INVOICE					= 237;

//Warnings 
const long ADKW_CREDIT_LIMIT                                = 238;
const long ADKW_RECIEVER_NUMBER_UNIQUE                      = 239;
const long ADKW_ONLY_NUMBERS_IN_SWIFT_ADDRES                = 240;
const long ADKW_CHANGE_CURRENCY_CODE                        = 241;
const long ADKW_OCR_FOREIGN                                 = 242;
const long ADKW_OCR_SUPPLIER                                = 243;
const long ADKW_OCR_ZIPCODE                                 = 244;
const long ADKW_DENIED_FOLJESEDEL                           = 245;
const long ADKW_ARTICLE_STOCK_TRANSACTION                   = 246;
const long ADKW_ORDER_SUM                                   = 247;
const long ADKW_VER_ON_PROJECT                              = 248;
const long ADKW_NOT_OCR_BUT_ZIP                             = 249;
const long ADKW_OCR_BUT_NOT_ZIP                             = 250;
const long ADKW_COULD_NOT_FIND_ARTICLE_PRICE		    	= 251;
const long ADKW_CHANGED_STOCK						    	= 252;
const long ADKW_CANT_FIND_TEMPLATE                          = 253;
const long ADKW_INVALID_FIND_TEMPLATE                       = 254;
const long ADKW_UPDATING_TEXTROW		                    = 255;
const long ADKW_ACCOUNT_NOT_ACTIVE		                    = 256;
const long ADKW_CALCPRICE_MISSING		                    = 257;
const long ADKW_DELIVERY_IN_NO_PRICE	                    = 258;
const long ADKW_ROWS_NOT_UPDATED							= 259;
const long ADKW_SWIFT_AND_BG_NECESSARY                      = 260; //Används inte längre (Fr o m ver 4.1)

const long ADKE_CAN_NOT_CONNECT_CREDIT                      = 261;
const long ADKE_ORDER_DOESNT_EXIST                          = 262;
const long ADKE_ORDER_MAKUL                                 = 263;
const long ADKE_OFFER_DOESNT_EXIST                          = 264;
const long ADKE_OFFER_MAKUL                                 = 265;
const long ADKE_OOI_CONNECT_NROWS_NOT_ZERO                  = 266;
const long ADKE_CONNECTION_NUMBER1                          = 267;
const long ADKE_CANT_ERASE_BG_SWIFT                         = 268;
const long ADKE_ONLY_FOR_EUR_SEK                            = 269;
const long ADKE_BG_CODE_OF_FEE_FOR_PAYMENT_ABROAD           = 270;
const long ADKE_BG_CODE_OF_FEE_MUST_BE_RECIP_PAYS_FOREIGN   = 271;
const long ADKE_BG_CODE_OF_FEE_NOT_SUPPORTED_BY_BANK        = 272;
const long ADKE_NO_CHANGE_CLOSED_PROJECT1                   = 273;

const long ADKE_DB_NOT_ADM_500                              = 274;
const long ADKE_DB_NOT_ADM_FOR                              = 275;
const long ADKE_DBTABLE_BOOKING								= 276;
const long ADKE_INVOICE_OR_DELIVERY_NOTE_PRINTED			= 277;
const long ADKE_DBTABLE_NOT_IN_ADM_VER                      = 278;
const long ADKE_INVALID_COUNTRY_CODE                        = 279;
const long ADKE_DBTABLE_PRICE								= 280;

const long ADKE_GETADMSIZE                                  = 281;
const long ADKE_CANT_CHANGE_WRITE_FLAG                      = 282;
const long ADKE_CANT_CHANGE_WHEN_WRITE_FLAG                 = 283;
const long ADKE_DOC_SENT_EDI								= 284;
const long ADKE_DBTABLE_MEMBER                              = 285;
const long ADKE_DELETE_DENIED_HEAD_OF_FAMILY                = 286;
const long ADKE_DELETE_DENIED_MEMBER_OF_FAMILY              = 287;
const long ADKE_HEAD_OF_FAMILY_NEED_OWN_ADRESS              = 288;

const long ADKW_FAILED_LOAD_ADDRESS_FROM_HEAD_OF_FAMILY     = 289;
const long ADKW_FAILED_LOAD_ADDRESS_TO_MEMBER_OF_FAMILY     = 290;

const long ADKE_INVALID_FREE_CATEGORY_1                     = 291;
const long ADKE_INVALID_FREE_CATEGORY_2                     = 292;
const long ADKE_INVALID_FREE_CATEGORY_3                     = 293;
const long ADKE_INVALID_FREE_CATEGORY_4                     = 294;
const long ADKE_INVALID_FREE_CATEGORY_5                     = 295;
const long ADKE_INVALID_FREE_CATEGORY_6                     = 296;
const long ADKE_INVALID_FREE_CATEGORY_7                     = 297;
const long ADKE_INVALID_FREE_CATEGORY_8                     = 298;
const long ADKE_INVALID_FREE_CATEGORY_9                     = 299;
const long ADKE_INVALID_FREE_CATEGORY_10                    = 300;
const long ADKE_FREE_CATEGORY_1_INACTIVE                    = 301;
const long ADKE_FREE_CATEGORY_2_INACTIVE                    = 302;
const long ADKE_FREE_CATEGORY_3_INACTIVE                    = 303;
const long ADKE_FREE_CATEGORY_4_INACTIVE                    = 304;
const long ADKE_FREE_CATEGORY_5_INACTIVE                    = 305;
const long ADKE_FREE_CATEGORY_6_INACTIVE                    = 306;
const long ADKE_FREE_CATEGORY_7_INACTIVE                    = 307;
const long ADKE_FREE_CATEGORY_8_INACTIVE                    = 308;
const long ADKE_FREE_CATEGORY_9_INACTIVE                    = 309;
const long ADKE_FREE_CATEGORY_10_INACTIVE                   = 310;

const long ADKE_DBTABLE_ARTICLE_PARCEL                      = 311;
const long ADKE_DBTABLE_PURCHASE_PRICE                      = 312;
const long ADKE_DBTABLE_ORDER                               = 313;
const long ADKE_DBTABLE_ORDER_ROW                           = 314;
const long ADKE_DBTABLE_OFFER                               = 315;
const long ADKE_DBTABLE_OFFER_ROW                           = 316;
const long ADKE_DBTABLE_BOOKING_ROW                         = 317;
const long ADKE_DBTABLE_FREE_CATEGORIES                     = 318;

const long ADKE_INVALID_GENDER                              = 319;
const long ADKE_MEMBER_OF_FAMILY_NOT_OWN_ADRESS             = 320;

const long ADKE_SORTORDER_NOT_IN_ADM_VER                    = 321;
const long ADKE_EDIT_DENIED_MARKED_NOT_DONE                 = 322;
const long ADKE_INVOICE_EDIT_DENIED_CUSTOMER_NAME           = 323; 
const long ADKE_ORDER_EDIT_DENIED_ROWS_IN_LEDGER	    	= 324; 
const long ADKE_SWIFT_AND_BG_NECESSARY                      = 325;

const long ADKW_CHANGE_OF_CURRENCY_CODE                     = 326;
const long ADKW_CHANGE_OF_CURRENCY_RATE                     = 327;
const long ADKW_CHANGE_OF_CUSTOMER_OTHER_CURRENCY           = 328;
const long ADKE_MEMBER_IN_FAMILY                            = 329;
const long ADKE_DATE2_ONLY_FOR_MEMBER_FEE                   = 330;
const long ADKE_MEMBER_FEE_MUST_HAVE_DATE2                  = 331;

//Ink följesedel
const long ADKE_DBTABLE_DELIVERY_NOTE						= 332;
const long ADKE_INCOMING_ORDER_EXISTS_SUPPLIER				= 333;
const long ADKE_INCOMING_ORDER_EXISTS_ARTICLE				= 334;
const long ADKE_DELIVERY_NOTE_ON_SUPPLIER_INVOICE			= 335;
const long ADKE_SUPPLIER_NOT_ON_DELIVERY_NOTE				= 336;
const long ADKE_DELETE_DENIED_DELIVERY_NOTE_ROWS			= 337;
const long ADKE_ACCOUNT_FOR_DEBT_DELIVERY_NOTE_MISSING		= 338;
const long ADKE_UPDATE_DENIED_DELETE						= 339;
const long ADKE_INVALID_CONNECTION_TYPE						= 340;

//Leverantörsfaktura
const long ADKE_INVALID_DELNOTEROW                          = 341;
const long ADKE_DELNOTEROW_NOT_ON_DOCUMENT					= 342;
const long ADKE_BOOKROW_NOT_ON_DOCUMENT						= 343;
const long ADKE_INVALID_DOCUMENT                            = 344;
const long ADKE_INVOICENR_ALREADY_EXIST	                    = 345;
const long ADKE_UPDATE_ROW_INCORRECT                        = 346;
const long ADKE_BOOKROW_NOT_ON_DOC_FIELD_MISSING			= 347;

const long ADKE_OPENEX										= 348;
const long ADKE_RESET_STRUCT								= 349;
const long ADKE_NOT_ALLOWED_RECOPY_COMPANY      			= 350;

//Kollihantering
const long ADKE_DBTABLE_PACKAGE_HEAD                        = 351;
const long ADKE_DBTABLE_PACKAGE_ROW                         = 352;
const long ADKE_DBTABLE_IMP_PACKAGE_HEAD                    = 353;
const long ADKE_DBTABLE_IMP_PACKAGE_ROW                     = 354;
const long ADKE_DIVIDE_MORE_THAN_DELIVERED                  = 355;
const long ADKE_DIVIDE_NEGATIVE_VALUE                       = 356;
const long ADKE_PACKAGE_REF_NOT_VALID                       = 357;
const long ADKE_PACKAGE_ORDERROW_NOT_VALID                  = 358;
const long ADKE_PACKAGE_NOT_CREATED                         = 359;
const long ADKE_INVALID_PACKAGE                             = 360;
const long ADKE_PACKAGE_CHANGE_NOT_ALLOWED      			= 361;
const long ADKE_NO_CHANGE_ORDERROW_WITH_PACKAGE      		= 362;
const long ADKE_CUSTOMER_INVALID_FORPACKTYP      			= 363;

const long ADKE_WEBSHOP_NOT_ACTIVE                			= 364;
const long ADKE_EDI_NOT_ACTIVE                  			= 365;
const long ADKE_DELNOTE_NOT_CREATED_BY_EDI					= 366;
const long ADKE_PACKAGE_REF_CHANGE_NOT_ALLOWED    			= 367;
const long ADKE_PACKAGE_NUMBER_NOT_ALLOWED    			    = 368;

const long ADKE_CHANGE_NOT_ALLOWED_DELNOTE_NOT_PRINT        = 369;
const long ADKE_CHANGE_NOT_ALLOWED_ORDER_OBLITERATED        = 370;
const long ADKE_CHANGE_NOT_ALLOWED_ORDER_PRINTED            = 371;
const long ADKE_DOC_SENT_WAITING_RECEIPT          			= 372;

const long ADKE_INVALID_VAT_CODE							= 373;

const long ADKE_DBTABLE_DELIVERY_ADDRESS					= 374;

const long ADKE_INVOICE_FROM_ORDER_DELIVERED				= 375; 
const long ADKE_ORDER_AMOUNT_PINNED_ROW						= 376; 

const long ADKE_BUILDING_SERVICE_EXP						= 377; 
const long ADKE_EXP_BUILDING_SERVICE						= 378; 

const long ADKE_BUILD_SERVICE_INACTIVE						= 379;

const long ADKE_FIRSTEX										= 380;
const long ADKE_NEXTEX										= 381;
const long ADKE_FINDEX										= 382;
const long ADKE_PREVIOUSEX									= 383;
const long ADKE_LASTEX										= 384;

const long ADKE_CODE_OF_UNIT_ISOERR							= 385;

const long ADKE_GET_VATPERCENT_ON_ARTICLE					= 386;
const long ADKE_GET_VATPERCENT_ON_ARTICLE_NOT_FOUND			= 387;
const long ADKE_GET_CUSTOMER_PRICE_ON_ARTICLE				= 388;
const long ADKE_GET_CUSTOMER_PRICE_ON_ARTICLE_NOT_FOUND		= 389;
const long ADKE_GET_VATPERCENT_ON_ARTICLE_NO_VATCODE		= 390;

const long ADKE_CODE_OF_UNIT_DOMESTIC_MUST_EXIST			= 391;
const long ADKE_CODE_OF_UNIT_CANT_CHANGE_FOREIGN			= 392;
const long ADKE_CODE_OF_UNIT_CANT_CHANGE_DOMESTIC			= 393;
const long ADKE_CODE_OF_UNIT_CANT_DELETE					= 394;

const long ADKE_DBTABLE_YOURREF_CUSTOMER					= 395;
const long ADKE_DBTABLE_YOURREF_SUPPLIER					= 396;

const long ADKE_CODE_OF_UNIT_INCORRECT_VALUE				= 397;

const long ADKE_DBTABLE_CODE_OF_COUNTRY						= 398;

const long ADKE_ARTICLE_PURCHASE_PRICE_G_MUST_EXIST			= 399;
const long ADKE_ARTICLE_PURCHASE_PRICE_CANT_DELETE			= 400;

const long ADKE_DBTABLE_CUSTOMERPAYMENT						= 401;
const long ADKE_CUSTOMERPAYMENT_ROWTYPE_MISSING				= 402;
const long ADKE_CUSTOMERPAYMENT_ROWTYPE_ERROR				= 403;
const long ADKE_CUSTOMERPAYMENT_PAYMENTCODE_MUST_EXIST		= 404;
const long ADKE_CUSTOMERPAYMENT_ADJUSTMENTCODE_MUST_EXIST	= 405;
const long ADKE_CUSTOMERPAYMENT_ACCOUNT_MUST_EXIST			= 406;
const long ADKE_CUSTOMERPAYMENT_INVALID_PAYMENTCODE			= 407;
const long ADKE_CUSTOMERPAYMENT_AMOUNT_MUST_EXIST			= 408;
const long ADKE_CUSTOMERPAYMENT_CURRENCY_PROBLEM			= 409;
const long ADKE_CUSTOMERPAYMENT_INVOICE_ERROR				= 410;
const long ADKE_CUSTOMERPAYMENT_FEEACCOUNT_MUST_EXIST		= 411;
const long ADKE_CUSTOMERPAYMENT_ADJUSTMENTACCOUNT_MUST_EXIST= 412;
const long ADKE_CUSTOMERPAYMENT_CONNECTROW_MUST_EXIST		= 413;
const long ADKE_CUSTOMERPAYMENT_FEE_EXISTS					= 414;
const long ADKE_CUSTOMERPAYMENT_ADJUSTMENT_EXISTS			= 415;
const long ADKE_CUSTOMERPAYMENT_INVALID_INVOICE				= 416;
const long ADKE_CUSTOMERPAYMENT_PAYMENTCODE_ERROR			= 417;
const long ADKE_CUSTOMERPAYMENT_ADJUSTMENTCODE_ERROR		= 418;
const long ADKE_CUSTOMERPAYMENT_NO_BETROW					= 419;
const long ADKE_CUSTOMERPAYMENT_CONNECTROW_ERROR			= 420;
const long ADKE_CUSTOMERPAYMENT_JOURNAL						= 421;
const long ADKE_CUSTOMERPAYMENT_ONLY_KR						= 422;
const long ADKE_CUSTOMERPAYMENT_INVALID_ADJ_CODE			= 423;
const long ADKE_CUSTOMERPAYMENT_CANT_DELETE					= 424;
const long ADKE_CUSTOMERPAYMENT_CANT_DELETE_BATCH			= 425;
const long ADKE_CUSTOEMRPAYMENT_CANT_DELETE_JOURN			= 426;
const long ADKE_CUSTOMERPAYMENT_ROWNUM_ONLY_DELETE			= 427;
const long ADKE_CUSTOEMRPAYMENT_CANT_DELETE_CANCELLED		= 428;
const long ADKE_CUSTOMERPAYMENT_CANT_DELETE_SETTLED			= 429;
const long ADKE_DBTABLE_CODE_OF_WAY_OF_PAYMENT				= 430;

const long ADKE_DBTABLE_CODE_OF_ADJUSTMENT_CODE				= 431;

const long ADKE_CUSTOMERPAYMENT_ZERO_NOT_ALLOWED			= 432;
const long ADKW_CUSTPMERPAYMENT_NEG_AMOUNT					= 433;

const long ADKE_DBTABLE_SUPPLIERPAYMENT						= 434;
const long ADKW_FIELD_NOT_IN_USE_ANYMORE					= 435;

const long ADKE_CASH_RECEIPT_MUST_BE_PRINTED				= 436;

const long ADKE_ARTICLE_PURCHASE_PRICE_NO_MAN_CHANGE		= 437;
const long ADKE_ARTICLE_PURCHASE_PRICE_GREATER_ZERO			= 438;

const long ADKE_EDIT_DENIED_CURRENCY						= 439;
const long ADKE_EDIT_DENIED_TEXTROW							= 440;
const long ADKE_EDIT_DENIED_JOURN							= 441;

const long ADKE_INVALID_TYPE_OF_CURRENCY					= 442;

const long ADKE_BUILD_SERVICE_GENERAL_REDUCTION				= 443;
const long ADKE_EXPORT_GENERAL_REDUCTION					= 444;
const long ADKE_GENERAL_REDUCTION_EU						= 445;
const long ADKE_GENERAL_REDUCTION_BUILD_SERVICE				= 446;
const long ADKE_GENERAL_REDUCTION_NOT_ACTIVE				= 447;

const long ADKW_INVOICE_COM_REMOVE_PRINTED					= 448;

const long ADKE_INVOICE_NO_CHANGE_SKVHUS					= 449;

const long ADKE_PRICE_CANT_DELETE							= 450;
const long ADKE_PRICE_PRICE_GREATER_ZERO					= 451;
const long ADKE_PRICE_CANT_COMBINE_GR_PRECENT				= 452;
const long ADKE_PRICE_PRICE_G_MUST_EXIST					= 453;

const long ADKE_DBTABLE_VER									= 454;
const long ADKE_DBTABLE_VER_ROW								= 455;
const long ADKE_VERIFICATION_CANT_LOCK						= 456;
const long ADKE_VERIFICATION_YEAR_LOCKED					= 457;
const long ADKE_VERIFICATION_VER_SERIE_NOT_ACTIVE			= 458;
const long ADKE_VERIFICATION_NO_ROWS						= 459;
const long ADKE_VERIFICATION_NO_AMOUNT						= 460;
const long ADKE_VERIFICATION_MONTH_LOCKED					= 461;
const long ADKE_CANT_FIND_YEAR_ID							= 462;
const long ADKE_VERIFICATION_ROW_NO_ACCOUNT					= 463;
const long ADKE_VERIFICATION_ROW_NO_AMOUNT					= 464;
const long ADKE_ACCOUNT_DEMAND_PROJEKT						= 465;
const long ADKE_ACCOUNT_DEMAND_PROFIT_CENTRE				= 466;
const long ADKE_VERIFICATION_DIFF							= 467;
const long ADKE_ACCOUNT_DEMAND_TEXT							= 468;
const long ADKE_DENIED_TEXT_ON_ACCOUNT						= 469;
const long ADKE_VERIFICATION_DATE_DONT_MATCH_YEAR			= 470;
const long ADKE_DENIED_SUB_ACCOUNT_ON_ACCOUNT				= 471;
const long ADKE_ACCOUNT_DEMAND_SUB_ACCOUNT					= 472;
const long ADKE_ACCOUNT_DEMAND_QUANTITY						= 473;
const long ADKE_DENIED_QUANTITY_ON_ACCOUNT					= 474;
const long ADKE_DBTABLE_BOOKINGYEAR							= 475;

const long ADKE_GETVARIANT									= 476;
const long ADKE_ORDER_NOT_DONE								= 477;	
const long ADKE_ORDER_NO_ROWS_SHIPED						= 478;

const long ADKW_EANLOC_INVALID								= 479;
const long ADKW_SUPPLIER_NOT_FOREIGN						= 480;

const long ADKE_DBTABLE_CODE_OF_DISCOUNT_CODE				= 481;

const long ADKE_GET_SIE										= 482;
const long ADKE_CANT_CREATE_DESTINATION						= 483;
const long ADKE_CANT_CREATE_SIEFILE							= 484;
const long ADKE_ORGNR_DONT_EXIST							= 485;

const long ADKE_EXCLUSIVE_LOCK								= 486;

const long ADKE_DISCOUNT_AGREEMENT_ROW_INVALID_COMBINATION	= 487;

const long ADKE_INVALID_FIELD_ID							= 488;
const long ADKE_DBTABLE_PRM									= 489;

const long ADKW_EDI_XMLT									= 490;
const long ADKE_EDI_INVALID_PRINTOPTION						= 491;
const long ADKE_EDI_BLETTER_MUST_SEND_SE					= 492;
const long ADKE_EDI_INFORMATION_IS_MISSING					= 493;
const long ADKE_EDI_COMPLETE_SENDER							= 494;
const long ADKE_EDI_COMPLETE_RECEIVER						= 495;
const long ADKE_EDI_INVALID_EMAIL							= 496;
const long ADKW_EDI_TERMS_IS_MISSING						= 497;
const long ADKE_EDI_IDENTITY_IS_MISSING						= 498;
const long ADKE_EDI_FIELD_NOT_ACTIVE						= 499;

const long ADKE_DBTABLE_CONTACTS							= 500;
const long ADKE_DBTABLE_CODE_OF_CONTACT_TITLES				= 501;
const long ADKE_CODE_OF_CONTACT_TITLES_NAME_EXIST			= 502;
const long ADKE_DBTABLE_CODE_OF_CONTACT_GROUPS				= 503;
const long ADKE_CODE_OF_CONTACT_GROUPS_NAME_EXIST			= 504;
const long ADKE_DBTABLE_CODE_OF_CONTACT_CONTACT_GROUP		= 505;
const long ADKE_CONTACT_NOT_FOUND							= 506;
const long ADKE_CODE_OF_CONTACT_GROUP_NOT_FOUND				= 507;
const long ADKE_CODE_OF_CONTACT_CONTACT_GROUP_EXIST			= 508;
const long ADKW_CONTACT_SIGN_MUST_EXIST						= 509;
const long ADKW_CONTACT_SIGN_COMBINATION_EXIST				= 510;
const long ADKE_INVALIDE_PHONE_NUMBER						= 511;
const long ADKW_ADRESS_MISSMATCH							= 512;
const long ADKE_CONTACT_NAME_OR_SIGN_IS_MISSING				= 513;
const long ADKW_PHONE_NUMBER_LENGTH							= 514;
const long ADKE_REF_EXIST									= 515;
const long ADKE_CONTACT_SIGN_NOT_FOUND						= 516;
const long ADKE_CANT_COMBINE_REF_SIGN						= 517;

const long ADKE_DBTABLE_TAX_REDUCTION						= 518;
const long ADKE_INVALID_PERSONAL_IDENTITY					= 519;
const long ADKE_PERSONAL_IDENTITY_EXIST						= 520;
const long ADKE_TAX_REDUCTION_INVALID_REDUCTION_SUM			= 521;
const long ADKE_TAX_REDUCTION_INACTIVE						= 522;

const long ADKE_TABLE_FIELD_NOT_ACTIVE						= 523;

const long ADKE_TAX_REDUCTION_NONPOSITIVE_AMOUNT			= 524;
const long ADKW_TAX_REDUCTION_INVALID_HOUSING_COOPERATIVE	= 525;
const long ADKE_TAX_REDUCTION_BUILDING_WORK_INACTIVE		= 526;
const long ADKE_TAX_REDUCTION_INACTIVE_ON_INVOICE			= 527;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_DATE			= 528;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_EXPORT			= 529;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_BUILD_SERVICE  = 530;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_EU				= 531;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_THIRD_PART		= 532;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_CURRENCY		= 533;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_EDI			= 534;
const long ADKW_INVOICE_TAX_REDUCTION_RESET					= 535;
const long ADKE_INVOICE_DENIED_DUE_TO_TAX_REDUCTION			= 536;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_MISSING_INFO	= 537;
const long ADKE_INVOICE_DENIED_TAX_REDUCTION_TOO_HIGH_AMOUNT= 538;
const long ADKE_PRM_DENIED_DUE_TO_TAX_REDUCTION				= 539;

const long ADKE_INVOICE_SENDING								= 540;

const long ADKE_INVOICE_DENIED_TAX_REDUCTION_CURRENCY_CHANGE= 541;
const long ADKE_INVOICE_ROW_NO_TAX_REDUCTION				= 542;
const long ADKE_TAX_REDUCTION_INVOICE_ONLY					= 543;
const long ADKE_INVOICE_ROW_DENIED_TAX_REDUCTION_PACKAGE	= 544;
const long ADKE_INVOICE_ROW_DENIED_TAX_REDUCTION_TYPE_OF_ROW= 545;
const long ADKE_TAX_REDUCTION_AMOUNT_MAX					= 546;
const long ADKW_TAX_REDUCTION_AMOUNT_TOO_LOW				= 547;
const long ADKE_CUSTOMER_PAYMENT_TAX_REDUCTION_DELETE		= 548;

const long ADKE_DENIED_FOLJ_INVOICE							= 549;

const long ADKE_ALL_IS_RESERVED								= 550;

const long ADKE_TAX_REDUCTION_DESCRIPTION_OF_PROPERTY_EMPTY = 551;

const long ADKW_FIELD_NOT_IN_USE							= 552;
const long ADKE_PROJECT_COMPLETED							= 553;

const long ADKE_DBTABLE_AGREEMENT							= 554;
const long ADKE_AGREEMENT_START_DATE						= 555;
const long ADKE_AGREEMENT_END_DATE							= 556;
const long ADKE_AGREEMENT_START_BLANK						= 557;
const long ADKE_AGREEMENT_PERIOD_START_DATE					= 558;
const long ADKE_AGREEMENT_PERIOD_END_DATE					= 559;
const long ADKE_JOURNAL_IN_PROGRESS							= 560;
const long ADKE_AGREEMENT_CANT_CHANGE_INVOICE_CREATED		= 561;
const long ADKW_AGREEMENT_INVOICE_CREATED					= 562;
const long ADKE_AGREEMENT_MONTH								= 563;
const long ADKE_AGREEMENT_DAY								= 564;
const long ADKE_AGREEMENT_INTERVAL							= 565;
const long ADKW_AGREEMENT_BUILDING_SERVICE					= 566;
const long ADKW_AGREEMENT_EXPORT							= 567;
const long ADKE_AGREEMENT_DELETE_ACTIVE						= 568;
const long ADKE_AGREEMENT_CHANGE_NOT_ACTIVE					= 569;

const long ADKE_INVOICE_DENIED_INTEREST_CURRENCY_CHANGE		= 570;

const long ADKE_AGREEMENT_MAKUL								= 571;
const long ADKE_AGREEMENT_NOT_ACTIVE						= 572;
const long ADKE_INVOICE_MULTIPLE_CONNECTIONS				= 573;
const long ADKE_INVOICE_INVALID_AGREEMENT_DATE_TYPE			= 574;
const long ADKE_INVOICE_NON_AGREEMENT_DATE_GIVEN			= 575;
const long ADKE_AGREEMENT_DOESNT_EXIST						= 576;

const long ADKE_FIND2										= 577;
const long ADKE_AGREEMENT_DATE_AFTER_END_DATE				= 578;

const long ADKW_OOF_EXP_EU									= 579;

const long ADKE_LICENSE_NO_KEY								= 580;
const long ADKE_LICENSE_VERSION								= 581;
const long ADKE_LICENSE_EXPIRED								= 582;
const long ADKE_LICENS_NO_API								= 583;

const long ADKE_LONG_TO_DATETIME                            = 584; 
const long ADKE_DATETIME_TO_LONG                            = 585; 
const long ADKE_DT_TO_SHORT_STRING                          = 586;
const long ADKE_INVALID_DATETIME_STRING						= 587;
const long ADKE_DBTABLE_CUSTOMER_DISCOUNT_ROW				= 588;
const long ADKE_DBTABLE_ARTICLE_NAME						= 589;
const long ADKE_DBTABLE_PRM2								= 590;

const long ADKE_WRONG_INVOICE_DATE							= 591;
const long ADKE_CANT_CHANGE_COUNTRYCODE						= 592;
const long ADKE_CANT_CHANGE_WRITE_FLAG2						= 593;
const long ADKE_EDIT_DENIED_USED_FOLJ						= 594;

const long ADKE_DELETE_ACCOUNT_DENIED_TRANS					= 595;
const long ADKE_DELETE_ACCOUNT_DENIED_BAL					= 596;
const long ADKE_DELETE_ACCOUNT_DENIED_SALDO					= 597;
const long ADKE_DELETE_ACCOUNT_DENIED_BUDGET				= 598;
const long ADKE_DELETE_ACCOUNT_DENIED_PROJ					= 599;

const long ADKE_GET_BOOKINGYEAR_ID							= 600;
const long ADKE_DATE_NOT_WITHIN_ANY_BOOKING_YEAR			= 601;
const long ADKE_LICENSE_NO_SERVICE_AGREEMENT				= 602;

const long ADKE_DBTABLE_TAX_REDUCTION_ORDER					= 603;
const long ADKE_DBTABLE_TAX_REDUCTION_AVTAL					= 604;

const long ADKE_DBTABLE_VERIFICATION_SERIES					= 605;
const long ADKE_GET_TIMESTAMP_FIELD							= 606;
const long ADKE_TIMESTAMP_FIELD_NOT_FOUND					= 607;

const long ADKE_CANT_COMBINE_REF_SIGN_OOI					= 608;
const long ADKE_REFXXX_ID_NOT_ALLOWED						= 609;
const long ADKE_REFXXX_ID_REQUIRED							= 610;
const long ADKE_NO_CONTACT_ALLOWED							= 611;
const long ADKE_WRONG_CONTACT_TYPE							= 612;
const long ADKE_WRONG_CONTACT_TYPE_DEMAND					= 613;

const long ADKE_DBTABLE_BOOKKEEPINGHIST						= 614;

const long ADKE_PERIODISERING_ON_SUPPLIER_INVOICE			= 615;

const long ADKE_GETCOMPANYNAME								= 616;
const long ADKE_GETCOMPANYNAMEEX							= 617;

const long ADKE_DBTABLE_PERIODIC_ADJUSTMENT					= 618;

const long ADKE_INACTIVE_DENIED_WEBBSHOPARTICLE				= 619;
const long ADKE_WEBBSHOPARTICLE_DENIED_INACTIVE				= 620;

const long ADKE_TAX_REDUCTION_SUM_MORE_THAN_TO_PAY			= 621;

const long ADKE_NO_ACCOUNT									= 622;
const long ADKE_INVOICE_EDIT_DENIED_ROWS_IN_LEDGER	    	= 623; 

const long ADKE_DOC_PRINTED									= 624;

const long ADKE_GET_CUSTOMER_PRICE_ON_ARTICLE2				= 625;
const long ADKE_GETCOMPANYSETTING							= 626;

const long ADKE_INVALID_START_DATE							= 627;
const long ADKE_INVALID_NUMBER_OF_MONTHS					= 628;
const long ADKE_PERIODIC_ADJUSTMENT_EXISTS					= 629;
const long ADKE_ROW_FOR_PERIODIC_ADJUSTMENT_NOT_FOUND		= 630;
const long ADKE_PERIODIC_ADJUSTMENT_CREATE_ERROR			= 631;
const long ADKE_PERIODIC_ADJUSTMENT_ACCOUNT_MISSING			= 632;
const long ADKE_PERIODIC_ADJUSTMENT_AMOUNT_MISSING			= 633;
const long ADKE_PERIODIC_ADJUSTMENT_NOT_CREDIT_OR_INTEREST	= 634;
const long ADKE_PERIODIC_ADJUSTMENT_NO_INVOICE_DATE			= 635;
const long ADKE_PERIODIC_ADJUSTMENT_INVOICE_TOTAL_ROW		= 636;
const long ADKE_PERIODIC_ADJUSTMENT_INVOICE_ARTICLE_ROW		= 637;
const long ADK_VERIFICATION_SERIES_MISSING					= 638;
const long ADKE_VERIFICATION_VER_SERIE_CONSULTANT			= 639;

const long ADKE_EDIT_DENIED_CREDIT_INVOICE                  = 640; 
const long ADKE_EDIT_DENIED_INTEREST_INVOICE                = 641; 
const long ADKE_EDIT_DENIED_AUTOGIRO_INVOICE                = 642; 
const long ADKE_EDIT_DENIED_PAYMSTOP_INVOICE                = 643; 
const long ADKE_EDIT_DENIED_INVOICE_ALREADY_PAYED           = 644; 
const long ADKE_EDIT_DENIED_INVOICE_NEG_SALDO               = 645; 

const long ADKE_PRICELIST_NOT_ALLOWED_CHAR					= 646;
const long ADKE_PRICELIST_WEBSHOP_DENIED_CHANGE_VALUTA		= 647;

const long ADKE_DBTABLE_CUSTOMER_ARTICLE					= 648;

const long ADKE_DBTABLE_ATTACHMENT_INFO						= 649;

const long ADKE_VERIFICATION_LAST_MONTH_LOCKED				= 650;

const long ADKE_DBTABLE_TAX_REDUCTION_TYPES					= 651;

const long ADKE_NO_CHANGE_TAX_REDUCTION_TYPE_ALREADY_SET	= 652;
const long ADKE_RUT_ROT_CONFLICT							= 653;
const long ADKE_INVALID_TAX_REDUCTION_TYPE					= 654;
const long ADKE_HOURSWORKED_ON_NON_LABOURCOST_ROW			= 655;
const long ADKE_INVOICE_EDIT_DENIED_TAXREDUCTION_APPLIED	= 656;
const long ADKE_ROW_ONLY_WORK_INVOICE_PRINTED				= 657;
const long ADKE_ROW_ONLY_NO_WORK_INVOICE_PRINTED			= 658;
const long ADKE_CUSTOMER_PAYMENT_PARTIAL_APPLY_TAXRED		= 659;
const long ADKE_CUSTOMER_HOURSWORKED_NONEG					= 660;

const long ADKE_INVOICE_PAYMENT_AUTOCOLLECT					= 661;
const long ADKE_DENIED_CREDIT_INVOICE_AUTOCOLLECT			= 662;
const long ADKE_DENIED_PRINT_AUTOCOLLECT					= 663;
const long ADKE_CUSTOMER_PAYMENT_AUTOCOLLECT_DELETE			= 664;

const long ADKE_DBTABLE_PRM3								= 665;
const long ADKE_PERIODISERING_ON_INVOICE					= 666;

const long ADKE_GET_LAST_FIELD_ID							= 667;
const long ADKE_GET_NROWS_FIELD_ID							= 668;
const long ADKE_GET_ROWS_FIELD_ID							= 669;
const long ADKE_GET_ROW_DB_ID								= 670;
const long ADKE_NULLPOINTER									= 671;
const long ADKE_INVALID_PDATA								= 672;
const long ADKE_UPGRADE_NEEDED								= 673;
const long ADKE_LOGIN_DENIED								= 674;
const long ADKE_INVALID_DB_LIC								= 675;
const long ADKE_LOGIN_FAIL									= 676;

const long ADKE_OPEN2                                       = 677;  
const long ADKE_OPENEX2                                     = 678;  
const long ADKE_ISLOGINACTIVATED							= 679;

const long ADKE_ADDEX										= 680;
const long ADKE_UPDATEEX									= 681;

const long ADKE_SETFILTER									= 682;
const long ADKE_ISFILTERABLE								= 683;
const long ADKE_CLEARFILTERS								= 684;
const long ADKE_INVALID_FILTER_FIELD						= 685;
const long ADKE_INVALID_FILTER_EXPRESSION					= 686;
const long ADKE_INVALID_FILTER_SYNTAX_VERSION				= 687;

const long ADKE_ORDER_NOT_DELIVERED							= 688;
const long ADKW_INVOICE_REMOVE_PRINTED_EXT					= 689;
const long ADKE_INVOICE_TAX_REDUCTION_EACCOUNTING			= 690;
const long ADKE_NO_CHANGE_LOCKED_FIELD_EXT					= 691;
const long ADKE_NO_CHANGE_EXEMPTION_TAX						= 692;
const long ADKE_NO_CHANGE_TAX_REDUCTION_TYPE				= 693;
const long ADKE_NO_CHANGE_TAX_REDUKTION_HOUSEWORK			= 694;

const long ADKE_LAST_ERROR_CODE = 694;

#endif // !defined(AFX_ADMERROR_H__8C6183C3_F5E3_11D4_9BC2_000103482EA6__INCLUDED_)


