#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <NewPing.h>

int trigPin = 10; 
int echoPin = 9;  
long zaman;
long mesafe;
LiquidCrystal_I2C lcd(0x27,16,2);
void setup(){
pinMode(trigPin, OUTPUT); 
pinMode(echoPin,INPUT); 
lcd.begin(); //lcd'yi başlatıyoruz
lcd.backlight(); //lcd arka ışığını açıyoruz.
 
}
void loop(){
digitalWrite(trigPin, LOW); 
delayMicroseconds(5);
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10);
digitalWrite(trigPin, LOW);  
zaman = pulseIn(echoPin, HIGH);
mesafe= (zaman /29.1)/2;    
if(mesafe<4)
{
  mesafe=4;
}
else if(mesafe>100)
{
  mesafe=100;
}
  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("MESAFE OLCER"); 
  lcd.setCursor(0,1); 
  lcd.print(mesafe);  
  lcd.setCursor(4,1); 
  lcd.print("cm");    
delay(500); 
}
