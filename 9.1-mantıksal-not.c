#include <stdio.h>
#include <stdbool.h> //* Boolean değerleri kullanmak için.
 
int main(){
 
    // mantıksal operatörler = ! (NOT) koşulları tersine çevirirken kullanılır.
    
    bool sunny = false;
    
    if(!sunny)// Koyduğumuz ünlem ile değil anlamı katıyoruz.
    {
        printf("\nHava bulutlu!");
    }
    else{
        printf("\nHava gunesli!");
    }

    return 0;
}