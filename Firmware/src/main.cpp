#include <Arduino.h>

#define true 1
#define false 0

void setup() {
    set_sys_clock_khz(48000, true);
    pinMode(17, OUTPUT);
    Serial.begin(115200);
}
void loop() {
    digitalWrite(17, HIGH);
    delay(1000);
    digitalWrite(17, LOW);
    delay(1000);
    Serial.println("Hello, world!");
}
