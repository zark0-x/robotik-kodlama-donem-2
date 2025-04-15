#define Ldr A0
void setup()
{
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
} 
void loop()
{
int Ldr_deger = analogRead(Ldr);
Serial.print("Analog Deger = "); 
Serial.println(Ldr_deger);
delay(250); 
if( Ldr_deger<=60&& Ldr_deger>=0){
    digitalWrite(5, 1);
   digitalWrite(6, 1);
   digitalWrite(7, 1);
  
  }

 else if( Ldr_deger<=100&& Ldr_deger>50){
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
  }
  
 else if(Ldr_deger>100){
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 1);
  }
  
}