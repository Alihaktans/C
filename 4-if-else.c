#include <stdio.h>

int main(){
    int age;
    printf("Yasini gir");
    scanf("%d", age);

        //? 18 Yaş üztündekilerin katıldığı bir kurs için bu şekilde koşul tanımlanabilir.
    if (/* condition(Koşul) */ age >= 18){
        /* code (Çalışcak kod) */
        printf("Kursa kayit oldunuz...");
    }
    else if (age < 0){
        // Else if (Elif) başka bir koşul daha kontrol edilecek ise kullanılır.
        printf("Henüz Doğmadigin icin kayit olamazsin.");
    }
    else if (age == 0){
        printf("Daha yeni dogdugun icin olmaz.");
    }
    else{
        //Else herhangi bir koşul koymuyoruz çünkü if'in gerçekleşmediği durum için Else kullanılır.
        printf("Kursa kayit olmak icin yasiniz tutmuyor.");
    }
    
    return 0;
}