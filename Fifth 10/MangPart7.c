#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    
#include <math.h>

int main(){
    int n;
    int a[100];
    int max,posi;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max= a[0];
    posi = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            posi = i;
        }
    }
    printf("%d %d\n", max, posi);
    return 0;
}