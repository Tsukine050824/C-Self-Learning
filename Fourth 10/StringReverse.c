#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char str[1000];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    int left = 0;
    int right = strlen(str) - 1;

    if (str[right] == '\n') {
        str[right] = '\0'; // Remove newline character
        right--;
    }

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    printf("Chuoi dao nguoc: %s\n", str);
    return 0;
}