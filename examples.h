// Examples of what can be done with the motion controll

#pragma once
#include <motors-test.h>
#include <motion-controll.h>

void right_angle_right() {
  rotate_right(100, 400);
  stop(200);
}

void square(){
  for (int i = 0; i < 4; i++){
    forwards(100, 1000);
    stop(200);
    right_angle_right();
  }
}

void right_angle_left() {
  rotate_left(100, 390);
  stop(200);
}

void snake_square() {
  forwards(100, 700);
  stop(200);
  right_angle_left();

  forwards(100, 700);
  stop(200);
  right_angle_left();  

  forwards(100, 700);
  stop(200);
  right_angle_right();

  forwards(100, 700);
  stop(200);
  right_angle_right();

  forwards(100, 700);
  stop(200);
}

void turn_around() {
  rotate_right(100, 800);
  stop(200);
}

void patrol() {
  forwards(100, 1500);
  stop(200);
  turn_around();
}

void curved_square() {
  forwards(100, 600);
  stop(200);
  curve_right_forwards(100, 800);
  stop(200);
  forwards(100, 600);
  stop(200);
  curve_left_forwards(100, 800);
  stop(200);
  backwards(100, 600);
  stop(200);
  curve_left_backwards(100, 800);
  stop(200);
  backwards(100, 600);
  stop(200);
  curve_right_backwards(100, 800);
}

void snake(){
  curve_left_forwards(100, 800);
  stop(100);
  curve_right_forwards(100, 800);
  stop(100);
}