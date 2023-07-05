// Seting up the GPIO's 

#pragma once
#include <Arduino.h>

#define dirPin1 8
#define stepPin1 9
#define dirPin2 7
#define stepPin2 6
#define dirPin3 2
#define stepPin3 3
#define dirPin4 4
#define stepPin4 5

#define stepsPerRevolution 200

void motors_setup() {
    pinMode(stepPin1, OUTPUT);
    pinMode(dirPin1, OUTPUT);
    pinMode(stepPin2, OUTPUT);
    pinMode(dirPin2, OUTPUT);
    pinMode(stepPin3, OUTPUT);
    pinMode(dirPin3, OUTPUT);
    pinMode(stepPin4, OUTPUT);
    pinMode(dirPin4, OUTPUT);
}
