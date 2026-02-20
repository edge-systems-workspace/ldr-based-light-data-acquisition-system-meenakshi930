#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */


int ldrPin = A0;
int ldrValue = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("LDR Light Intensity Monitoring Initialized");

}

void loop() {
    ldrValue = analogRead(ldrPin);
    Serial.print("LDR Raw Value: ");
    Serial.println(ldrValue);
    if (ldrValue > 500) {
        Serial.println("Brightness Status: Bright");
    } else {
        Serial.println("Brightness Status: Dark");
    }

    delay(500);

}
