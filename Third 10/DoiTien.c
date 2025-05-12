#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the area of a triangle given its vertices
int main(){
    int n;
    int to5, to2, to1;
    scanf("%d", &n);
    
    to5 = n / 5000;
    n = n % 5000;

    to2 = n / 2000;
    n = n % 2000;

    to1 = n / 1000;
    n = n % 1000;

    printf("%d %d %d\n", to5, to2, to1);
    return 0;
}