#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a){
        float p = (a + b + c) / 2.0;
        float s = sqrt(p * (p - a) * (p - b) * (p - c));
        float R = (a * b * c) / (4 * s);
        printf("%.3f\n", R);
    }else{
        printf("Khong phai 3 canh cua tam giac\n");
    }
}