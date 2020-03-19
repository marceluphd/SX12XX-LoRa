/*******************************************************************************************************
  lora Programs for Arduino - Copyright of the author Stuart Robinson - 29/02/20

  This program is supplied as is, it is up to the user of the program to decide if the program is
  suitable for the intended purpose and free from errors.
*******************************************************************************************************/

/*******************************************************************************************************
  Program Operation -

  Serial monitor baud rate is set at 9600.
*******************************************************************************************************/

//*******  Setup hardware pin definitions here ! ***************

//These are the pin definitions for one of my own boards, the Easy Mikrobus Pro Mini,
//be sure to change the definitions to match your own setup. Some pins such as DIO1,
//DIO2, BUZZER SWITCH1 may not be in used by this sketch so they do not need to be
//connected and should be set to -1.

#define NSS 10
#define RFBUSY 7
#define NRESET 9
#define LED1 8
#define DIO1 3
#define DIO2 -1                             //not used 
#define DIO3 -1                             //not used
#define SW -1                               //SW pin on Dorji devices is used to turn RF switch on\off, set to -1 if not used
#define RX_EN -1                            //pin for RX enable, used on some SX126X devices, set to -1 if not used
#define TX_EN -1                            //pin for TX enable, used on some SX126X devices, set to -1 if not used 
#define BUZZER -1                           //pin for buzzer, set to -1 if not used 

#define LORA_DEVICE DEVICE_SX1262           //we need to define the device we are using 


/*******  Setup LoRa Parameters Here ! ***************/

//LoRa Modem Parameters
const uint32_t Frequency = 434000000;           //frequency of transmissions in hertz
const uint32_t Offset = 0;                      //offset frequency for calibration purposes

const uint8_t Bandwidth = LORA_BW_062;          //LoRa bandwidth
const uint8_t SpreadingFactor = LORA_SF12;      //LoRa spreading factor
const uint8_t CodeRate = LORA_CR_4_5;           //LoRa coding rate
const uint8_t Optimisation = LDRO_AUTO;         //low data rate optimisation setting, normally set to auto

const int8_t TXpower = 10;                      //LoRa transmit power in dBm



