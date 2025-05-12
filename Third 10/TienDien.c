#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
    int n, cost = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 50){
        cost = 600 * n;
    } else if ( n >= 51 && n <= 100){
        cost = 600 * 50 + (n - 50) * 800;
    } else if ( n >= 101 && n <= 200)
    {
        cost = 600 * 50 + 800 * 50 + (n - 100) * 1100;
    } else{
        cost = 600 * 50 + 800 * 50 + 1100 * 100 + (n - 200) * 1500;
    }
    printf("%d\n", cost);
    return 0;
    
    
        
    
    
}