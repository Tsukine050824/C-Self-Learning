#include <stdio.h>

int isPrime(int a) {
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i * i <= a; i++) {  // Tối ưu vòng lặp (i <= sqrt(a))
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int found = 0; // Biến kiểm tra có số nguyên tố hay không
    for (int i = n; i <= m; i++) {
        if (isPrime(i)) {
            if (found) {
                printf(" ");
            }
            printf("%d", i);
            found = 1;
        }
    }

    if (!found) {
        printf("-");
    }

    printf("\n"); // Xuống dòng sau khi in kết quả
    return 0;
}
