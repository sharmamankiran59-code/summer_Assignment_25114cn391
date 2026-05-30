#include <stdio.h>

int main()
{
    int start, end, num, i, prime;

    printf("Enter starting number: ");//get the starting number
    scanf("%d", &start);

    printf("Enter ending number: ");//get the ending number
    scanf("%d", &end);

    for(num = start; num <= end; num++)//check each number in the range
    {
        prime = 1;

        if(num <= 1)
            prime = 0;

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
            printf("%d ", num);
    }

    return 0;
}