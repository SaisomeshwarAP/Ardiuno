// ** Serial Peripheral Interface Master **//

#include <SPI.h> 
void setup () 
{
   Serial.begin(115200);
   digitalWrite(SS,HIGH);
   SPI.begin();
   SPI.setClockDivider(SPI_CLOCK_DIV8);
}

void loop ()
{
  char c;
  digitalWrite(SS,LOW);
  for(char *p="Hello";c = *p;p++)
  {
    SPI.transfer(c);
    Serial.print(c);
  }
  digitalWrite(SS,HIGH);
  delay(1000);
}

// ** Serial Peripheral Interface Slave **//

#include<SPI.h>
char buff[50];
byte indx;

void setup() {
  Serial.begin(115200);
  pinMode(MISO,OUTPUT);
  SPCR |= _BV(SPE);
  indx = 0;
  SPI.attachInterrupt();

}
ISR (SPI_STC_vect)
{
  byte c = SPDR;
  if(indx<sizeof buff)
  {
    buff[indx++]=c;
  }
}

void loop() {
  Serial.println(buff);
  indx = 0;

}
