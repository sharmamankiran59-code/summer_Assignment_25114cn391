#include <stdio.h>

int sum(int num)
{
    if (num == 0)      // Base case
    {
        return 0;
    }
    else
    {
        return (num % 10) + sum(num / 10);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sum(num));

    return 0;
}