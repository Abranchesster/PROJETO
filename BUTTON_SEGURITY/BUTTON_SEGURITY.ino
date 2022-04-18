/* BOTÃO DE SEGURANÇA SÓ É ACIONADO O LED QUANDO 
 CLICAR NOD 2 BOTÕES AO MESMO TEMPO
 PROF AUGUSTO
 */
const int pinoBot1 = 2; //PINO DIGITAL UTILIZADO PELO PUSH BUTTON
const int pinoBot2 = 3; //PINO DIGITAL UTILIZADO PELO PUSH BUTTON
const int pinoLed = 13; //PINO DIGITAL UTILIZADO PELO LED

void setup() {
  pinMode(pinoBot1, INPUT); //DEFINE O PINO COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
  pinMode(pinoBot2, INPUT); //DO ARDUINO PARA GARANTIR QUE NÃO EXISTA FLUTUAÇÃO ENTRE 0 (LOW) E 1 (HIGH)
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO
}

void loop(){
  if(digitalRead(pinoBot1) == HIGH && digitalRead(pinoBot2) == HIGH){ //VERIFICA SE O BOTAO ESTA PRESSIONADO, SE POSITIVO FAZ
    digitalWrite(pinoLed, HIGH); //ACENDE O LED
  }
  else{ //SENÃO, FAZ
    digitalWrite(pinoLed, LOW); //APAGA O LED
  }
}

