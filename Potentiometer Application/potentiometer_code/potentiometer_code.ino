void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop() {
  int patonsiyometre = analogRead(A0);
  if(patonsiyometre>=0 && patonsiyometre<=300){
       digitalWrite(3, 1);
       digitalWrite(4, 0);
       digitalWrite(5, 0);
       delay(300);
    }
   else if(patonsiyometre>=301 && patonsiyometre<=700){
       digitalWrite(3, 1);
       digitalWrite(4, 1);
        digitalWrite(5, 0);
       delay(300);
    } 
    else if(patonsiyometre>=701 && patonsiyometre<=1023){
       digitalWrite(3, 1);
       digitalWrite(4, 1);
       digitalWrite(5, 1);
       delay(300);
    } 
}