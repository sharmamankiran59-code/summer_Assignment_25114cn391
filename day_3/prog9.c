#include <stdio.h>

int main()
{
    int num, i, prime = 1;//assume the number is prime

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)//less than or equal to 1 are not prime numbers
    {
        prime = 0;
    }

    for (i = 2; i < num; i++)//check for factors from 2 to num-1
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is Not a Prime Number.\n", num);

    return 0;
}