const int LED=1,LED2=2;
void setup() 
{
  pinMode(LED,OUTPUT);
  pinMode(LED2,OUTPUT);

}

void loop() 
{
  digitalWrite(LED,HIGH);
  delay(100);
  digitalWrite(LED,LOW);
  delay(100);
  digitalWrite(LED2,HIGH);
  delay(100);
  digitalWrite(LED2,LOW);
  delay(100);
}
