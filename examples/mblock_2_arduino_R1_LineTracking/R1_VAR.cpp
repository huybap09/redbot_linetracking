#include "R1_VAR.h"

Makerlabvn_SimpleMotor demoMotor(PIN_IN1, PIN_IN2, PIN_IN3, PIN_IN4);
SoftwareSerial mySerial(PIN_TX_BLE, PIN_RX_BLE); // RX (Soft), TX (Soft)