#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
int main()
{
    int n, i, count = 0;;
    int a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
        
    // The code above counts the number of positive integers in the array a.
}