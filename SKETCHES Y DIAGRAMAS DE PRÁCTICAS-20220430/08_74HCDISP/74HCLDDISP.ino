//Prueba 8 en NodeMCU
//Registros SIPO 74HC595 en cadena
//LEDs, Display 7 segmentos y botón

#define CLOCK D0
#define LATCH D1
#define DATA D2
#define BTN D8

bool valor=false;
int x=0;
int leds[9]={0,1,2,4,8,16,32,64,128};//array para LEDs
int dispcc[9]={238,130,220,214,178,118,126,194,254};//Valores para display Cátodo Común
int dispac[9]={17,125,35,41,77,137,129,61,1};//Valores para display Ánodo Común

void setup() {
  pinMode(BTN,INPUT);
  pinMode(CLOCK,OUTPUT);digitalWrite(CLOCK,LOW);
  pinMode(LATCH,OUTPUT);digitalWrite(LATCH,HIGH);
  pinMode(DATA,OUTPUT);digitalWrite(DATA,LOW);
}

void loop() {
  do
  {
    digitalWrite(LATCH,LOW);
    shiftOut(DATA,CLOCK,MSBFIRST,dispcc[x]);//último disp.
    shiftOut(DATA,CLOCK,MSBFIRST,leds[x]);//Primer disp.
    digitalWrite(LATCH,HIGH);
    valor = digitalRead(BTN);delay(150);//Leer botón...
    if(valor == true)//Si el botón se presiona...
      x++;
  }while(x<=8);x=0;
}
