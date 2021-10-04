int Relaypin = 3;
int Switch = 9;

void setup()
{
  pinMode(Relaypin, OUTPUT);
  pinMode(Switch, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(Switch)==LOW)
  {
    digitalWrite(Relaypin, HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(Relaypin, LOW);
    delay(100);
  }
}
