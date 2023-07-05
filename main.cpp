#include <L298N-setup.h>
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
    //identifyMotor(0);
}

void loop() {
    /*if (lineAny){
        Serial.println("LINE");
    }
    else if (millis() - ms > 300){
        Serial.println("WALLS");
    }*/
    //Serial.println(action);

     
    //if (lineAny){
        //Serial.print("LINE: ");     

if (action == 4){
    //Serial.println("RIGHT");
    go(0, 60);
}
else if (action == 6){
    //Serial.println("LEFT");
    go(60, 0);
}
else if (action == 5){
    //Serial.println("STRAIGHT");
    go(60, 60);
}

            
    //}

    /*else if (millis() - ms > 300){
        //Serial.print("WALL: ");
        if (action == 3){
            //Serial.println("90 deg");
            go(50, -50);
            delay(600);
        }
        if (action == 2){
            //Serial.println("RIGHT");            
            go(60, 30);
        }
        else if (action == 1){
            //Serial.println("LEFT");            
            go(30, 60);
        }
        else{
            //Serial.println("STRAIGHT");            
            go(50, 50);
        }      
    }*/
    //delay(100);  
          
}

void maze(int howMany) {
    while (Wire.available() > 0) {
        action = Wire.read();
        
        if (action > 3){
            /*Serial.print("LINE DETECTED: ");
            Serial.print(action);*/
            lineAny = true;
            //ms = millis();
        }
        else{
            lineAny = false;
            /*Serial.print("PROXIMITY ALERT: ");
            Serial.print(action);*/
        }
    }
    /*Serial.println();*/
}