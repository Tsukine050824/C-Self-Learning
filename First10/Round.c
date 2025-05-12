#include <stdio.h>
#include <math.h>

int main(){
    int r;
    scanf("%d", &r);
    float cv = r*2*3.14;
    float dt = r*r*3.14;
    printf("%.2f %.2f", cv, dt);
    return 0;
}