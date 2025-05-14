#include <stdio.h>

int main()
{
    int n, x, i, ViTri = -1;
    int a[100];

    // Nhập n và x trên cùng 1 dòng
    scanf("%d %d", &n, &x);

    // Nhập n phần tử của mảng
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Tìm x trong mảng
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            ViTri = i;
            break;
        }
    }

    // In kết quả
    if (ViTri != -1)
    {
        printf("Yes\n%d\n", ViTri);
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
