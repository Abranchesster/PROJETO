void setup()
{
/*  pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
*/
DDRB = B00001111;
}

void loop()
{

  /*
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  */
 PORTB = B00001111;
  delay(150);
  //digitalWrite(13,LOW);
  //digitalWrite(12,LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  delay(150);
}
