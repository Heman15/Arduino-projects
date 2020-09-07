#include <Servo.h>
Servo servo;      //Here we first imported servo motor lib. , and intialize the servo motor angle 
int angle = 0;
void setup() {
  servo.attach(9);
  servo.write(angle);
}

void loop() {
  for(angle= 0; angle<180; angle++)
  {
    servo.write(angle);
    delay(5);
  }

  for (angle=180; angle>0;angle--)                    //Here we used for loop   
  {
    servo.write(angle);
    delay(5);
  }
}
