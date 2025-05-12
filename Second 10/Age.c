#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int age;
    scanf("%d", &age);
    if (age > 0 && age <= 150){
        if (age < 11){
            printf("Thieu nhi");
        } else if ( age > 11 && age <= 25){
            printf("Thieu nien");
        } else if (age > 25 && age > 50){
            printf("Trung nien");
        } else {
            printf("Nguoi gia");
        } 
    } else {
        printf("Tuoi khong hop le");
    }
    return 0;
}