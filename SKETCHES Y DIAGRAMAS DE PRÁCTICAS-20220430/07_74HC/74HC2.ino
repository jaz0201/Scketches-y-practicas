//PRUEBA 7a NodeMCU
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
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,1);
  digitalWrite(LATCH,HIGH);delay(1000);

  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,2);
  digitalWrite(LATCH,HIGH);delay(1000);
  
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,4);
  digitalWrite(LATCH,HIGH);delay(1000);

  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,8);
  digitalWrite(LATCH,HIGH);delay(1000);

  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,16);
  digitalWrite(LATCH,HIGH);delay(1000);

  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,32);
  digitalWrite(LATCH,HIGH);delay(1000);

  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,64);
  digitalWrite(LATCH,HIGH);delay(1000);

  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,128);
  digitalWrite(LATCH,HIGH);delay(1000);
}
