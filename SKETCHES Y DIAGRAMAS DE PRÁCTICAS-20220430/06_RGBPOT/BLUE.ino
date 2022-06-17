void led_blue(){
  Serial.begin(9600);
  do
  {
    vb = analogRead(PT);delay(100);
    Serial.println("Inyección de azul: " + String(vb));
    analogWrite(LR,1023);//1023: AC | 0: CC
    analogWrite(LG,1023);//1023: AC | 0: CC
    analogWrite(LB,vb);
    btn = digitalRead(BT);delay(50);
  }while(btn == false);//Mientras no se presione BT...
  Serial.end();delay(1000);  
}
