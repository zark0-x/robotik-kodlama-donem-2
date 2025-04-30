void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT); //TRİG
  pinMode(7,INPUT); //ECHO
  for(int i=2; i<=7;i++) pinMode(i,OUTPUT);
}

void loop() {
  digitalWrite(8,1); delay(1);
  digitalWrite(8,0);
  int sure=pulseIn(7,1);
  int mesafe=(sure/2)/28.97;
  Serial.print("Ölçülen Mesafe= ");
  Serial.println(mesafe);
  delay(500);
  if(mesafe>=0 && mesafe<=10)
  {
    digitalWrite(8,1);
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,1);
  }
  if(mesafe>=10 && mesafe<=30)
  {
    digitalWrite(8,1);
    delay(500);
    digitalWrite(8,0);
    delay(500);
    digitalWrite(2,1);
    digitalWrite(3,1);
    digitalWrite(4,0);
  }
  if(mesafe>=30 && mesafe<=50)
  {
    digitalWrite(8,1);
    delay(1500);
    digitalWrite(8,0);
    delay(1500);
    digitalWrite(2,1);
    digitalWrite(3,0);
    digitalWrite(4,0);
  }
  if(mesafe>50)
  {
    digitalWrite(8,0);
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
  }
  
}  
