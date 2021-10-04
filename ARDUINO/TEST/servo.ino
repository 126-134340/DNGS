#include<Servo.h>
Servo servo;
int value = 0;

void setup() {
  servo.attach(7);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    char in_data;
    in_data = Serial.read();
    if (in_data == '1') {
      value = value + 20;
      Serial.print(value);
      if (value >= 170){
        value = 0;
        Serial.print(value);
      }
    }
//    else{
//      value = 0;
//    }

    servo.write(value);
    delay(1);
  }
}
