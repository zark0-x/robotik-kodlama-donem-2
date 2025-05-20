void setup()
{
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(2, 1);
  delay(2000);
  digitalWrite(2, 0); 
  delay(2000);
  if(digitalRead(2)==0)
  {
      digitalWrite(8,1);
  		delay(1000); 
    digitalWrite(8,0);
  }
  else if(digitalRead(2)==1){
  		digitalWrite(8,0);
    delay(1000); 
  }
}