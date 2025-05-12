#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int SoChinhPhuong(int n) {
    int i = 1;
    while (i * i < n) {
        i++;
    }
    return (i * i == n);
}

int main() {
    int n;
    scanf("%d", &n);
    if (SoChinhPhuong(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}