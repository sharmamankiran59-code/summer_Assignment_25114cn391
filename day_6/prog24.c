#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    double result;// x = base, n = exponent, result = x raised to the power n

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    result = pow(x, n);// Calculate x raised to the power n

    printf("%d^%d = %.0lf", x, n, result);

    return 0;
}