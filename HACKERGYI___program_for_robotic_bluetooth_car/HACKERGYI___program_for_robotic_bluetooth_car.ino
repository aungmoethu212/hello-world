char t;
void setup(){
  pinMode(13,OUTPUT);  
  pinMode(12,OUTPUT); 
  pinMode(11,OUTPUT);  
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);  
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()){
    t =Serial.read();
    Serial.println(t);
  }
if(t=='A'){
digitalWrite(13,HIGH);  
digitalWrite(11,HIGH);
}
else if(t=='B'){
digitalWrite(12,HIGH);  
digitalWrite(10,HIGH);
}
else if(t=='C'){
digitalWrite(13,HIGH);  
}
else if(t=='D'){
  digitalWrite(11,HIGH);  
}
else if(t=='E'){
digitalWrite(9,HIGH);
digitalWrite(9,LOW);
delay(100);
}
else if(t=='F'){
digitalWrite(9,LOW);
}
else if(t=='S'){
digitalWrite(13,LOW);  
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
}
delay(100);
}

