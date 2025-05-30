#include <stdio.h>

int isPrime(int n){
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if (isPrime(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}