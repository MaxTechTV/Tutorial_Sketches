#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{

	lcd.begin();
  
	lcd.backlight();
	lcd.print("Hello, MaxTechTV");
  lcd.setCursor(0,1);
  lcd.print("Viewers!");
  delay(10000);
  lcd.noBacklight();
}

void loop()
{

}
