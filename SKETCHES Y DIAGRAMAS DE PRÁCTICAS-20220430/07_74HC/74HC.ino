//PRUEBA 7 NodeMCU
//Configuración C.I. 74HC595 (SIPO 8 bits)

#define CLOCK D0
#define LATCH D1
#define DATA D2

void setup(){
  pinMode(CLOCK,OUTPUT);digitalWrite(CLOCK,LOW);
  pinMode(LATCH,OUTPUT);digitalWrite(LATCH,HIGH);
  pinMode(DATA,OUTPUT);digitalWrite(DATA,LOW);
}

int x=0;

void loop(){
  for(x=0;x<=255;x++){
    digitalWrite(LATCH,LOW);
    shiftOut(DATA,CLOCK,LSBFIRST,x);
    digitalWrite(LATCH,HIGH);delay(250);
  }
}
