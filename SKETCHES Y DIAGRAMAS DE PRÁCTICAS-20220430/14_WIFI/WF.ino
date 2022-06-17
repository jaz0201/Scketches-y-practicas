//Prueba 14 en NodeMCU
//Configuración básica para conexión WiFi

#include<ESP8266WiFi.h> //Header p/funciones WiFi
#define LEDOK D4 //LED de testigo de conexión

void setup() 
{
  pinMode(LEDOK,OUTPUT);digitalWrite(LEDOK,HIGH);
  Serial.begin(9600);delay(500);
  WiFi.begin("IINF_IDC_2.4","IP6A-2022");
  //WiFi.begin("TU SSID","PASS"); (SÓLO REDES 2.4 GHz)
  Serial.print("Conectando...");delay(500);
  while(WiFi.status()!= WL_CONNECTED){
    Serial.print(".");delay(500);  
  }
  Serial.println();
  Serial.println("CONECTADO A LA RED!");
  Serial.print("SSID: ");Serial.println(WiFi.SSID());
  Serial.print("DIR IP: ");Serial.println(WiFi.localIP());
  digitalWrite(LEDOK,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
