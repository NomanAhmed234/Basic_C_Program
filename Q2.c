#include<stdio.h>
int main()
{
	
	int i,j;
	float c=3.9;
  printf("In 1  Minute  Calories Burn Are 3.9\n");
		for(j=10;j<=30;j=j+5)
		printf("In %d Minutes Calories Burn Are %.1f\n",j,j*c);
}