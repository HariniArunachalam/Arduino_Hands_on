#include <SoftwareSerial.h>
#include <TinyGPS++.h>

TinyGPSPlus gps;
SoftwareSerial gpsSerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
  Serial.println("GPS is initializing...");
}

void loop() {
  while (gpsSerial.available() > 0) {
    if (gps.encode(gpsSerial.read())) {
      if (gps.location.isValid()) {
        Serial.print("Latitude: ");
        Serial.println(gps.location.lat(), 6);
        Serial.print("Longitude: ");
        Serial.println(gps.location.lng(), 6);
        Serial.print("Satellites: ");
        Serial.println(gps.satellites.value());
        Serial.println("-------------------------");
      } else {
        Serial.println("Waiting for GPS signal...");
      }
    }
  }
}


