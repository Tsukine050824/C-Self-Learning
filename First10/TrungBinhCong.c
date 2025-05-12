#include <stdio.h>
#include <math.h>

int main(){
    double Toan, Van, AnhVan;
    scanf("%lf %lf %lf", &Toan, &Van, &AnhVan);
    float TrungBinhCong = (Toan * 2 + Van * 2 + AnhVan) / 5.0;
    printf("%.1f\n", TrungBinhCong);
    return 0;
}