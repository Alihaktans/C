#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

   int max = 100;
   int min = 1;
   int tahmin;
   int tahminler;
   int cevap;

   srand(time(0));

   cevap = (rand()% max)+ min;


   do{
      printf("Bir sayi giriniz: ");
      scanf("%d", &tahmin);
      if(tahmin > cevap){
         printf("Tahmininiz sayidan daha yuksek!\n");
      }
      else if(tahmin < cevap){
         printf("Tahmininiz sayidan daha kucuk!\n");
      }
      else{
         printf("Dogru bildin!\n");
      }
      tahminler++;
   }while(tahmin != cevap);


   printf("---------------------------\n");
   printf("cevap = %d \n", cevap);
   printf("Tahmin sayiniz= %d\n", tahminler);
   printf("---------------------------\n");

   

   return 0;
}