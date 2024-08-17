#include <stdio.h>

enum Month{Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12};

int main()
{
   // enum = Değişkenlerin alabileceği değerlerin sabit olduğu durumlarda programı daha okunabilir hale getirmek için kullanılır

   enum Month thisMonth;
   thisMonth = Jun;

   if(thisMonth != 6 && thisMonth != 7 && thisMonth !=8){
      printf("ARGEM zamani!");
   }
   else{
      printf("Su an yaz tatilindesin git!");
   }


   return 0;
}