#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int UCLN(int a, int b) {
    if (b == 0 || a == 0) {\
        // nếu a || b == 0 thì ucln = a + b
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
    
    
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ucln = UCLN(a, b);
    printf("%d", ucln);
    // printf("%d", UCLN(a, b));
    return 0;
}