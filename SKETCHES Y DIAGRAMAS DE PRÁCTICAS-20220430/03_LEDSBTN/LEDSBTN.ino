//Tercer programa en NOdeMCU
//LEDs y botón pulsador

#define LED1 D0
#define LED2 D1
#define BTN  D8

void setup() {
  pinMode(LED1,OUTPUT);digitalWrite(LED1,LOW);
  pinMode(LED2,OUTPUT);digitalWrite(LED2,LOW);
  pinMode(BTN,INPUT);
}

bool value = false;

void loop() {
  value = digitalRead(BTN);delay(75);
  if(value == true)//Si presiono el botón...
    {digitalWrite(LED1,HIGH);digitalWrite(LED2,LOW);}
  else //En caso contrario...
    {digitalWrite(LED1,LOW);digitalWrite(LED2,HIGH);}
}
