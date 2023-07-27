/*Calculate the sum of both digits of a user entered two digit number.*/
#include <stdio.h>
int sum_digit(int number)
{
    int sum = 0;
    sum += number / 10;
    sum += number % 10;
    return sum;
}

int main()
{
    int two_digit_number;
    c:
    printf("Enter a two-digit number: ");
    scanf("%d", &two_digit_number);
    if(two_digit_number>=10 && two_digit_number<=99)
    {
        printf("Sum of digits: %d\n", sum_digit(two_digit_number));
    }
    else
    {
        printf("Error!\n");
        goto c;
    }
    return 0;
}


