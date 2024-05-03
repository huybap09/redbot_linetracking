/*
 * 12:19 03/05/2024
 * nguồn y240419_mBlock
 * code cho 2 sensor nằm hai bên
 * đã xóa phần dư
 * dùng làm khung cho code 3 sensor 
*/

#include <Arduino.h>
#include "R1_VAR.h"

float eye_Left_Value;
float eye_Right_Value;
float threshold_left;
float last_lost_dir;
float left_dir;
float speedForward;
float speedBackward;
float threshold_right;
float right_dir;

void setup(){
    threshold_left =  0.5;
    threshold_right = 0.5;
    left_dir = 0;
    right_dir = 1;
    last_lost_dir = left_dir;
    speedForward = 50;
    speedBackward = 50;
    while(1) {
        eye_Left_Value = digitalRead(A3);
        eye_Right_Value = digitalRead(A2);
        if((eye_Left_Value > threshold_left)  &&  (eye_Right_Value > threshold_right)){
          demoMotor.car_fw(speedForward,speedForward);
        }else{
          if((eye_Left_Value > threshold_left)  &&  (eye_Right_Value < threshold_right)){
            last_lost_dir = left_dir;
            demoMotor.car_fw(speedForward,0);
          }else{
            if((eye_Left_Value < threshold_left)  &&  (eye_Right_Value > threshold_right)){
              last_lost_dir = right_dir;
              demoMotor.car_fw(0,speedForward);  

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

void loop(){
}
