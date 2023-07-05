// Types of motion for omnidirectional wheels

#pragma once
#include <motors-setup.h>

void stop(int duration) {
    digitalWrite(stepPin1, LOW);
    digitalWrite(stepPin2, LOW);
    digitalWrite(stepPin3, LOW);
    digitalWrite(stepPin4, LOW);
    delay(duration);
}

void forwards(int speed, int steps) {

    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, HIGH);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin3, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin3, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void backwards(int speed, int steps) {

    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, HIGH);
    digitalWrite(dirPin3, HIGH);
    digitalWrite(dirPin4, LOW);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin3, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin3, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void rotate_right(int speed, int steps) {

    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, HIGH);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, LOW);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin3, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin3, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void rotate_left(int speed, int steps) {

    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, HIGH);
    digitalWrite(dirPin4, HIGH);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin3, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin3, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void left(int speed, int steps) {

    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, LOW);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin3, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin3, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void right(int speed, int steps) {

    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, HIGH);
    digitalWrite(dirPin3, HIGH);
    digitalWrite(dirPin4, HIGH);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin3, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin3, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void curve_right_forwards(int speed, int steps) {

    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin3, LOW);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin3, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin3, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void curve_left_forwards(int speed, int steps) {

    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin4, HIGH);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void curve_right_backwards(int speed, int steps) {

    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin3, HIGH);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin1, HIGH);
        digitalWrite(stepPin3, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin1, LOW);
        digitalWrite(stepPin3, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}

void curve_left_backwards(int speed, int steps) {

    digitalWrite(dirPin2, HIGH);
    digitalWrite(dirPin4, LOW);

    int inv_speed = map(speed, 1, 100, 5000, 0);

    for (int i = 0; i < steps; i++) {

        digitalWrite(stepPin2, HIGH);
        digitalWrite(stepPin4, HIGH);
        delayMicroseconds(1000);

        digitalWrite(stepPin2, LOW);
        digitalWrite(stepPin4, LOW);
        delayMicroseconds(1000);

        delayMicroseconds(inv_speed);
    }
}
