#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    scanf_s("%d %d", &a, &b);
    printf("LCM = %d\n", lcm(a, b));
    return 0;
}









