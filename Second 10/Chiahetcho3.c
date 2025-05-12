#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, check = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
            check = 1;
        }
        if (check == 0)
        {
            printf("-");
        }
    }
    return 0;
    
}