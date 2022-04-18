/* 
 LUMINOSIDADE COM LED USANDO ALARME LDR
 prof. Augusto F. Abranches
 */

#include <PushButton.h>

#define led 12
#define buzzer 7
#define pinLDR A0
#define nivelLuz 150

// VALOR INICIAL DO LDR PARA O LOOP

void setup (){

  pinMode (led, OUTPUT);
  pinMode (buzzer, OUTPUT);  
  Serial.begin(9600);

}

void loop(){
  int valorLDR = analogRead(pinLDR);

  Serial.println(valorLDR);

  if ( valorLDR < nivelLuz) {

    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay (2000);
  }
  else{ 

    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);

  }

}



