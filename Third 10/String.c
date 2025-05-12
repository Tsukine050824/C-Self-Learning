#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    // Nếu chuỗi nhập bằng fgets có ký tự newline '\n', ta loại bỏ
    if (str[length - 1] == '\n') {
        length--;
    }

    printf("Tong so ky tu (bao gom ca dau cach): %d\n", length);
    return 0;
}
