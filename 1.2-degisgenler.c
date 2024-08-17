#include <stdio.h>

int main(){
    /*
    Veriable = Verilere verilen addır.
    1) Ne tür olduğu
    2) İsim vermemiz lazım

    Tam sayı ! İnteger İnt
    Ondalıklı Sayılar ! Float float 
    Tek Harf ! Char char
    Tür Ad = Değer ;

    
    */
    int x = 123;
    float xp = 12.05;
    char server = 'A';
    char nick[] = "Alihaktans";

    printf("Merhaba %s", nick);  //! Char için %s
    printf("\n Suan %d levele sahipsin \n", x); //! İnteger için %d 
    printf("XP değerin %%%f \n ", xp); //! Float değer için %f (Place Holder)
    printf("%c sunucusunda oynuyorsun...", server);




    return 0;
}