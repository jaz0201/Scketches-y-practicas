//Prueba 13 en NodeMCU
//LCD, LEDs y botón

#include<LiquidCrystal.h> //Header o librería para funciones lcd

#define RS D0 //Pin para selector de registro LCD (Pin 4)
#define EN D1 //Pin para habilitación LCD (Pin 6)
#define Q4 D2 //Pin para bit Q4 de la LCD (Pin 11)
#define Q5 D3 //Pin para bit Q5 de la LCD (Pin 12)
#define Q6 D4 //Pin para bit Q6 de la LCD (Pin 13)
#define Q7 D5 //Pin para bit Q7 de la LCD (Pin 14)
#define L1 D6 //Pin LED 1
#define L2 D7 //Pin LED 2
#define BT D8 //Pin para botón

LiquidCrystal lcd(RS,EN,Q4,Q5,Q6,Q7); //Creación de objeto lcd

void setup() 
{
  lcd.begin(16,2); // Inicializamos LCD (C,F)
  pinMode(L1,OUTPUT);digitalWrite(L1,LOW);
  pinMode(L2,OUTPUT);digitalWrite(L2,LOW);
  pinMode(BT,INPUT);
  lcd.clear();//Limpiar pantalla del lcd
  lcd.home();//Colocar cursor de la lcd en posición inicial (C=0,F=0)
}

bool value=false;
int x=1,y=2;

void loop() 
{
  do
  {
    lcd.clear();
    lcd.setCursor(0,0);//Colocar el cursor en Columna 0, Fila 0
    lcd.print("LED ACTIVO: " + String(x));//Imprimir mensaje en la lcd
    digitalWrite(L1,HIGH);digitalWrite(L2,LOW);
    value = digitalRead(BT);delay(50);
    if(value == true)
    {
      lcd.clear();lcd.print("CAMBIANDO...");delay(1000);
    }
  }while(value == false);

  do
  {
    lcd.clear();
    lcd.setCursor(0,0);//Colocar el cursor en Columna 0, Fila 0
    lcd.print("LED ACTIVO: " + String(y));//Imprimir mensaje en la lcd
    digitalWrite(L1,LOW);digitalWrite(L2,HIGH);
    value = digitalRead(BT);delay(50);
    if(value == true)
    {
      lcd.clear();lcd.print("CAMBIANDO...");delay(1000);
    }
  }while(value == false);
}//Llave de void loop()
