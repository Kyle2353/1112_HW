#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    return base * power(base, exponent - 1);
}

int main(void) {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf_s("%d %d", &base, &exponent);
    printf("Result = %d\n", power(base, exponent));
    return 0;
}






