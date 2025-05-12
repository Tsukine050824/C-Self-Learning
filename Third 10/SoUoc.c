#include <stdio.h>

int tonguoc(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += 1;
        }
    }
    return sum;
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d", tonguoc(n));
    
}