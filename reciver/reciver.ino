#include <SPI.h>
#include <nRF24L01p.h>

nRF24L01p receiver(7,8);//CSN,CE

int iteration=0;



void setup(){
  delay(150);
  Serial.begin(115200);
  SPI.begin();
  //SPI.setClockDivider(SPI_CLOCK_DIV2);
  SPI.setBitOrder(MSBFIRST);
  receiver.channel(90);
  receiver.TXaddress("Prado");
  receiver.RXaddress("Artur");
  receiver.init();
  delay(3000);
  pinMode(2, OUTPUT);
  Serial.println("I'm PRX as transceiver");
 

}

String message;
void loop(){


 
 
 
  if(receiver.available()){
    message="";
    receiver.read();
    receiver.rxPL(message);
    Serial.print("PTX says: \"");
    Serial.print(message);
    Serial.println("\"");
    }
 
 if(message==("LED1")){
   Serial.println("LED1");
   digitalWrite(2, HIGH);

  }
else if(message==("LED0")){
   Serial.println("LED0");
   digitalWrite(2, LOW);

  }
}
  





