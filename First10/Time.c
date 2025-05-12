#include <stdio.h>
#include <math.h>

int main(){
    int giay;
    scanf("%d", &giay);
    int gio = giay / 3600;
    int phut = (giay % 3600) / 60;
    int giayConLai = giay % 60;
    printf("%d:%d:%d\n", gio, phut, giayConLai);
    return 0;
}