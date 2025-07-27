#define BLYNK_TEMPLATE_ID "TMPL3mI4WKDNd"
#define BLYNK_TEMPLATE_NAME "SENSORS"
#define BLYNK_AUTH_TOKEN "•••• - 4TZJ"



#include <ESP8266WIFI.h>
#include<BlynkSimpleEsp8266.h>

#define Auth "•••• - 4TZJ"
#define ssid "Himaa!"
#define pass "loading@123"
#define LED D1

void setup(){
  Serial.begin(9600);
  WiFi.begin(ssid, pass);
  while(WiFi.status()!=WL_CONNECTED){
    Serial.print("....")
    delay(300);
  }
  pinMode(LED,OUTPUT);
  Serial.println("WIFI Connected");

  Blynk.begin(Auth,ssid,pass);
}
void loop(){
  Blynk.VirtualWrite(V0,HIGH);
  delay(1000);
  Blynk.virtualWrite(V0,LOW);
  delay(500);
}