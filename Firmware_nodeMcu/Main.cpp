#include "libraries\ESP8266WiFi\src\ESP8266WiFi.h"

void setup() {
	Serial.begin(115200);


	WiFi.mode(WIFI_STA);
	WiFi.disconnect();
	delay(100);

	Serial.println("Setup done");
}

void loop() {
	Serial.println("scan start");
}