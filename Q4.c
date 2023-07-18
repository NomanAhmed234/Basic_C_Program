#include<stdio.h>
int main()
{
char a[1000],b;
int i,at=0;
printf("Enter Your Email Address\n");
gets(a);
for(i=0;i<a[i];i++)
{
b=a[i];
if(b=='@')
at++;
}
if(at==1)
printf("'@' Is Present");
else
printf("'@' Is Not Present");
return 0;
}