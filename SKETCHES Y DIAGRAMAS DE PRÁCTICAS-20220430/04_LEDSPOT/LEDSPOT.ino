//Prueba 4 de NodeMCU:
//Lectura de señal analógica (potenciómetro)

#define L1 D0
#define L2 D1
#define L3 D2
#define L4 D3

void setup() 
{
  pinMode(L1,OUTPUT);digitalWrite(L1,LOW);
  pinMode(L2,OUTPUT);digitalWrite(L2,LOW);
  pinMode(L3,OUTPUT);digitalWrite(L3,LOW);
  pinMode(L4,OUTPUT);digitalWrite(L4,LOW);
  //Declarar pin analógico como entrada
  pinMode(A0,INPUT);//Sólo en NodeMCU
  Serial.begin(9600);
}

int valor=0;

void loop() 
{
  valor = analogRead(A0);delay(100);
  Serial.println("Valor del pot: " + String(valor));

  if(valor>=0 && valor<=255)
  {
    digitalWrite(L1,HIGH);digitalWrite(L2,LOW);  
    digitalWrite(L3,LOW);digitalWrite(L4,LOW);
  }

  else if (valor>=256 && valor<=511)
  {
    digitalWrite(L1,HIGH);digitalWrite(L2,HIGH);  
    digitalWrite(L3,LOW);digitalWrite(L4,LOW);
  }

  else if (valor>=512 && valor<=767)
  {
    digitalWrite(L1,HIGH);digitalWrite(L2,HIGH);  
    digitalWrite(L3,HIGH);digitalWrite(L4,LOW);  
  }

  else if(valor>=768)
  {
    digitalWrite(L1,HIGH);digitalWrite(L2,HIGH);  
    digitalWrite(L3,HIGH);digitalWrite(L4,HIGH);  
  }
}
