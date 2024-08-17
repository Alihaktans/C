#include <stdio.h>

void hello(char[], int); 

//? Fonksiyon Prototipi. Bunun sayesinde direk hata vericek. Çünkü burda fonksiyonun çalışması için gerekli değerleri verdik.

// void hello(char name[], int age){
//     printf("\nMerhaba %s", name);
//     printf("\n%d yasindasin", age);
// }

int main(){

    /*
    Fonksiyon Prototipi

    Body partı olmadan, main öncesine tanımlama
    Bir fonksiyon çağırılırken doğru argümanların girilmesini sağlar 

    Önemli Notlar
    Bir çok C derleyicisi parametreleri kontrol etmez
    Eksik argümanlar beklenmeyen davranışlara sebep olur
    Argümanlar eksikse derleyicide hata alır.
    */

   char name[] = "Ahmet";
   int age = 20;

    //hello(name); //? Eksik argüman verdik bundan dolayı uyarı vericek ama yazdırıcak.
    //! Bu durumun olmaması için mainin üstüne fonksiyon prototipi yazılır.

    hello(name, age); //? Doğru Yöntem
    return 0;
}

void hello(char name[], int age){
    printf("\nMerhaba %s", name);
    printf("\n%d yasindasin", age);
}