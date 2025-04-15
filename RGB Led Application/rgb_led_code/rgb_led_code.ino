
int kled = 5;
int yled = 6;
int mled = 7;

void setup() {

pinMode(kled, OUTPUT);
pinMode(yled, OUTPUT);
pinMode(mled, OUTPUT);
}
void loop() 
{
 int kdeger = random(0,255);
int ydeger = random(0,255);
int mdeger = random(0,255);


analogWrite(kled, kdeger);
analogWrite(yled, ydeger);
analogWrite(mled, mdeger);
delay(500);
}