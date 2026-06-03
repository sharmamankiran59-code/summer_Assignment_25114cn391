#include <stdio.h>

int rev = 0;

int reverse(int num)// Function to reverse the digits of a number
{
    if (num == 0)
    {
        return rev;
    }
    else
    {
        rev = rev * 10 + (num % 10);// Update rev by adding the last digit of num
        return reverse(num / 10);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse number = %d", reverse(num));

    return 0;
}