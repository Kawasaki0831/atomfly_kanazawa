#include <Arduino.h>
#include <M5Atom.h>
#include "rc.hpp"
#include "flight_control.hpp"

//VL53L0X_ADDRESS           0x29
//MPU6886_ADDRESS           0x69
//BMP280_ADDRESS            0x76

//aaa

void setup() {  
  M5.begin(true, false, true);
  init_atomfly();
  delay(100);
}

//float Pitch,Roll,Yaw;

void loop() {
  loop_400Hz();
}
