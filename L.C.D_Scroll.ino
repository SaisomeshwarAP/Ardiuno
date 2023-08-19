#include <LiquidCrystal.h>
LiquidCrystal Lcd(12,11,5,4,3,2);
void setup() 
{
  Lcd.begin(16,2);
  Lcd.print("sai someshwar");
  delay(1000);

}

void loop() 
{
  int a;
  for(int a=0;a<13;a++)
  {
    Lcd.scrollDisplayLeft();
    delay(150);
  }
  for(int a=0;a<29;a++)
  {
    Lcd.scrollDisplayRight();
    delay(150);
  }
  for(int a=0;a<16;a++)
  {
    Lcd.scrollDisplayLeft();
    delay(150);
  }
  delay(1000);
}
