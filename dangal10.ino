#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 4  // DS18B20 data pin
#define BUZZER 7        // Buzzer connected to pin 7

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
  pinMode(BUZZER, OUTPUT);
  noTone(BUZZER);  // Ensure the buzzer is off initially
}

void loop() {
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);

  if (tempC != DEVICE_DISCONNECTED_C) {
    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.println(" °C");

    if (tempC > 34.0) {
      tone(BUZZER, 1000, 500); // 1000 Hz (Lower volume & tone), 500ms duration
    } else {
      noTone(BUZZER); // Stop buzzer
    }
  } else {
    Serial.println("Error: Sensor not found!");
  }

  delay(1000);
}
