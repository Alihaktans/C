#include <stdio.h>
#include <string.h>

int main(){
    //* While Döngüsü= Koşul doğru olana kadar bir parça kodun tekrarlanması.

    char name[25];
    printf("\n Adin ne ?:");
    fgets(name, 25, stdin);
    name[strlen(name)-1]= '\0';
    printf("Merhaba %d", name);
    return 0 ;
}