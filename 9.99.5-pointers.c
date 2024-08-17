#include <stdio.h>

void printAge(int *pAge){
   printf("Sen %d yasindasin\n", *pAge);
}

int main()
{
   // pointer = başka bir değişkenin (diziye vs). Bir bellek adresi tutan "değişken benzeri" referans.
   //           bazı görevler işaretçiler ile daha kolay gerçekleştirilir
   //           * = işaretçiye değişkenin değerini verir
   //           & = işaretçiye değişkenin adresini verir

   int age = 20;
   int *pAge = NULL;
   pAge = &age;

 /*   printf("Age adres: %p\n", &age);
   printf("pAge saklanan adres: %p\n", pAge);

   printf("Age boyutu: %d bytes\n", sizeof(age));
   printf("pAge boyutu: %d bytes\n", sizeof(pAge));

   printf("Age degeri: %d\n", age);
   printf("pAge saklanan degeri: %d\n",*pAge); */

   printAge(pAge);


   return 0;
}