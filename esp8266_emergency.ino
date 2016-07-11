// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain
#include <ESP8266WiFi.h>
const char* ssid     = "your ssid";
const char* password = "your password";
const char* host = "your server name or ip";


void setup() {  
  Serial.begin(115200);
  delay(10);
}

void loop() {
  if (digitalRead(4) == HIGH){
    Serial.println("button pressed");
      WiFi.begin(ssid,password);
      WiFiClient client;
      Serial.println("wifi connected");
      const int httpPort = 80;
      String url = "/emergency.php/"; 
       if (client.connect(host, httpPort)){
         delay(10);
         if(client.print(String("GET ") + url + " HTTP/1.1\r\n" + "Host: " + host + "\r\n" + "Connection: close\r\n\r\n") ){
           Serial.println("message sent");
           delay(20000);
        
        }
    } 
  }
}
