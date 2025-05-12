#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>   
#include <ctype.h>   // for tolower function

int main(){

    char str[1000];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
       if (islower(str[i])) 
       {
              str[i] = toupper(str[i]); // Chuyen tu thuong sang hoa
         } 
         else if (isupper(str[i])) 
         {
              str[i] = tolower(str[i]); // Chuyen tu hoa sang thuong
       }
       
    }

    printf("Chuoi sau khi chuyen doi: %s\n", str);
    return 0;
    
    
}