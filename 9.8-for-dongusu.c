#include <stdio.h>

int main (){
    //* For Döngüsü = Bir parça kodun belirli limitte tekrar etmesi.

    for (int i = 0; i <= 10; i++) //? İlk parametre döngü için eleman tanımlar, ikinci kısım (Noktalı vigül ile ayrılıyor.) değerin sonunu belirler (Örnek; 10 olana kadar), üçüncü kısım ise her defasında yapılması gereken durumu belirler.

    {
        /* code */
        printf("%d\n", i);
    }
    
    return 0 ;
}