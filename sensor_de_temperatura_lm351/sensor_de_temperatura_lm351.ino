//Sensor de temperatura usando COM LED E TRANSISTOR LM35
// NOME: Augusto Fabiano Abranches 


int LM35 = A1; // saida do LM35.
//const int Buzzer = 13; // entrada buzzer: 13 
int LedRED = 12; // SAIDA LED: 12 
float temperatura; // variavel temperatura medida.

void setup()
{
  Serial.begin(9600);
  //pinMode(Buzzer, OUTPUT);
  pinMode(LedRED, OUTPUT);
}

void loop()
{
  temperatura = (float(analogRead(LM35))*5/(1023))/0.01;
  Serial.print("Temperatura = "); //mostra valor na tela
  Serial.print(temperatura);
  Serial.println(" C");

  if(temperatura > 26){ // 30ºC
    //digitalWrite(Buzzer, HIGH); //aciona o buzzer
    digitalWrite(LedRED, HIGH);  //aciona o led
  }
  else{
    //digitalWrite(Buzzer, LOW);
    digitalWrite(LedRED, LOW);
  }
  delay(2000);
}

