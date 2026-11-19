#include <KiwisIoT.h>

const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define WATER_LEVEL_PIN A0

void setup() {
  Serial.begin(9600);
  kiwisiot.begin();
}

void loop() {
  kiwisiot.run();

  int waterValue = analogRead(WATER_LEVEL_PIN);

  kiwisiot.send("1", waterValue);

  Serial.print("Water Level Value = ");
  Serial.println(waterValue);

  delay(1000);
}