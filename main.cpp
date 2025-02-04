#include "mbed.h"
#include "arm_book_lib.h"

#define DUTY_MIN 0.025 //Duty cycle is pulse_width/period
#define DUTY_MAX 0.125
#define PERIOD 0.02 //Units of period is seconds

PwmOut servo(PF_9); //Here is where we declare the object

int main()
{
servo.period(PERIOD); // 20ms period
servo.write(DUTY_MIN); // 2.5% duty cycle

while (true) {
    servo.period(DUTY_MIN);
    delay(1000);
    servo.period(DUTY_MAX);
    delay(1000);
}

}