void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(11, LOW);
  delay(150);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  delay(150);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  delay(150);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(150);
}

