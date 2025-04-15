int kled = 2;
int yled = 3;
int mled = 4;
void setup() {
pinMode(kled, OUTPUT);
pinMode(yled, OUTPUT);
pinMode(mled, OUTPUT);
}

void loop() 
{
   for(int i=0;i<=255;i++)
  {
    analogWrite(kled, i);
    analogWrite(yled, 255);
    analogWrite(mled, 255);

     delay(100);
  
  }
    for(int i=0;i<=255;i++)
  {
    analogWrite(kled, 255);
    analogWrite(yled, i);
    analogWrite(mled, 255);

     delay(100);
  
  }
    for(int i=0;i<=255;i++)
  {
    analogWrite(kled, 255);
    analogWrite(yled, 255);
    analogWrite(mled, i);

     delay(100);
  
  }
 

}