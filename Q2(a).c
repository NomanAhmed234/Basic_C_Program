

#include<stdio.h>
int main()
{
    int i;
    double max,a[10];
    printf("Enter 10 Numbers\n");
    for(i=0; i<10; i++)
        scanf("%lf",&a[i]);
    max=a[0];
    for(i=0; i<10; i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("Maximum Number Is %lf",max);
}
