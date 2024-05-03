#include <Arduino.h>   
#include "Makerlabvn_SimpleMotor.h"
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
/**
 * Pin kết nối cảm biến Siêu âm HY-SRF05
 *
 * HY-SRF05 : Arduino
 * VCC      - 5V
 * TRIG     - D9
 * ECHO     - D10
 * OUT      - none
 * GND      - GND
 */
#define PIN_TRIG 9  //! D9
#define PIN_ECHO 10 //! D10
/**
 * Pin kết nối động cơ RC Servo
 *
 * Servo : Arduino
 * SIG   - D8
 * VCC   - 5V
 * GND   - GND
 */
#define PIN_SERVO 8 //! D8
/**
 * Pin kết nối Module Bluetooth (JDY-33)
 *
 * JDY33 : Arduino
 * STATE - ... none
 * RXD   - D3 (TX Software Serial)
 * TXD   - D2 (RX Software Serial)
 * GND   - GND
 * VCC   - 5V
 * PWRC  - ... none
 */
#define PIN_TX_BLE 2 //! D2
#define PIN_RX_BLE 3 //! D3

extern Makerlabvn_SimpleMotor demoMotor;