#include <SparkFun_APDS9960.h>

//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x25, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd2(0x26, 20, 4);
LiquidCrystal_I2C lcd3(0x27, 20, 4);

void setup()
{
  lcd1.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd1.backlight();
  lcd1.setCursor(3, 0);
  lcd1.print("Hello, world!");
  lcd1.setCursor(2, 1);
  lcd1.print("Bla bla bla!");
  lcd1.setCursor(0, 2);
  lcd1.print("EmbeddedSystems");
  lcd1.setCursor(2, 3);
  lcd1.print("Power By Ec-yuan!");

  lcd2.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd2.backlight();
  lcd2.setCursor(3, 0);
  lcd2.print("Hello, world!");
  lcd2.setCursor(2, 1);
  lcd2.print("Nice weather!");
  lcd2.setCursor(0, 2);
  lcd2.print("Arduino Class");
  lcd2.setCursor(2, 3);
  lcd2.print("Lorem ipsum!");

  lcd3.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd3.backlight();
  lcd3.setCursor(3, 0);
  lcd3.print("Hello, world!");
  lcd3.setCursor(2, 1);
  lcd3.print("Nice weather!");
  lcd3.setCursor(0, 2);
  lcd3.print("Arduino Class");
  lcd3.setCursor(2, 3);
  lcd3.print("Lorem ipsum!");
}


void loop()
{
}
