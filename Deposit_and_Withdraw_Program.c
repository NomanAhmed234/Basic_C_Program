#include<stdio.h>
int main()
{
    int i,j,sum,d[100],w=0,c=0,b=0,balance=0;
    char amount;

f:
    printf("\nPress 'D' or 'd' for Deposit\n");
    printf("Press 'W' or 'w' for Withdraw\n");
    printf("Enter your choice: ");
    goto j;
    scanf("%c",&amount);

    switch(amount)
    {
    case 'D':
    case 'd':
        for(i=0; i<=0; i++)
        {
            printf("Enter Deposit Amount: ");
            scanf("%d",&d[i]);
            b=d[i];
            c=d[i+1];
            sum=b+c;
            goto f;
        }

    case 'W':
    case 'w':
        for(j=0; j<=0; j++)
        {
            printf("Enter Withdraw Amount: ");
            scanf("%d",&w);
            j=(sum-w);
            if(j<0)
            {
                goto c;
            }
            else
                goto f;
            break;
        }
    }
j:
    scanf("%c",&amount);


c:
    printf("Your balance amount is %d",j);
}
