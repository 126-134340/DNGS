#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int water_pin = A2;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int val1 = analogRead(A2);
  Serial.print(val1);
  Serial.print("\n");
  delay(10000);
  
  if(val1 < 550){
    lcd.init();
    lcd.backlight();
    lcd.setCursor(2,0);
    lcd.print("Fill the cup");
    lcd.setCursor(3,1);
    lcd.print("with water");
  }

  else{
    lcd.noBacklight();
  }

}
