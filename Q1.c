#include<stdio.h>
int main()
{
	float d,t,s;
	printf("Enter distance in km\n");
	scanf("%f",&d);
	printf("Enter time in hours\n");
	scanf("%f",&t);
	d=d*1000;
	t=t*3600;
	s=d/t;
	printf("Speed = %f m/s",s);
}
