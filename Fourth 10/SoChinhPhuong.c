#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int SoChinhPhuong(int n) {
    int m = sqrt(n);
    return m * m == n;
}

int main(){
    int n;
    scanf("%d", &n);
    if (n >= 0 && SoChinhPhuong(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}