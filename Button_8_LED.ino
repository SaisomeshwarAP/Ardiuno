const int LED=1,LED1=2,LED2=3,LED3=4,LED4=5,LED5=6,LED6=7,LED7=8,B=0;
void setup() 
{
  pinMode(LED,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(B,INPUT);
}
void loop()
{
  if(digitalRead(B)==1)
  {
    for(int i=1;i<=8;i++)
    {
      digitalWrite(i,HIGH);
    }
  }
  else
  {
    for(int i=1;i<=8;i++)
    {
      digitalWrite(i,LOW);
    }
  }
}
