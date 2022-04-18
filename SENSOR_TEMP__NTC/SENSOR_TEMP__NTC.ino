#include <Thermistor.h> //INCLUSÃO DA BIBLIOTECA
 
Thermistor temp(2); //VARIÁVEL DO TIPO THERMISTOR, INDICANDO O PINO ANALÓGICO (A2) EM QUE O SENSOR ESTÁ CONECTADO
const int Buzzer = 13; // entrada buzzer: 13 
const int LedRED = 12; // SAIDA LED: 12 

void setup() {
  Serial.begin(9600); //INICIALIZA A SERIAL
  pinMode(Buzzer, OUTPUT); // SAIDA SOM
  pinMode(LedRED, OUTPUT); //SAIDA LED
  
}
void loop() {
  int temperatura = temp.getTemp(); //VARIÁVEL DO TIPO INTEIRO QUE RECEBE O VALOR DE TEMPERATURA CALCULADO PELA BIBLIOTECA
  Serial.print("Temperatura: "); //IMPRIME O TEXTO NO MONITOR SERIAL
  Serial.print(temperatura); //IMPRIME NO MONITOR SERIAL A TEMPERATURA MEDIDA
  Serial.println("*C"); //IMPRIME O TEXTO NO MONITOR SERIAL

  if(temperatura > 30){ // 30ºC
    digitalWrite(Buzzer, HIGH); //ACIONA O SOM
    digitalWrite(LedRED, HIGH);  //ACIONA O LED
  }
  else{
    digitalWrite(Buzzer, LOW);
    digitalWrite(LedRED, LOW);
  }
    delay(2000);
  }
}
