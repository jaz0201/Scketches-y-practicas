//Prueba 12 con NodeMCU
//Activación de relevador con potenciómetro e indicador con LEDs

#define CLOCK D0
#define LATCH D1
#define DATA D2
#define RLY D3
#define POT A0

int pos[8]={1,2,4,8,16,32,64,128};
int pot=0,adj=0;

void setup() 
{
  pinMode(POT,INPUT);
  pinMode(CLOCK,OUTPUT);digitalWrite(CLOCK,LOW);
  pinMode(LATCH,OUTPUT);digitalWrite(LATCH,HIGH);
  pinMode(DATA,OUTPUT);digitalWrite(DATA,LOW);
  pinMode(RLY,OUTPUT);digitalWrite(RLY,LOW);
  //Serial.begin(9600);
}

void loop(){
  pot=analogRead(POT);delay(50);adj=map(pot,0,1024,0,7);
  
  digitalWrite(LATCH,LOW);shiftOut(DATA,CLOCK,MSBFIRST,pos[adj]);
  digitalWrite(LATCH,HIGH);
  if(adj>=4){
      Serial.begin(9600);Serial.println("RELEVADOR ACTIVADO");delay(50);
      digitalWrite(RLY,HIGH);Serial.end();
  }
  else
    digitalWrite(RLY,LOW);
}
