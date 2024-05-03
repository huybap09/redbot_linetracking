#include <Arduino.h>
#include "R1_VAR.h"

float eye_Left_Value;
float eye_Right_Value;
float eye_Mid_Value;
float threshold_left;
float last_lost_dir;
float left_dir;
float speedForward;
float threshold_right;
float right_dir;
float threshold_mid;
float speedForwardlow;
float stopspeed;

void setup(){
    threshold_left =  0.5;
    threshold_right = 0.5;
    threshold_mid = 0.5;
    left_dir = 0;
    right_dir = 1;
    last_lost_dir = left_dir;
    speedForward = 35;
    speedForwardlow = speedForward/2;
    stopspeed = 0;
}
void loop(){
  eye_Left_Value = digitalRead(A3);
        eye_Right_Value = digitalRead(A1);
        eye_Mid_Value = digitalRead(A2);
        //
        if((eye_Mid_Value > threshold_mid)){

          demoMotor.car_fw(speedForward,speedForward);

        }else{
          if((eye_Left_Value > threshold_left)  &&  (eye_Right_Value < threshold_right) &&  (eye_Mid_Value > threshold_mid)){


            demoMotor.car_fw(speedForwardlow,speedForward);
            }else{
          if((eye_Left_Value < threshold_left)  &&  (eye_Right_Value > threshold_right) &&  (eye_Mid_Value > threshold_mid)){


            demoMotor.car_fw(speedForward,speedForwardlow);
            }else{
          if((eye_Left_Value > threshold_left)  &&  (eye_Right_Value < threshold_right) &&  (eye_Mid_Value < threshold_mid)){
            last_lost_dir = left_dir;

            demoMotor.car_fw(stopspeed,speedForward);
          }else{
            if((eye_Left_Value < threshold_left)  &&  (eye_Right_Value > threshold_right) &&  (eye_Mid_Value < threshold_mid)){
              last_lost_dir = right_dir;

              demoMotor.car_fw(speedForward,stopspeed);  

            }else{
              if(last_lost_dir == left_dir){

                demoMotor.car_rotateL(speedForward);

              }else{

                demoMotor.car_rotateR(speedForward);
              }

            }

          }

        }

    }
}
}