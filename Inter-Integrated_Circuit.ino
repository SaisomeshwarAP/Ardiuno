//** I2C Master to Slave transmitter **//

#include<Wire.h>
int b = 8;
int b2 = 7;
void setup() {
  Wire.begin();
  Serial.begin(9600);
  pinMode(b,INPUT);
  pinMode(b2,INPUT);
  

}

void loop() {
  Wire.beginTransmission(10);
  Wire.write('1');
  Wire.endTransmission();
  delay(500);
  Wire.beginTransmission(11);
  Wire.write('1');
  Wire.endTransmission();
  delay(500);
}

//** I2C Master to Slave Receiver Side **//

#include<Wire.h>
int LED = 9;
void setup() {
  Wire.begin(9);
  pinMode(LED,OUTPUT);
  Wire.onReceive(display);

}

void loop() {
}
void display()
{
while(Wire.available()>0)
{
  char a = Wire.read();
  if(a == '1')
  {
    digitalWrite(LED,HIGH);
    delay(1000);
  }
  else if(a == '0')
  {
    digitalWrite(LED,LOW);
    delay(1000);
  }
 
}
}
