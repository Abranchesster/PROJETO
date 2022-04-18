#include <dht.h> //Biblioteca do sensor DHT11 de pressao e temperatura

#define DHT_PIN 6


dht   my_dht;   //Declaração do objeto para o sensor

// VARIAVEIS GLOBAIS 

int temp = 0x00, // armazena temperatura em inteiros
umid = 0x00; // armazena umidade em inteiro

void setup(){

  Serial.begin(9600);
}


void loop(){

  my_dht.read11(DHT_PIN);

  temp = my_dht.temperature;
  umid = my_dht.humidity;

  Serial.print(temp);
  Serial.print(" Celsius");
  Serial.print(" \t");
  Serial.print("Umidade do ar: ");
  Serial.print(umid);
  Serial.println(" %");
  delay(2000);

}


