/*
 * L298N DC motor driver 
 * dual-channel H-Bridge motor driver
 * 
 * see https://lastminuteengineers.com/l298n-dc-stepper-driver-arduino-tutorial/
 *  
 * pinout: 
 * OUT1 - motor A
 * OUT2 - motor A
 * OUT3 - motor B
 * OUT4 - motor B
 * +5V - 5v output if 5V EN jumper is installed 
 *       if jumper if removed, you must supply 5V to power the driver
 * GND
 * +12V - VCC motor supply (5v to 35v)
 * ENA - speed control motor A
 * IN1 - motor A forward
 * IN2 - motor A backward
 * IN3 - motor B forward
 * IN4 - motor B backward
 * ENB - speed control motor B
 * 5V EN JUMPER
 * 
 * 
 * speed control
 * low turns motor off, high is full speed.  pwm sets the speed.
 * by default the pins are jumpered to high.  for pwm, remove
 * the jumper and supply a pwn signal to control the speed.
 * 
 * 
 * can also be used to drive a stepper motor
 * see: https://lastminuteengineers.com/stepper-motor-l298n-arduino-tutorial/
 * 
 */



// todo:  find a dc motor to use with this
