const int LED=1,LED2=2,LED3=3,LED4=4,LED5=5;
void setup() 
{
  pinMode(LED,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);

}

void loop() 
{
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED2,HIGH);
  delay(1000);
  digitalWrite(LED3,HIGH);
  delay(1000);
  digitalWrite(LED4,HIGH);
  delay(1000);
  digitalWrite(LED5,HIGH);
  delay(1000);
  digitalWrite(LED5,LOW);
  delay(1000);
  digitalWrite(LED4,LOW);
  delay(1000);
  digitalWrite(LED3,LOW);
  delay(1000);
  digitalWrite(LED2,LOW);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);
}
