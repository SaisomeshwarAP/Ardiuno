const int LED=13,B=10;
void setup() 
{
  pinMode(LED,OUTPUT);
  pinMode(B,INPUT);
  
}

void loop() 
{
  if(digitalRead(B)==1)
  {
    digitalWrite(LED,HIGH);
  }
  else if(digitalRead(B)==0)
  {
    digitalWrite(LED,LOW);
  }

}
