// Line follow algorithm acting on the motors depending on the lines detected

#pragma once
#include <motors-test.h>
#include <motion-controll.h>
#include <Wire.h>

byte lineDetected;
int act = 2;

void followLine(){
    if (act == 0) {
        curve_left_forwards(50, 1);
    }
    else if (act == 1) {
        curve_left_forwards(25, 1);
    }
    else if (act == 3) {
        curve_right_forwards(25, 1);
    }
    else if (act == 4) {
        curve_right_forwards(50, 1);
    }
    else 
        forwards(30, 1);
}

void lineActions(int Actions) {
  lineDetected = Wire.read();
  switch (lineDetected) {
    case 0:
        act = 0;
        break;
    case 1:
        act = 1;
        break;
    case 2:
        act = 2;
        break;
    case 3:
        act = 3;
        break;
    case 4:
        act = 4;
        break;
    case 5:
        act = 5; 
        break;
    case 6:
        act = 6; 
        break;
    case 7:
        act = 7; 
        break;
    case 8:
        act = 8; 
        break;
    case 9:
        act = 9; 
        break;
    case 10:
        act = 10; 
        break;
    default:
        break;
  }
  delay(10);
}
