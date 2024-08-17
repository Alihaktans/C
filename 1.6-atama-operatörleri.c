#include <stdio.h>

int main(){
    //! Atama Operatörleri = Değişkenlere değer atamak için kullanılan simgelerdir.

    int x = 10;
     // x = x + 2; //? İkiside aynı anlamda fakat alttaki daha okunaklı ve kısa.
     x += 2;

    // x = x - 3; //? İkiside aynı anlamda fakat alttaki daha okunaklı ve kısa.
    x -= 3;

    //x = x * 4; //? İkiside aynı anlamda fakat alttaki daha okunaklı ve kısa.
    x *= 4;
    
    // x = x / 5; //? İkiside aynı anlamda fakat alttaki daha okunaklı ve kısa.
    x /= 5;

    // x = x % 2; //? İkiside aynı anlamda fakat alttaki daha okunaklı ve kısa.
    x %= 2;
    
    printf("%d", x);
    return 0;
}