// C++ code
// BOTÃO PARA DESLIGAR E LIGAR LED
int Botao = 0;
int Led = 13;

void setup()
{
pinMode(Botao, INPUT);
pinMode(Led, OUTPUT);
}


void loop()
{
  Botao = digitalRead(8);
  if (Botao == LOW){
    digitalWrite(Led, HIGH);
  }else{
    digitalWrite(Led, LOW);
  }
    delay(20); // delay do tempo que aperta o BOTÃO.
}
