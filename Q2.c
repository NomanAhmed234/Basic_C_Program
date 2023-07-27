/*For a student of CSC103, take his Quiz #1 marks (out of 15) as input and
convert it into percentage marks.*/
#include <stdio.h>

//function to calculate percentage
float percent(float quiz_marks)
{
    float percentage_marks;
    percentage_marks = quiz_marks / 15 * 100;
    return percentage_marks;
}

int main()
{
    float quiz_marks;
    c:
    printf("Enter Quiz #1 marks (out of 15): ");
    scanf("%f", &quiz_marks);
    if(quiz_marks>=0 && quiz_marks<=15)
    {
        printf("Percentage marks: %.2f%%\n", percent(quiz_marks));
    }
    else
    {
        printf("Error!\n");
        goto c;
    }
    return 0;
}

