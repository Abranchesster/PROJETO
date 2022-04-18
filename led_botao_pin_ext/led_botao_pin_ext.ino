// C++ code
// BOTÃO PARA DESLIGAR E LIGAR LED
int Botao = 0;

void setup()
{
pinMode(12, INPUT);
pinMode(13, OUTPUT); 
}

void loop()
{
  Botao = digitalRead(12);
  if (Botao == 0){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
    delay(10); // Delay a little bit to improve simulation performance
}
