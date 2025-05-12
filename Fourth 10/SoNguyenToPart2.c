#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Primus(int n) {
    if (n < 2) return 0; // Not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int n, count = 0, num = 2;
    scanf("%d", &n);
    for (int i = 2; count < n; i++) {
        if (Primus(i)) {
            printf("%d ", i);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
// This program finds and prints the first n prime numbers, where n is provided by the user.