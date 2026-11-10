#include <stdio.h>
#include <limits.h>

unsigned long long fibonacci(unsigned int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    unsigned long long a = 0, b = 1, c;
    for (unsigned int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(void) {
    unsigned long long a = 0, b = 1, c;
    unsigned int n = 0;

    printf("Fibonacci(0) = 0\n");
    printf("Fibonacci(1) = 1\n");

    n = 2;
    while (1) {
        if (ULLONG_MAX - a < b) {
            break;
        }
        c = a + b;
        a = b;
        b = c;
        printf("Fibonacci(%u) = %llu\n", n, b);
        n++;
    }

    printf("\nLargest Fibonacci number that can be printed: Fibonacci(%u) = %llu\n", n - 1, b);
    return 0;
}