
#include "credentials.h"
#include "wifi_tools.h"


void setup() {
	Serial.begin(115200);
	Serial.println("\n\tawake...");
	wifi_tools.begin(WIFI_SSID, WIFI_PASS);
}

void loop() {
	
	if (wifi_tools.is_connected) {
		
	} else {

		wifi_tools.reconnect();
		
	}
}

