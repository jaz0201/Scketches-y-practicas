void led_green(){
  Serial.begin(9600);
  do
  {
    vg = analogRead(PT);delay(100);
    Serial.println("Inyección de verde: " + String(vg));
    analogWrite(LR,1023);//1023: AC | 0: CC
    analogWrite(LG,vg);
    analogWrite(LB,1023);//1023: AC | 0: CC
    btn = digitalRead(BT);delay(50);
  }while(btn == false);//Mientras no se presione BT...
  Serial.end();delay(1000);  
}
