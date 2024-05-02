#include <Arduino.h>
#include "Makerlabvn_SimpleMotor.h"
#include "SoftwareSerial.h"
/* ------------------------------------------------------------------------- */
/*                                   DEFINE                                  */
/* ------------------------------------------------------------------------- */

/**
 * Phần cấp nguồn cho Driver
 * +12V - ... có thể cấp nguồn trong khoảng 9V~6V
 * GND  - GND
 *
 * Dùng Jumper kết nối (mặc định)
 * ENA  - 5V
 * ENB  - 5V
 *
 * L298 : Arduino
 * IN1  : D4
 * IN2  : D5 (~)
 * IN3  : D6 (~)
 * IN4  : D7
 */
#define PIN_IN1 4 //! D4
#define PIN_IN2 5 //! D5 (~)
#define PIN_IN3 6 //! D6 (~)
#define PIN_IN4 7 //! D7
/**
 * Pin kết nối Thanh dò line TCRT5000
 *
 * TCRT5000 : Arduino
 * GND      - GND
 * 5V       - 5V
 * OUT1     - A1 (Digital)
 * OUT2     - A2 (Digital)
 * OUT3     - A3 (Digital)
 *
 * Trái ------------ Phải
 * |                    |
 * | OUT3 | OUT2 | OUT1 |
 *
 * Khoảng cách phát hiện Line ĐEN (~1cm)
 * Có Line - HIGH - Bit 1
 * Ko Line - LOW  - Bit 0
 */
#define PIN_OUT1 A1 //! A1
#define PIN_OUT2 A2 //! A2
#define PIN_OUT3 A3 //! A3

#define PIN_TX_BLE 2 //! D2
#define PIN_RX_BLE 3 //! D3

extern SoftwareSerial mySerial;
extern Makerlabvn_SimpleMotor demoMotor;