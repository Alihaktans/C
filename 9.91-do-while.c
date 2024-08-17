#include <stdio.h>

int main()
{
   // while döngüsü = koşulu kontrol eder, eğer doğruysa kod bloğunu çalıştırır.
   // do while döngüsü = ilk önce kodu çalıştır, ardından koşulu kontrol eder.

   int number = 0;
   int sum = 0;

   
   do{
      printf("0\'dan buyuk bir sayi giriniz");
      scanf("%d", &number);

      if(number > 0){
         sum += number;
      }
   }while (number>0);
   
   printf("toplam: %d", sum);

 
}