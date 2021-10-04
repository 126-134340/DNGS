#include "DHT.h"  //온습도 센서 헤더파일

#include <Wire.h>
#include <LiquidCrystal_I2C.h>  //LCD 헤더파일

#define DHTPIN 2  //온습도 2번 핀
#define DHTTYPE DHT11
#define FAN 3  //환기팬 3번 핀

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27,16,2);

int water_pin = A2;  //수위 감지 A2핀

int AA = 10;
int AB = 6;

void setup() {
  Serial.begin(9600);

  pinMode(FAN, OUTPUT);  //환기팬 3번 핀 출력모드

  pinMode(AA, OUTPUT);
  pinMode(AB, OUTPUT);
}

void loop() {
  WaterhighLCD();
  SoilPump();
  TemperatureFan();
}


void TemperatureFan(){
  digitalWrite(FAN, LOW);

  delay(1000);
  
  int h = dht.readHumidity();

  int t = dht.readTemperature();
  
  Serial.print("Humidity: ");  // 문자열 Humidity: 를 출력한다.

  Serial.print(h);  // 변수 h(습도)를 출력한다.

  Serial.print("%\t");  // %를 출력한다

  Serial.print("Temperature: ");  // 이하생략

  Serial.print(t);

  Serial.println(" C");

  if(t > 28){
    digitalWrite(3, HIGH);
    delay(30000);
    digitalWrite(FAN, LOW);
  }

  else if(h >= 80){
    digitalWrite(FAN, HIGH);
    delay(30000);
    digitalWrite(FAN, LOW);
  }
}

void WaterhighLCD(){
  int val = analogRead(A2);
  Serial.print(val);
  Serial.print("\n");
  delay(100);
  
  if(val < 450){
    lcd.init();
    lcd.backlight();
    lcd.setCursor(2,0);
    lcd.print("Fill the cup");
    lcd.setCursor(3,1);
    lcd.print("with water");
  }
  else{
    lcd.init();
    lcd.backlight();
    lcd.setCursor(6,0);
    lcd.print("Have");
    lcd.setCursor(2,1);
    lcd.print("enough water");
  }
}

void SoilPump(){
  int Soil_moisture = analogRead(A1);
  Serial.println(Soil_moisture);

  if(Soil_moisture > 850){
    digitalWrite(AA, HIGH);
    digitalWrite(AB, LOW);
    delay(5000);
    digitalWrite(AA, LOW);
    digitalWrite(AB, LOW);
    delay(5000);
  }

  else{
    digitalWrite(AA, LOW);
    digitalWrite(AB, LOW);
  }
}
