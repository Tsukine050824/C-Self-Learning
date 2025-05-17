#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n, i, pos = 0, neg = 0;
    int a[100];
    int posi[100];
    int nega[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pos++;
            posi[pos - 1] = a[i];
        }
        else if (a[i] < 0)
        {
            neg++;
            nega[neg - 1] = a[i];
        }
    }
    printf("%d %d\n", pos, neg);
    if (pos == 0)
    {
        printf("-\n");
    } else{
        for (i = 0; i < pos; i++)
        {
           printf("%d ", posi[i]);
           if (i <  pos - 1)
           {
               printf(" ");
           }
        }
        printf("\n");
    }
    if (neg == 0)
    {
        printf("-\n");
    } else{
        for (i = 0; i < neg; i++)
        {
           printf("%d ", nega[i]);
           if (i <  neg - 1)
           {
               printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}