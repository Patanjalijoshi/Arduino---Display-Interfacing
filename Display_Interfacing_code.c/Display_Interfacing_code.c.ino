// Display interfacing
<<<<<<< HEAD
=======


>>>>>>> 8c2b0218675cc43a7b8cc7df18f83a051d751dcc
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

LiquidCrystal_PCF8574 lcd(0x27);  



void setup() {
  
    lcd.begin(16, 2);  // initialize the lcd
    lcd.setBacklight(255);
    lcd.home();
    lcd.clear();
    lcd.print("HELLO WORLD !!");
   
}  


void loop() {

}  
