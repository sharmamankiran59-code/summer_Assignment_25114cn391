#include <stdio.h>

int main() {
    int num;
    long long binary = 0;
    int place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    while (num > 0) {
        int remainder = num % 2;
        binary = binary + remainder * place;
        place = place * 10;
        num = num / 2;
    }

    printf("Binary representation: %lld\n", binary);

    return 0;
}