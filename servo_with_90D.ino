// C++ code
//
#include <Servo.h>

Servo servo_8;

Servo servo_9;

Servo servo_10;

Servo servo_11;

Servo servo_12;

void setup()
{
  servo_8.attach(8, 500, 2500);

  servo_9.attach(9, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_12.attach(12, 500, 2500);

}

void loop()
{
  servo_8.write(90);
  servo_9.write(90);
  servo_10.write(90);
  servo_11.write(90);
  servo_12.write(90);
  delay(10); // Delay a little bit to improve simulation performance
}