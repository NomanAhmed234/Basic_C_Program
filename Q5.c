#include<stdio.h>
int main ()
{ 
float marks,total_marks=5,percentage;
printf("Enter Quiz 1 marks out of 5\n");
scanf("%f",&marks);
if(marks>5||marks<0)
{
	printf("Invalid Number");
 } 
else
{
	percentage=(marks/total_marks)*100;
	printf("Percentage of Quiz 1 marks = %.2f%%",percentage);
}
}
