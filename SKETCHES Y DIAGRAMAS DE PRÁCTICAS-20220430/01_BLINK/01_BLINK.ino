//Primer programa de NodeMCU ESP 12-E
//LED en D4

void setup() 
{
  pinMode(D4,OUTPUT); //Pin D4 como salida digital
  digitalWrite(D4,HIGH);//Apagar D4 (lógica inversa)
}

void loop() 
{
  digitalWrite(D4,LOW);delay(250);
  digitalWrite(D4,HIGH);delay(250);
}
