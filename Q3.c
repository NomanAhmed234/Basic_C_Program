/*Take temperature in Fahrenheit as input and convert it into Centigrade i.e. C =
5*(F-32)/9*/
#include <stdio.h>
//function to convert fahrenheit into centigrade
float convert(float tf)
{
	float temperature_centigrade;
	temperature_centigrade = 5 * (tf - 32) / 9;
	return temperature_centigrade;
}

int main(void) {
  float temperature_fahrenheit;
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &temperature_fahrenheit);
  printf("Temperature in Centigrade: %.2fC\n", convert(temperature_fahrenheit));
  return 0;
}

