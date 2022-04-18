/* Define um sensor de luminosidade com o LDR
 Nome: Augusto Fabiano Abranches
 PODE SER UTILIZADO COM #define var sem precisar utilizar uma variavel de memoria..
 #define LDR A0
 #define led13 13
 #define led12 12
 #define led11 11
 #define led10 10
 */
int LDR = A0;
int led11 = 11;
int led10 = 10;
int led9 = 9;
int led8 = 8;
int vldr=0;

void setup() {

  pinMode(LDR, INPUT);
  pinMode(led11, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  vldr = analogRead (A0);
  Serial.println(vldr);
  delay(500);
  if (vldr < 380){
    digitalWrite(led11,LOW);
    digitalWrite(led10,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led8,LOW);
  } 
  else{ 
    if (vldr < 500){
      digitalWrite(led11,HIGH);
      digitalWrite(led10,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led8,LOW);
    } 
    else{ 
      if (vldr < 600){
        digitalWrite(led11,HIGH);
        digitalWrite(led10,HIGH);
        digitalWrite(led9,LOW);
        digitalWrite(led8,LOW);
      } 
      else{ 
        if (vldr < 750){
          digitalWrite(led11,HIGH);
          digitalWrite(led10,HIGH);
          digitalWrite(led9,HIGH);
          digitalWrite(led8,LOW);
        } 

        else 
          digitalWrite(led11,HIGH);
        digitalWrite(led10,HIGH);
        digitalWrite(led9,HIGH);
        digitalWrite(led8,HIGH);
      }
    }
  }
}










