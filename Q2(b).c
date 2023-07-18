#include<stdio.h>
int main()
{
    int i;
    double min,a[10];
    printf("Enter 10 Numbers\n");
    for(i=0; i<10; i++)
        scanf("%lf",&a[i]);
    min=a[0];
    for(i=0; i<10; i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("Minimum Number Is %lf",min);
}
