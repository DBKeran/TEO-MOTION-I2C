#include <motion-controll.h>
#include <Wire.h>

#define ADDRESS_PROXIMITY 0x1
#define ADDRESS_ME 0x2
#define ADDRESS_LINE 0x3

void maze(int howMany);
bool lineAny = false;
int action;
float ms; 

void setup() {
    //Serial.begin(9600);
    Wire.begin(ADDRESS_ME);
    Wire.onReceive(maze);
}

void loop() {
    /*if (lineAny){
        Serial.println("LINE");
    }
    else if (millis() - ms > 300){
        Serial.println("WALLS");
    }*/
     
    if (lineAny){
        //Serial.print("LINE: ");
        if (action == 0){
            //Serial.println("RIGHT");
            curve_right_forwards(80, 1);
        }
        else if (action == 1){
            //Serial.println("RIGHT");
            curve_right_forwards(60, 1);
        }
        else if (action == 3){
            //Serial.println("LEFT");
            curve_left_forwards(60, 1);
        }
        else if (action == 4){
            //Serial.println("LEFT");
            curve_left_forwards(80, 1);
        }
        else{
            //Serial.println("STRAIGHT");
            forwards(50, 1);
        }
            
    }
    else if (millis() - ms > 300){
        //Serial.print("WALL: ");
        if (action == 5){
            //Serial.println("90 deg");
            rotate_right(80, 300);
        }
        if (action == 6){
            //Serial.println("RIGHT");            
            curve_right_forwards(60, 1);
        }
        else if (action == 7){
            //Serial.println("LEFT");            
            curve_left_forwards(60, 1);
        }
        else{
            //Serial.println("STRAIGHT");            
            forwards(50, 1);
        }      
    }
    delay(100);        
}

void maze(int howMany) {
    while (Wire.available() > 0) {
        action = Wire.read();
        
        if (action < 5){
            /*Serial.print("LINE DETECTED: ");
            Serial.print(action);*/
            lineAny = true;
            ms = millis();
        }
        else{
            lineAny = false;
            /*Serial.print("PROXIMITY ALERT: ");
            Serial.print(action);*/
        }
    }
    /*Serial.println();*/
}