void duty_cycle()
{
  //Ciclo de trabajo: 0%
  Serial.println("Ciclo de trabajo: 0%");
  analogWrite(LEDDC,0);delay(1000);

  //Ciclo de trabajo: 25%
  Serial.println("Ciclo de trabajo: 25%");
  analogWrite(LEDDC,255);delay(1000);

  //Ciclo de trabajo: 50%
  Serial.println("Ciclo de trabajo: 50%");
  analogWrite(LEDDC,517);delay(1000);

  //Ciclo de trabajo: 75%
  Serial.println("Ciclo de trabajo: 75%");
  analogWrite(LEDDC,767);delay(1000);

  //Ciclo de trabajo: 100%
  Serial.println("Ciclo de trabajo: 100%");
  analogWrite(LEDDC,1023);delay(1000);
}
