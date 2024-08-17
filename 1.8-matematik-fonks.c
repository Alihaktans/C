#include <stdio.h>
#include <math.h> //Matematik kütüphanesi

int main(){
    double A = sqrt(16); //? Karekök alır
    double B = pow(2,3); //? Üssü alma. İlk olarak taban ikincide üssü.
    int C = round(3.25); //? Yakın sayıya yuvarlama.
    int D = ceil(3.25); //? Üst sayıya yuvarlama.
    int E = floor(3.99); //? Alt sayıya yuvarlama.
    double F = fabs(-255); //? Mutlak değer hesaplama.
    double G = log(5); //? Logaritma hesaplama
    double H = sin(45); //? Trigonometrik fonksiyonlar
    double I = cos(45);
    double J = tan(45);

    // printf("\n%lf", G);
    // printf("%d", E);


    printf("\n %lf", H);
    printf("\n %lf", I);
    printf("\n %lf", J);
    return 0;
}