int LED1 = 2; 
int LED2 = 3;
int LED3 = 4;

void setup()
{
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(100); // millisecond(s)
  digitalWrite(LED1, LOW);
  delay(100); // millisecond(s)
  digitalWrite(LED2 ,HIGH);
  delay(100); // millisecond(s)
  digitalWrite(LED2, LOW);
  delay(100); // millisecond(s)
  digitalWrite(LED3, HIGH);
  delay(100); // millisecond(s)
  digitalWrite(LED3, LOW);
  delay(100); // millisecond(s)
}
