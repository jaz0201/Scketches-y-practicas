void led_red(){
  Serial.begin(9600);
  do
  {
    vr = analogRead(PT);delay(100);
    Serial.println("Inyección de rojo: " + String(vr));
    analogWrite(LR,vr);
    analogWrite(LG,1023);//1023: AC | 0: CC
    analogWrite(LB,1023);//1023: AC | 0: CC
    btn = digitalRead(BT);delay(50);
  }while(btn == false);//Mientras no se presione BT...
  Serial.end();delay(1000);  
}
