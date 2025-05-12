#include <stdio.h>  
#include <math.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int cv = (a+b)*2;
    int dt = a*b;
    printf("%d %d", cv, dt);
    return 0;
}