
int ledPinos[] = {8,9,10,11}; // VETOR COM 4 ESPAÇOS DE ARMAZENAMENTO!!
int pino;

void setup(){
  for (pino=0; pino <=3; pino++) 
  { 
    pinMode(ledPinos[pino], OUTPUT);
  }
}
void loop(){
  for (pino=0; pino <=3; pino++) 
  {
    digitalWrite(ledPinos[pino], HIGH);
    delay(150);
    digitalWrite(ledPinos[pino], LOW);
    delay(150);
  }
}
