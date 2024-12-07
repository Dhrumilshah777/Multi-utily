#include <stdio.h>

void main()
{
    int sub1, sub2, sub3, avg;

    printf("Enter the value of sum1 :");
    scanf("%d", &sub1);

    printf("Enter the value of sum2 :");
    scanf("%d", &sub2);

    printf("Enter the value of sum3 :");
    scanf("%d", &sub3);

    avg = sub1 + sub2 + sub3 / 3;
    printf("The avg is : %d", avg);

    if (avg <= 20)
    {
        printf("\nYour grade is D");
    }
    else if (avg >= 50)
    {
        printf("\nYour Grade is C");
    }
    else if (avg >= 70)
    {
        printf("\nYour Grade is B");
    }
    else if (avg >= 80)
    {
        printf("\nYour Grade is A");
    }
    else
    {
        printf("\nYou are Fail");
    }
}