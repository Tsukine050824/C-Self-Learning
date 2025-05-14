#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int SoChinhPhuong(int n) {
    int m = sqrt(n);
    return m * m == n;
}

int main() {
    int n,i = 0, count = 0;
    scanf("%d", &n);
    while (count < n)
    {
        printf("%d ", i * i);
        i++;
        count++;
    }
    
    return 0;
}