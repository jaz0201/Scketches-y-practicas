void triangle()
{
  int x=0;
  //Señal ascendente
  for(x=0;x<=1023;x++){
    Serial.println("Valor de x: " + String(x));
    analogWrite(LEDTR,x);delay(100);
  }delay(1000);

  //Señal descendente
  for(x=1023;x>=0;x--){
    Serial.println("Valor de x: " + String(x));
    analogWrite(LEDTR,x);delay(100);
  }delay(1000);
}
