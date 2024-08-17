#include <stdio.h>
#include <string.h>

int main()
{
   char games[][15] = {"Valorant","Counter","Tft"};

   //games[0] = "Metin2";
   strcpy(games[0], "Metin2");

   for(int i = 0; i < sizeof(games)/sizeof(games[0]); i++)
   {
      printf("%s\n", games[i]);
   }

   return 0;
}