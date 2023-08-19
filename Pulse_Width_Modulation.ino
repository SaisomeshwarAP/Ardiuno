#include <LiquidCrystal.h>
const int rs = 11, en = 12, d4 = 1, d5 = 2, d6 = 3, d7 = 4;
LiquidCrystal Lcd(rs, en, d4, d5, d6, d7);
int Led = 9;
void setup() {
  pinMode(Led,OUTPUT);
  Serial.begin(9600);
  Lcd.begin(16,2);

}

void loop() {
  for(int i=0;i<256;i++)
  {
  analogWrite(9,i);
  float a = i/256.0*5.0;
  Serial.println(a);
  //Lcd.print("a");
  delay(10);
  }
  for(int i=256;i>=0;i--)
  {
    analogWrite(9,i);
  float a = i/256.0*5.0;
  Serial.println(a);
  //Lcd.print("a");
  delay(10);
  }

}
