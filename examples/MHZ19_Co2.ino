
#include "MHZ19.h"

const int pwmpin = 10;
MHZ19 *mhz19_pwm = new MHZ19(pwmpin);

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    int co2ppm = mhz19_pwm->getPpmPwm();
    Serial.print("co2: ");
    Serial.println(co2ppm);
}

