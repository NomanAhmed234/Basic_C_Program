#include <stdio.h>

int main()
{
    int amount, ta, customer_pay;
    int note1000=0, note500=0, note100=0, note50=0, note20=0, note10=0, note5=0, note2=0, note1=0;

    printf("Enter Amount Customer Have To Pay : ");
    scanf("%d", &ta);
    printf("Enter Amount Customer Paid :");
    scanf("%d", &customer_pay);
    amount = customer_pay-ta;
    printf("Cashier Must Return: %d Rs\n",amount);
	
	if(amount >= 1000)
	{
		note1000 = amount/1000;
		amount -= note1000 * 1000;
	}
    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    printf("Number of Notes Returned \n");
    printf("No of 1000 Note = %d\n", note1000);
    printf("No of 500  Note = %d\n", note500);
    printf("No of 100  Note = %d\n", note100);
    printf("No of 50   Note = %d\n", note50);
    printf("No of 20   Note = %d\n", note20);
    printf("No of 10   Note = %d\n", note10);
    printf("No of 5    Note = %d\n", note5);
    printf("No of 2    Note = %d\n", note2);
    printf("No of 1    Note = %d\n", note1);

    return 0;
}