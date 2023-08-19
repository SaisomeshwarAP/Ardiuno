const int MOTOR1 = 3;
const int MOTOR2 = 4;
int pwm = 5;
int p = A0;
void setup() {
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);
  pinMode(pwm,OUTPUT);
  pinMode(p,INPUT);

}

void loop() {
    int  a = analogRead(A0);
    int b = map(a,0,1023,0,255);
    analogWrite(3,b);
    digitalWrite(4,LOW);
    

}
