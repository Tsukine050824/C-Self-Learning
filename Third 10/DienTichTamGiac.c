#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, h;
    scanf("%d %d", &a, &h);
    float S = (float)a * h / 2;
    printf("%.2f\n", S);
    return 0;
}