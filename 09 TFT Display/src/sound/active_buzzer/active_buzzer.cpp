#include <Arduino.h>
#include "active_buzzer.h"
#include "pins.h"

int passive_buzzer_notes[] = {
        HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW
        };

int passive_buzzer_durations[] = {
       200, 400, 600, 200, 400, 200, 400
        };


ActiveBuzzer::ActiveBuzzer(){
    pinMode(BUZZER, OUTPUT);
}


void ActiveBuzzer::playAlarm(Ultrasonic ult){
    digitalWrite(BUZZER, HIGH);
    delay(400);
    digitalWrite(BUZZER, LOW);
}
