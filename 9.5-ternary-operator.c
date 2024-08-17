#include <stdio.h>

//? Burada aşağıda kullanmak için fonksiyon oluşturuyoruz.
int findMax(int x, int y){

    //* İf Else olarak kullanımı.
    // if(x>y){
    //     return x;
    // }else{
    //     return y;
    // }

    return(x>y) ? x : y;

}


int main(){

    //!Ternary Operator = Bir değeri döndürürken if-else yerine kullanılacak kısa yol.
    //* (Koşul) ? Doğruysa Değer : Yanlışsa Değer

    //? İki sayı arasında büyük ve küçüğü bulcak ternary kod.
    
    int max = findMax(5,4);
    printf("%d", max);


    return 0;
}