//** UART transmitter Side**//
void setup() {
  
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0)
  {
      char letter = Serial.read();
    if(letter == '1')
    {
      Serial.println(1);
    }
    else if(letter == '0')
      {
       
        Serial.println(0);
      }
    
  }
  
}

//**UART Receiver Side**//

int LED = 13;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  if(Serial.available()>0)
  {
    char letter = Serial.read();
    if(letter == '1')
    {
     
      digitalWrite(10,HIGH);
      Serial.println("LED is on");
    }
    else if(letter == '0')
      {
       
        digitalWrite(10,LOW);
        Serial.println("LED is off");
      }
    
  }

}
