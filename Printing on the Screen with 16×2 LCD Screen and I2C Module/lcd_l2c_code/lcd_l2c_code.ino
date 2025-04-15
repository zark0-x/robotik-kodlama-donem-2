#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2); // If no text appears on the screen while using this code, write 0x3f instead of 0x27!! // Bu kodu kullanırken ekranda yazı çıkmaz ise 0x27 yerine 0x3f yazınız !!
void setup() {
  lcd.begin();
}
void loop() {
 lcd.setCursor(0,0); 
 lcd.print("Asmin");
 lcd.setCursor(0,1); 
 lcd.print("Memur");
}