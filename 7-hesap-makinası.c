#include <stdio.h>

int main(){

   char operator;
   double num1;
   double num2;
   double result;

   printf("\nHangi islemi yapmak istiyorsun? (+  -  *  /): ");
   scanf("%c", &operator);

   printf("\n 1. Sayiyi giriniz: ");
   scanf("%lf", &num1);

   printf("\n 2. Sayiyi giriniz ");
   scanf("%lf", &num2);

   switch(operator){
      case '+':
         result = num1 + num2;
         printf("\nSonuc = %lf", result);
         break;
      case '-':
         result = num1 - num2;
         printf("\nSonuc = %lf", result);
         break;
      case '*':
         result = num1 * num2;
         printf("\nSonuc = %lf", result);
         break;
      case '/':
         result = num1 / num2;
         printf("\nSonuc =%lf", result);
         break;
      default:
         printf("%c gecerli bir islem degil", operator);
   }

   return 0;
}