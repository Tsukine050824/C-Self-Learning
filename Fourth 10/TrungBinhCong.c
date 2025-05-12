#include <stdio.h>
#include <stdlib.h>
#include <string.h> 




int Primus(int n){
    if (n < 2) return 0; // So nguyen duong nho hon 2 khong phai la so nguyen to
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return 0; // n chia het cho i, khong phai la so nguyen to
    }
    return 1; // n la so nguyen to
}



int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int sum = 0, count = 0;
    for (int i = m; i <= n; i++){
        if (Primus(i)){
            sum += i; // Tong cac so nguyen to
            count++; // Dem so luong so nguyen to
        }
    }
    if (count == 0){
        printf("-\n"); // Khong co so nguyen to nao trong khoang
    } else {
        printf("Trung binh cong cac so nguyen to trong khoang [%d, %d] la: %.2f\n", m, n, (float)sum / count);
    }
}