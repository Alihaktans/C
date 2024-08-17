#include <stdio.h>
//! Void ile Main'in dışına fonksiyon oluşturulur!
//* Ardından fonksiyon adı verilir. Süslü parentez içine fonksiyon yazılır ve Main içinde "adı();" olarak çağırılır.

void cafer (){
    printf("\n Benim adim Cafer");
    printf("\n Boyum 1.10");
    printf("\n Kilom 25");
    printf("\n Goz rengimi bilmiyorum.\n");
}

int main(){
    
    cafer(); //? Çağırıldı...
    return 0;
}