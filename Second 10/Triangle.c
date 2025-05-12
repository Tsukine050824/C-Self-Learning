#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int a, b, c;
    float cv,dt,p;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Day la 3 canh cua mot tam giac\n");
        cv = a + b + c;
        p = cv / 2;
        dt = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%.2f %.2f", cv, dt);
    } else {
        printf("Day khong phai la 3 canh cua mot tam giac");
    }
    
}