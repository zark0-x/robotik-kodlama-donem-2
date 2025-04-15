void setup() {
pinMode(2,OUTPUT);

}

void loop() {
  for(int i=0;i<=255;i=i+50){
       analogWrite(2,i);
       delay(200);
    
    }
   for(int i=255;i>=0;i=i-50){
       analogWrite(2,i);
       delay(200);
    
    }
}