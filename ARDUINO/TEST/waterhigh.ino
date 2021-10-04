int water_pin = A2;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;

void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop(){
  int val = analogRead(A2);
  Serial.print(val);
  Serial.print("\n");
  delay(100);

  if(val <= 400){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(100);
  }
  else if(400 < val && val <= 500){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(100);
  }
  else if(500 < val && val <= 600){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    delay(100);
  }
  else{
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(100);
  }
}
