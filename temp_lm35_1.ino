/*Sensor de temperatura usando COM LED E TRANSISTOR LM35
 NOME: Augusto Fabiano Abranches 
Fórmula:
0V = 0
5V = 1023
Cada grau centigrado:10mv/°C
Tensão em A0 = (valor lido em A0)*(5.0/1023)
Temp = tensão em A0 / 10mv
logo
temp=(valorlido*(5.0/1023))/0.01;
*/

int LM35 = A0; // saida do LM35.
int LedWhite = 11; // SAIDA LED: 11 
int LedRED = 10; // SAIDA LED: 10 
float temp; // variavel temperatura medida.
//float valorlido;

void setup()
{
 Serial.begin(9600);
	pinMode(LedWhite, OUTPUT);
	pinMode(LedRED, OUTPUT);
}

void loop()
{
 
    temp = (analogRead(LM35)*(5.0/1023))/0.01; //forma menos precisa.
	Serial.print("Temperatura = "); //mostra valor na tela
	Serial.print(temp); 
	Serial.println(" C");
           
 if(temp > 20 && temp < 50){ // ºC
	digitalWrite(LedWhite, LOW); //aciona o LED
	digitalWrite(LedRED, HIGH);  //DESLIGA o led
}
else {
	digitalWrite(LedWhite, HIGH);
	digitalWrite(LedRED, LOW);
}
	delay(2000);
}