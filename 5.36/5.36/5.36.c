#include <stdio.h>

void towersOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    towersOfHanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    towersOfHanoi(n - 1, aux, to, from);
}

int main(void) {
    int n;
    printf("Enter number of disks: ");
    scanf_s("%d", &n);
    towersOfHanoi(n, 'A', 'C', 'B');
    return 0;
}