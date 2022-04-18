/* C++ code
  LUMINOSIDADE COM LED USANDO LDR
  prof. Augusto F. Abranches
*/

// #include <PushButton.h>

#define led 13
//#define buzzer 07
#define pinLDR A0
#define nivelLuz 50

// VALOR INICIAL DO LDR PARA O LOOP

void setup () {

  pinMode (led, OUTPUT);
  //pinMode (buzzer, OUTPUT);
  Serial.begin(9600);
  delay(500);

}

void loop() {
  int valorLDR = analogRead(pinLDR);

  Serial.println(valorLDR);

  if ( valorLDR > nivelLuz) {

    digitalWrite(led, HIGH);
    //digitalWrite(buzzer, HIGH);
    //tone (buzzer, 1500);
    //delay(500);
    //noTone(buzzer);
  }
  else {

    digitalWrite(led, LOW);
    //digitalWrite(buzzer, LOW);
  }

}
