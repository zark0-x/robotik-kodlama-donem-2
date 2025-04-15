#include "TM1637.h"

const int CLK = 6;
const int DIO = 7;
TM1637 tm1637(CLK, DIO);

void setup() {
    tm1637.init();
}
void loop() {
   
    char* dt = "18-01-2010";
    tm1637.displayStr(dt);  
    delay(2000);
}