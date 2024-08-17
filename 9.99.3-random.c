#include <stdio.h>
#include <stdlib.h> //* Modülleri kulanabilmek için.
#include <time.h> //* Zamanı kullanmak için.

int main()
{
   srand(time(0));

   int number1 = (rand() % 100) + 1;
   int number2 = (rand() % 10) + 1;
   int number3 = (rand() % 50) + 1;

   printf("%d\n", number1);
   printf("%d\n", number2);
   printf("%d\n", number3);

   return 0;
}