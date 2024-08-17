#include <stdio.h>

int main()
{
   // continue = kodun geri kalanını atlar ve döngünün sonraki tekrarına geçer
   // break = döngüden veya switch yapısından çıkar

   
   for(int i = 1; i<=20; i++ ){
    //? Basit bir şekilde belirli bir şey atlama komutu.
      if(i==10){
         break;
      }

      printf("%d\n",i);
   }


   return 0;
}