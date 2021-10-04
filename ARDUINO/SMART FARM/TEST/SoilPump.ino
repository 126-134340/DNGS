int AA = 10;
int AB = 6;

void setup(){
  Serial.begin(9600);

  pinMode(AA, OUTPUT);
  pinMode(AB, OUTPUT);
}

void loop(){
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
