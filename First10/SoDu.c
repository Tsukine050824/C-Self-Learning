#include <stdio.h>
#include <math.h>

int main(){
    int T, HS;
    scanf("%d %d", &T, &HS);
    int soTao = T / HS;
    int soDu = T % HS;
    printf("%d %d\n", soTao, soDu);
    return 0;

}