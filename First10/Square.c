#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Điền vào số cần tính: ");
    scanf("%d", &a);
    int cv = a*4;
    int dt = a*a;
    printf("%d %d", cv, dt);
    return 0;
}