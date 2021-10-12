/* I2C LCD with Arduino example code. More info: https://www.makerguides.com */

// Include the libraries:
// LiquidCrystal_I2C.h: https://github.com/johnrickman/LiquidCrystal_I2C
#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD
LiquidCrystal_I2C lcd1(0x25, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd2(0x26, 20, 4);
LiquidCrystal_I2C lcd3(0x27, 20, 4);

// Wiring: SDA pin is connected to A4 and SCL pin to A5.
// Connect to LCD via I2C, default address 0x27 (A0-A2 not jumpered)
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // Change to (0x27,20,4) for 20x4 LCD.

void setup() {
  // Initiate the LCD:
  lcd1.init();
  lcd1.backlight();
}

void loop() {
  // Print 'Hello World!' on the first line of the LCD:
  lcd1.setCursor(2, 0); // Set the cursor on the third column and first row.
  lcd1.print("I am the Master!"); // Print the string "Hello World!"
  lcd1.setCursor(2, 1); //Set the cursor on the third column and the second row (counting starts at 0!).
  lcd1.print("Master's rules!");
}