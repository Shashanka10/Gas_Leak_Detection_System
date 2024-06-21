// include the library code: 
#include <LiquidCrystal.h> //library for LCD 

// initialize the library with the numbers of the interface pins 
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); 

// defines pins numbers
const int SensorPin = 2;
const int LEDPin = 6;
const int BuzzerPin = 7;

void setup() 
{
  pinMode(SensorPin, INPUT); // Sets the Pin as an Input
  pinMode(LEDPin, OUTPUT); // Sets the Pin as an OUTPUT
  pinMode(BuzzerPin, OUTPUT); // Sets the Pin as an OUTPUT
  
  lcd.begin(20, 4); // set up the LCD's number of columns and rows:
  lcd.setCursor(0,0); // set the cursor position:
  lcd.print("  FUSS FUSS DETECT    ");
  lcd.setCursor(0,1);
  lcd.print("  GAS LEAK DETECTOR   ");
}
void loop() 
{
  if(digitalRead(SensorPin) == HIGH)
  {
    digitalWrite(LEDPin,HIGH);
    digitalWrite(BuzzerPin,HIGH);
    // Prints Message on the LCD
    lcd.setCursor(0,3); 
    lcd.print("   Gas Leak Detected    "); 
    delay(70);
    lcd.setCursor(0,3); 
    lcd.print("   Gas Leak Detected.    "); 
    delay(70);
    lcd.setCursor(0,3); 
    lcd.print("   Gas Leak Detected..   "); 
    delay(70);
    lcd.setCursor(0,3); 
    lcd.print("   Gas Leak Detected...   "); 
    delay(70);
  }
  else
  {
    digitalWrite(LEDPin,LOW);
    digitalWrite(BuzzerPin,LOW);
    
    // Prints Message on the LCD
    lcd.setCursor(0,3); 
    lcd.print("  No Gas Leak   "); 
  }
}

