#include "DHT.h"

#define DHTPIN 2

#define DHTTYPE DHT11

#define FAN 3

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  pinMode(FAN, OUTPUT);
}

void loop() {
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
