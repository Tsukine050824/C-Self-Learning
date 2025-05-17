#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
int main()
{
    int n, i, sum = 0, perrorm = 0;
    ;
    int a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0)
        {
            printf("%d ", a[i]);
            sum += a[i];
            perrorm = 1;
        }
    }
    if (perrorm == 0)
    {
        printf("-\n");
    }
    else
    {
        printf("\n");
    }
    printf("%d\n", sum);
    return 0;

    // The code above counts the number of positive integers in the array a.
}