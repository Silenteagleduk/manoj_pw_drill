#include <stdio.h>

int pw_casting(float f)
{
    int x = (int)f;
    char y = (char)f;
    int round = 0;
    float rounding = f - (int)(f);
    if (rounding >= 0.5)
    {
        round = (int)f + 1;
    }
    else
    {
        round = (int)f;
    }
    return x + y + round;
}