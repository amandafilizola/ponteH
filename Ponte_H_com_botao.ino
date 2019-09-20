int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int botao = 3;
bool modo =  true;
bool prev = false;
 
void setup()
{
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(botao,INPUT);
 Serial.begin(9600);
}
 
void loop()
{
  if (prev == false && digitalRead(botao)) {
    modo = !modo;
  }
  prev = digitalRead(botao);
  leds(modo);
  Serial.println(digitalRead(botao));
}
void leds(bool sentido) {
  if(sentido){
     //Gira o Motor A no sentido horario
   digitalWrite(IN1, HIGH);
   digitalWrite(IN2, LOW);
  //Gira o Motor A no sentido horario
   digitalWrite(IN3, HIGH);
   digitalWrite(IN4, LOW);
  } else {
   //Gira o Motor A no sentido anti-horario
   digitalWrite(IN1, LOW);
   digitalWrite(IN2, HIGH);
   //Gira o Motor A no sentido anti-horario
   digitalWrite(IN3, LOW);
   digitalWrite(IN4, HIGH);
  }
}
