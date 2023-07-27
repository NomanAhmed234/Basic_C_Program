/*Input current and resistance from user and write a function to calculate voltage.
V=IR .*/

#include <stdio.h>
//Calculate Voltage using Ohm's Law
float volt(float I,float R)
{
    float V;
    V=I*R;
    return V;
}

int main ()
{
    float I, R, V;
    printf("Enter the value of Current(I) = ");
    scanf("%f",&I);
    printf("\nEnter the value of Resistance(R) = ");
    scanf("%f",&R);
    printf("\nVoltage = %.2fV", volt(I,R));
    return 0;
}

