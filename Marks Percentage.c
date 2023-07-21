#include<stdio.h>
int main()
{
int marks;
printf("Enter Your Marks Out of 100: ");
scanf("%d",&marks);
if(marks>=91&&marks<=100)
printf("Your Grade Is 'A+'");
else if(marks>=81&&marks<=90)
printf("Your Grade Is 'A-'");
else if(marks>=71&&marks<=80)
printf("Your Grade Is 'B'");
else if(marks>=61&&marks<=70)
printf("Your Grade Is 'C'");
else if(marks>=50&&marks<=60)
printf("Your Grade Is 'D'");
else if(marks<50&&marks>=0)
printf("You Failed");
else
printf("Invalid Marks!!");
return 0;
}