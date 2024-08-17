#include <stdio.h>

int main()
{
   //nested loop = içe içe olan döngülerdir.

   int rows;
   int columns;
   char symbol;

   printf("\nSatir sayisini giriniz: ");
   scanf("%d", &rows);
   printf("\nSutun sayisini giriniz: ");
   scanf("%d", &columns);

   scanf("%c"); //

   printf("\nSembol giriniz: ");
   scanf("%c", &symbol);

   for(int i=1; i<=rows; i++){

      for(int j=1; j<=columns; j++){
         printf("%c", symbol);
      }

   printf("\n");

   }

   return 0;
}