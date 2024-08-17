#include <stdio.h>

void birthday(char x[] , int y) //* Parametrelerde burada yazılır. Argümandan farklı olarak türleride yazılır.
{
   printf("\nIyi ki dogdun! %s", x);
   printf("\n%d yasina girdin", y);
}

int main()
{
 
  char name[] = "Alper";
  int age=20;
        //* Argümanlar bu parentezlerin içine gelir.
   birthday(name, age);
   birthday("Sude", 21);

   return 0;
}