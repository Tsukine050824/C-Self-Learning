#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int a[100];

    // Nhập số phần tử
    scanf("%d", &n);

    // Nhập mảng
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sắp xếp mảng theo thứ tự tăng dần (Bubble Sort)
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                // Hoán đổi
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // In mảng sau khi sắp xếp
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
