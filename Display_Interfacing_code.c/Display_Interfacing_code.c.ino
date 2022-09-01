// Display interfacing

#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

LiquidCrystal_PCF8574 lcd(0x27);  



void setup() {
  
    lcd.begin(16, 2);  // initialize the lcd
    lcd.setBacklight(225);
    lcd.home();
    lcd.clear();
    lcd.print("HELLO WORLD !!");
   
}  


void loop() {

}  
