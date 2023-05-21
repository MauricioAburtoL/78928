#include <WiFi.h>

const char* ssid = "ssid";
const char* password = "pass";

void setup(){
serial.begin(115200)
delay(10);

//se inicia la conexion 
Serial.println();
Serial.println();
Serial.println("Connecting to");
Serial.println(ssid);

WiFi.begin(ssid, password);
//se verifica se realiza la conexion
while(WiFi.status()!=WL_CONNECTED){
delay(500);
Serial.print(".");
}
//lograda la conexion se muestra la informacion
Serial .println("");
Serial.println("WiFi connected");
Serial.println("ip address");
Serial.println("WiFi.localiP()");
}

void loop(){
}
