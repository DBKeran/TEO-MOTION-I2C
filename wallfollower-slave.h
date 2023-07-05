// Wall follow algorithm acting on the motors depending on the walls detected

#pragma once
#include <motors-test.h>
#include <motion-controll.h>
#include <Wire.h>

byte proxAlert;
int action_num = 0;

void leftWall(){
    if (action_num == 3) {
        curve_right_forwards(70, 2);
    }
    else if (action_num == 1) {
        curve_left_forwards(70, 2);
    }
    else if (action_num == 2) {
        rotate_right(70, 300);
    }
    else if (action_num == 0) {
        forwards(70, 2);
    }
}

void rightWall(){
    if (action_num == 4) {
        curve_left_forwards(70, 2);
    }
    else if (action_num == 5) {
        curve_right_forwards(70, 2);
    }
    else if (action_num == 6) {
        rotate_left(70, 300);
    }
    else if (action_num == 0) {
        forwards(70, 2);
    }
}

void action(int Actions) {
  proxAlert = Wire.read();
  switch (proxAlert) {
    case 0:
        action_num = 0;
        break;
    case 1:
        action_num = 1;
        break;
    case 2:
        action_num = 2;
        break;
    case 3:
        action_num = 3;
        break;
    case 4:
        action_num = 4;
        break;
    case 5:
        action_num = 5; 
        break;
    case 6:
        action_num = 6; 
        break;
    case 7:
        action_num = 7; 
        break;
    case 8:
        action_num = 8; 
        break;
    case 9:
        action_num = 9; 
        break;
    case 10:
        action_num = 10; 
        break;
    default:
        break;
  }
  delay(10);
}
