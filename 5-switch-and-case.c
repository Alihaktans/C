#include <stdio.h>

int main(){

    /* Switch =  else if yerine kullanabileceğimiz alternatif bir durumdur */

   char grade;

   printf("\nNotunuzu giriniz: ");
   scanf("%c", &grade);

   switch(grade/*Expressions*/){
      case 'A': /* condition(Koşul) */
         printf("Mukemmel\n"); //? code (Çalışcak kod) */
         break; //! Değer sağlanır ise durdurur.
      case 'B': /* condition(Koşul) */
         printf("Notun basarili\n"); //? code (Çalışcak kod) */
         break;
      case 'C': /* condition(Koşul) */
         printf("Notun iyi\n"); //? code (Çalışcak kod) */
         break;
      case 'D': /* condition(Koşul) */
         printf("En azindan F degil\n"); //? code (Çalışcak kod) */
         break;
      case 'F': /* condition(Koşul) */
         printf("Basarisiz oldun\n"); //? code (Çalışcak kod) */
         break;
      default: //* Durum geçerli değil ise (Else gibi)
         printf("Gecerli bir not giriniz");
   }

    return 0;
}