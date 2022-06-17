//Prueba 6 con NodeMCU
//Entradas y salidas analógicas

#define PT A0 //Pin del Potenciómetro
#define BT D8 //Pin del botón
#define LR D1 //Terminal RGB Rojo
#define LG D2 //Terminal RGB Verde
#define LB D3 //Terminal RGB Azul

void setup() {
  pinMode(PT,INPUT);pinMode(BT,INPUT);
  pinMode(LR,OUTPUT);digitalWrite(LR,LOW);
  pinMode(LG,OUTPUT);digitalWrite(LG,LOW);
  pinMode(LB,OUTPUT);digitalWrite(LB,LOW);
}

bool btn=false;
int pot=0,vr=0,vg=0,vb=0;

void loop() {
  led_red();delay(1000);
  led_green();delay(1000);
  led_blue();delay(1000);
}
