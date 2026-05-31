#include <stdio.h>

int main() {
    int n, fib1 = 0, fib2 = 1, fib;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", fib1);

        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    return 0;
}