#include<stdio.h>
int main()
{
    int i,j,n=10,a,average,m1,m2,num[10];
    printf("Enter Ten Numbers \n");
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);     
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("In Ascending Order\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
        
    }
    printf("\nMedian of 10 Numbers");
    for(i = 0;i < n; i++);
        m1=num[n/2-1];
        m2=num[(n/2)];
        average=(m1+m2)/2;
        if(average%2==0)
        printf("\n\t%d",average);
        else
        {
        printf("\n\t%d.5",average);
		}
}
