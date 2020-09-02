#include<stdio.h>

int main()
{
    //prompting user for input
    long long num;
    printf("Enter Number: ");
    scanf_s("%lld", &num);


    int t = 1, j = 0, sum1 = 0, sum2 = 0, sum, s = 0, s1 = 0, s2 = 0;
    long long n2 = num / 10, num2 = num;


    for (int i = 0; t == 1; i++)
    {
        //terminating logic
        if (num == 0)
        {
            t--;
        }

        //calculating sum of regular sequence
        sum2 += num % 10;
        if (num != 0)
        {
            j++;
        }

        //claculating sum of special sequence
        s = n2 % 10;

        s *= 2;

        s1 = (s / 10) % 10;

        s2 = s % 10;

        sum1 += s1 + s2;

        if (n2 != 0)
        {
            j++;
        }

        num = num / 100;

        n2 = n2 / 100;


    }

    for (int i = 0; i < j - 2; i++)
    {
        num2 /= 10;
    }


    sum = sum1 + sum2;


    printf("\n  ");
    if (sum % 10 == 0)
    {
        if (j == 15 && (num2 == 34 || num2 == 37))
        {
            printf("AMEX");
        }
        else if (j == 16 && (num2 == 51 || num2 == 52 || num2 == 53 || num2 == 54 || num2 == 55))
        {
            printf("MASTERCARD");
        }
        else if ((j == 16 || j == 13) && num2 / 10 == 4)
        {
            printf("VISA");
        }
        else
        {
            printf("INVALID");
        }
    }
    else
    {
        printf("INVALID");
    }
    printf("\n");














    //1- get last digit of number till you find 0 then implement the loop for only one time
    //2- implement luhm's algorithm on the array
    //3- use branching
}