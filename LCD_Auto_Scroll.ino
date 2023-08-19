#include <LiquidCrystal.h>
LiquidCrystal Lcd(12,11,5,4,3,2);
void setup() 
{
  Lcd.begin(16,2);
  Lcd.print("helooo world");
  //delay(1000);

}

void loop() 
{
  int a;
  //Lcd.setCursor(0,0);
  for(int a=0;a<10;a++)
  {
    Lcd.setCursor(0,0);
    Lcd.print(a);
    delay(100);
    Lcd.setCursor(16,2);
    Lcd.autoscroll();
  }
    for(int a=0;a<10;a++)
    {
      Lcd.print(a);
      delay(100); 
    }
    Lcd.noAutoscroll();
    Lcd.clear();
    
  

}
