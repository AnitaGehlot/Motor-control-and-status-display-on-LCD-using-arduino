// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13, 12, 7, 6, 5, 4);
int X=2;
int Y=3;
void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  pinMode(X, OUTPUT);
  pinMode(Y, OUTPUT);
  lcd.setCursor(0, 0);
  lcd.print("hello, world!");
  delay(2000);
  lcd.clear();
}

void loop() 
{
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  digitalWrite(X, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Y, LOW);    // turn the LED off by making the voltage LOW
  lcd.setCursor(1, 1);
  lcd.print("Clockwise");
  delay(2000); 
  digitalWrite(X, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(Y, HIGH);    // turn the LED off by making the voltage LOW
  lcd.setCursor(1, 1);
  lcd.print("AntiClockwise");
  delay(2000); 
}

