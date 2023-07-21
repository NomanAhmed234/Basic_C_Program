#include<stdio.h>
int main()
{
	int dof,cy=2022,age;
	printf("Enter Your Birth Year: ");
	scanf("%d",&dof);
	age=cy-dof;
	if(dof%4==0)
	{
		printf("You Were Born In A Leap Year");
	}
	else
	{
		printf("Your Age Is %d",age);
	}
	return 0;
}