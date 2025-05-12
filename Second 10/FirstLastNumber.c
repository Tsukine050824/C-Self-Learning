#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, First2Digit, Last2Digit;
    scanf("%d", &n);
    First2Digit = n;
    Last2Digit = n;
    while(First2Digit >= 100){
        First2Digit = First2Digit / 10;
    }
    while(Last2Digit >= 100){
        Last2Digit = Last2Digit % 100;
    }
    printf("%02d %02d\n", First2Digit, Last2Digit);
    return 0;
}