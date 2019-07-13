int pinState;
void setup(){
  Serial.begin(9600);
  pinMode(10,INPUT);
}
void loop(){
  pinState=digitalRead(10);
  Serial.println(pinState);
  delay(100);
}

