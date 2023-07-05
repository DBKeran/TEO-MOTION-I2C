// Indentifier routins, helping to determine which motor is connected to which pins

#pragma once
#include <motors-setup.h>

void identify_motor(int motor_number = 0) {
    motors_setup();

    switch(motor_number) {
        case 0: 
        {
            digitalWrite(dirPin1, LOW);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin1, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin1, LOW);
                delayMicroseconds(1000);
            }  
            
            digitalWrite(dirPin2, HIGH);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin2, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin2, LOW);
                delayMicroseconds(1000);
            }      

            digitalWrite(dirPin3, HIGH);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin3, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin3, LOW);
                delayMicroseconds(1000);
            }  

            digitalWrite(dirPin4, LOW);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin4, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin4, LOW);
                delayMicroseconds(1000);
            }        
        }
        case 1:
        {
            digitalWrite(dirPin1, LOW);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin1, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin1, LOW);
                delayMicroseconds(1000);
            }
            break;  
        }
        case 2:
        {
            digitalWrite(dirPin2, HIGH);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin2, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin2, LOW);
                delayMicroseconds(1000);
            }  
            break;
        }
        case 3:
        {
            digitalWrite(dirPin3, HIGH);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin3, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin3, LOW);
                delayMicroseconds(1000);
            }  
            break;
        }
        case 4:
        {
            digitalWrite(dirPin4, LOW);

            for (int i = 0; i < 5 * stepsPerRevolution; i++) {
                digitalWrite(stepPin4, HIGH);
                delayMicroseconds(1000);
                digitalWrite(stepPin4, LOW);
                delayMicroseconds(1000);
            }  
            break;
        }
    }
}

void identify_direction() {
    // Sets the pins to output
    motors_setup();

    // Forwards:
    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, HIGH);

    for(int i = 0; i < 5 * stepsPerRevolution; i++) {
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
    }    

    delay(500);

    // Backwards:
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, HIGH);
    digitalWrite(dirPin3, HIGH);
    digitalWrite(dirPin4, LOW);

    for(int i = 0; i < 5 * stepsPerRevolution; i++) {
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
    }   
}

