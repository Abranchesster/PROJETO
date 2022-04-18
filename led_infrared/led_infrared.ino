/* prof. Augusto

controle remoto led infrared entrada analogica
*/

const int entradanalog = A0;
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
int sensor = 0;
int conta = 0;

void setup()
{
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop()
{
sensor = analogRead(entradanalog);

Serial.print("sensor = ");
Serial.print(sensor);
Serial.print("     conta = ");
Serial.print(conta);


if ( sensor < 400 )
{
  conta = conta+1;
}
if ( sensor == 0 )
{
  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
  
} else if ( conta == 1){

  digitalWrite (led1, HIGH);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);

} else if (conta == 2){

  digitalWrite (led1, LOW);
  digitalWrite (led2, HIGH);
  digitalWrite (led3, LOW);

} else if (conta == 3){

  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, HIGH);

} else { 

  digitalWrite (led1, LOW);
  digitalWrite (led2, LOW);
  digitalWrite (led3, LOW);
 conta = 0 ;
 }
 delay(200);
 }
