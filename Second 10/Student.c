#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double TBHKI, TBHKII, TBCN;
    scanf("%.1f %.1f", &TBHKI, &TBHKII);
    TBCN = (TBHKI + TBHKII * 2) / 3;
    printf("%.1f\n", TBCN);
    if (TBCN >= 8){
        printf("Gioi");
    } else if (TBCN >= 6.5 && TBCN < 8){
        printf("Kha");
    } else if (TBCN >= 5 && TBCN < 6.5){
        printf("Trung binh");
    } else if (TBCN < 5 && TBCN >= 3.5){
        printf("Yeu");
    } else
    {
        printf("Kem");
    }
    
    return 0;
}
