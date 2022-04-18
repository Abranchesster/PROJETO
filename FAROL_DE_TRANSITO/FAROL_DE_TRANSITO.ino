/* Projeto farol de transito
Nome: Augusto Fabiano Abranches
poderemos utilizar define para economizar espaço na memoria do arduino
#define verde 10
#define verde 11
#define verde 12
*/

int verde = 10;
int vermelho = 11;
int amarelo = 12;
int cont = 1;

void setup()
{ 
  pinMode (verde, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (vermelho, OUTPUT);
}

void loop()
{
  farol();
}

void farol()
{
  digitalWrite(verde, HIGH);
  delay (4000);
  digitalWrite (verde, LOW);
  delay (100);
  for (cont=1; cont<= 7; cont++)
  {
    digitalWrite(amarelo, HIGH);
    delay (1500);
    digitalWrite (amarelo, LOW);
    delay(200);
  }
  
  digitalWrite(vermelho, HIGH);
  delay (5000);
  digitalWrite (vermelho, LOW);
  delay(100);
  cont=1;
}
