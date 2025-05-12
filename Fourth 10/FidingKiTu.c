#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[1000];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);

    char c; 
    scanf("%c", &c); // Nhap ky tu can tim
    for (int i = 0; i < n; i++)
    {
        if (str[i] == c) // So sanh ky tu
        {
            printf("Ky tu '%c' xuat hien tai vi tri %d\n", c, i);
            break; // Thoat vong lap khi tim thay ky tu
        }
    }
    
}