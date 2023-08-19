const int Motor1=1;
const int Motor2=2;
const int Motor3=3;
const int Motor4=4;
void setup() 
{
  pinMode(Motor1,OUTPUT);
  pinMode(Motor2,OUTPUT);
  pinMode(Motor3,OUTPUT);
  pinMode(Motor4,OUTPUT);

}

void loop() {
  digitalWrite(Motor1,HIGH);
  digitalWrite(Motor2,LOW);
  digitalWrite(Motor3,HIGH);
  digitalWrite(Motor4,LOW);
  delay(10);
  digitalWrite(Motor1,LOW);
  digitalWrite(Motor2,HIGH);
  digitalWrite(Motor3,LOW);
  digitalWrite(Motor4,HIGH);
  delay(10);

}
