//PRUEBA 11 CON NODEMCU
//Activación y desactivación de relevador
#define RELAY D0
#define BTN D8

void setup(){
  pinMode(RELAY,OUTPUT);digitalWrite(RELAY,LOW);
  pinMode(BTN,INPUT);
}

bool value=false;

void loop() {
  value = digitalRead(BTN);delay(50);
  if(value == true)
    digitalWrite(RELAY,HIGH);
  else
    digitalWrite(RELAY,LOW);
}
