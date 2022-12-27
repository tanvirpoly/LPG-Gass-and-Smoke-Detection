#include <LiquidCrystal.h>
LiquidCrystal lcd (1, 0, 13, 12, 11, 10);

void setup()
{
  lcd.begin(16,2);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop()
{     
  int sensor=digitalRead(8);
  lcd.setCursor(0,0); 
  lcd.print("GAS Detector(GU)");

  if(sensor==LOW)
  {
    lcd.setCursor(0,1); 
    lcd.print("GAS Detected");
    digitalWrite(5, HIGH);
    delay(1500);
    
    lcd.clear();
  }
  else if (sensor == HIGH )
  {
     lcd.setCursor(0,1); 
     lcd.print("No GAS Detect ");
     digitalWrite(5, LOW);
     delay(1000);
     lcd.clear();

}

 int sensor2=digitalRead(9);
  lcd.setCursor(0,0); 
  lcd.print("GAS Detector(GU)");

  if(sensor2==LOW)
  {
    lcd.setCursor(0,1); 
    lcd.print("Smock Detected");
    digitalWrite(4, HIGH);
    delay(1500);
    
    lcd.clear();
  }
  else if (sensor2 == HIGH )
  {
     lcd.setCursor(0,1); 
     lcd.print("No Smock Detect ");
     digitalWrite(4, LOW);
     delay(1000);
     lcd.clear();

}
}
  
