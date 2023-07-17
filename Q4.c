#include<stdio.h>
int main ()
{ 
float r,volume,pi=3.142;
printf("Enter the Radius: ");
scanf("%f",&r);
volume=(4*pi*(r*r*r)/3);    // (4/3)=1.333
printf("volume of sphere is %f",volume);
}
