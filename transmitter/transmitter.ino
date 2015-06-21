#include <SPI.h>
#include <nRF24L01p.h>
String readString;
nRF24L01p transmitter(7,8);//CSN,CE

void setup() {
Serial.begin(9600);
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  transmitter.channel(90);
  transmitter.RXaddress("Prado");
  transmitter.TXaddress("Artur");
  transmitter.init();
}

String message;
String PRXsays;

void loop() {
while(Serial.available())
{
delay(3);
char c=Serial.read();
readString+=c;
  
}
  if (readString.length()>0)
  {
Serial.println(readString);
if (readString == "LED1"){
  
  Serial.println("LED1");
  
   transmitter.txPL(message);
      transmitter.send(SLOW);
      message="LED1";
      
        transmitter.txPL(message);
      transmitter.send(SLOW);
      message="LED1";
      
      
      
      
  
  

}
if (readString == "LED0")
{ Serial.println("LED0");

 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="LED0";
      
      
 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="LED0";
      
  
  
}



Serial.println(readString);
if (readString == "2LED1"){
  
  Serial.println("2LED1");
  
  
   transmitter.txPL(message);
      transmitter.send(SLOW);
      message="2LED1";
      
       transmitter.txPL(message);
      transmitter.send(SLOW);
      message="2LED1";
  

}
if (readString == "2LED0")
{ Serial.println("2LED0");
  
   transmitter.txPL(message);
      transmitter.send(SLOW);
      message="2LED0";
     
      transmitter.txPL(message);
      transmitter.send(SLOW);
      message="2LED0";
  
  
}



Serial.println(readString);
if (readString == "3LED1"){
  
  Serial.println("3LED1");
  
 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="3LED1";

 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="3LED1";

}
if (readString == "3LED0")
{ Serial.println("3LED0");
  
   transmitter.txPL(message);
      transmitter.send(SLOW);
      message="3LED0";
      
       transmitter.txPL(message);
      transmitter.send(SLOW);
      message="3LED0";
  
}

if (readString == "4LED1"){
  
  Serial.println("4LED1");
  
   transmitter.txPL(message);
      transmitter.send(SLOW);
      message="4LED1";
      
        transmitter.txPL(message);
      transmitter.send(SLOW);
      message="4LED1";
      
      
      
      
  
  

}
if (readString == "4LED0")
{ Serial.println("4LED0");

 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="4LED0";
      
      
 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="4LED0";
      
  
  
}

if (readString == "5LED1"){
  
  Serial.println("5LED1");
  
   transmitter.txPL(message);
      transmitter.send(SLOW);
      message="5LED1";
      
        transmitter.txPL(message);
      transmitter.send(SLOW);
      message="5LED1";
      
      
      
      
  
  

}
if (readString == "5LED0")
{ Serial.println("5LED0");

 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="5LED0";
      
      
 transmitter.txPL(message);
      transmitter.send(SLOW);
      message="5LED0";
      
  
  
}





readString="";
  }




}

