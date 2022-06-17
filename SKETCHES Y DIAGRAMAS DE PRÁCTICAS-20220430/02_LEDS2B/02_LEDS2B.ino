//Segundo programa en NodeMCU
//Encendido/Apagado de dos LED

#define LED1 D0
#define LED2 D1

void setup(){
  pinMode(LED1,OUTPUT);digitalWrite(LED1,LOW);
  pinMode(LED2,OUTPUT);digitalWrite(LED2,LOW);
}

void loop(){
  digitalWrite(LED1,HIGH);digitalWrite(LED2,HIGH);delay(1000);
  digitalWrite(LED1,LOW);digitalWrite(LED2,LOW);delay(1000);
  digitalWrite(LED1,HIGH);digitalWrite(LED2,LOW);delay(1000);
  digitalWrite(LED1,LOW);digitalWrite(LED2,HIGH);delay(1000);
  digitalWrite(LED1,LOW);digitalWrite(LED2,LOW);delay(1000);
}
