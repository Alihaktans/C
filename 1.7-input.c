#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    int age;
    printf("Adin ne\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin); // ilk başta değeri giriyoruz ondan sonra sınırı belirliyoruz. Ve Standart İnput, Output anlamında "stdin" yazıyoruz.
    //? fgets kendiliğinden bir satır oluşturuyor ve bu kod o boş satırı siler. İlerde detaylı gelicek.
    name[strlen(name)-1] = '\0';
    printf("Kac yasindasiniz?\n");
    scanf("%d", &age);

    printf("Merhaba %s, nasilsin?\n", name);
    printf("%d yasindasin...", age);
    //! Scanf boşlıkları algılamıyor ve bir sonraki sorunun cevabı olarak alıyor.
    return 0;
}