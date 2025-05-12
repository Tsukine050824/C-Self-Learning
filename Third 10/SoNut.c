#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>


int main (){
    int n, nut, sum = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;

    }
    nut = sum % 10;
    if (nut == 9)
    {
        printf("%d\n", nut);
        printf("may man");
    } else {
        printf("%d\n", nut);
        printf("chua may man");
    }
    return 0;   
}