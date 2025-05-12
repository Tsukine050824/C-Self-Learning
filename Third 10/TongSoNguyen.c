#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int sum = 0;
    for (int i = n; i <= m; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}