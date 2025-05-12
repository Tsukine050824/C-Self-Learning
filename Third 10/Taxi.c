#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, cost = 0;
    scanf("%d", &n);
    if (n == 1)
    {
        cost = n * 12000;
    } else if ( n >= 2 && n <= 30)    
    {
        cost = 12000 + (n - 1) * 10000;
    } else {
        cost = 12000 + 290000 + (n - 30) * 9000;
    }
    printf("%d\n", cost);
    return 0;
}