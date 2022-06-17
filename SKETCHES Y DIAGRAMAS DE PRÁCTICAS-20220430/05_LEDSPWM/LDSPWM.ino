//Prueba 5 con NodeMCU
//Salidas analógicas (PWM)
/*
 * Notas:
 * Para señales PWM, emplear sólo los pines:
 * D1,D2,D3,D4,D5,D6,D7 y D8
 * 
 * Los valores del PWM van del 0 al 1023
 */

#define LEDDC D1
#define LEDTR D2

void setup() {
  pinMode(LEDDC,OUTPUT);digitalWrite(LEDDC,LOW);
  pinMode(LEDTR,OUTPUT);digitalWrite(LEDTR,LOW);
  Serial.begin(9600);
}

void loop(){
  duty_cycle(); //Función ciclo de trabajo
  delay(1500);
  triangle(); //Función triangular
  delay(1500);
}
