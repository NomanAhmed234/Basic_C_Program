#include<stdio.h>
int main()
{
char a[1000];
int i;
printf("Enter Line In Lowercase:\n");
gets(a);
for(i=0;a[i]!=0;i++)
{
if(a[i]>='a'&&a[i]<='z')
a[i]=a[i]-32;
}
puts(a);
}