#include <stdio.h>
#include <math.h>

int main(){

    //* Üçgenin kenarlarını tanımlıyoruz.
    double A ;
    double B ; 
    double C ; 

    printf("\n A kenarinin uzunlugunu giriniz:");
    scanf("%lf", &A);

    printf("\n B kenarinin uzunlugunu giriniz:");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);
    printf("\nC kenarinin uzunlugu : %.2lf", C);


    return 0;
}