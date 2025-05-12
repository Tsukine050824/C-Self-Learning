#include <stdio.h>

int main(){
    int n, m, sum = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int count = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            count++;
        }
    }
    for (int j = n; j <= m; j++)
    {
        if (j % 2 == 0)
        {
            sum += j;
        }
    }
    printf("%d %d", count ,sum);
    return 0;
}