#include <stdio.h>

int main() {
    int n, fib1 = 0, fib2 = 1, fib;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("The %dst Fibonacci term is %d", n, fib1);
    else if (n == 2)
        printf("The %dnd Fibonacci term is %d", n, fib2);
    else {
        for (int i = 3; i <= n; i++) {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
        }
        printf("The %dth Fibonacci term is %d", n, fib2);
    }

    return 0;
}