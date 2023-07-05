// Maze algorithm that combines both lineFollower and the wallFollower algorithms

/*
This is a single slave on which two masters act via I2C
*/

#pragma once
#include <motion-controll.h>
#include <Wire.h>

byte mazeAction;
int mazeAct = 0;
bool lineAny;

void leftWall(){
    if (mazeAct == 8) {
        curve_right_forwards(50, 1);
    }
    else if (mazeAct == 6) {
        curve_left_forwards(50, 1);
    }
    else if (mazeAct == 7) {
        rotate_right(70, 300);
    }
    else
        forwards(30, 1);
}

void rightWall(){
    if (mazeAct == 9) {
        curve_left_forwards(50, 1);
    }
    else if (mazeAct == 10) {
        curve_right_forwards(50, 1);
    }
    else if (mazeAct == 11) {
        rotate_left(70, 300);
    }
    else if (mazeAct == 5) {
        forwards(30, 1);
    }
}

void followLine(){
    if (mazeAct == 0) {
        curve_left_forwards(50, 1);
    }
    else if (mazeAct == 1) {
        curve_left_forwards(25, 1);
    }
    else if (mazeAct == 3) {
        curve_right_forwards(25, 1);
    }
    else if (mazeAct == 4) {
        curve_right_forwards(50, 1);
    }
    else
        forwards(30, 1);
}
