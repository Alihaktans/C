#include <stdio.h>

int main(){
    const double PI = 3.14159; //* Pi değeri sabit olduğu için const yaptık.
    double radius;
    double circumfrences ;
    double area;

    printf("\n Dairenin yaricapini giriniz:");
    scanf("%lf", &radius);

    circumfrences = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\n Dairenin cevresi = %lf", circumfrences);
    printf("\n Dairenin alani = %lf", area);

    return 0;
}