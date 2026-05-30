#include <stdio.h>

int main()
{
    int num1, num2, i, gcd = 1;//gcd is greatest common divisor, initialized to 1

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    for(i = 1; i <= num1 && i <= num2; i++)//check for common factors from 1 to the smaller of num1 and num2
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d", num1, num2, gcd);

    return 0;
}