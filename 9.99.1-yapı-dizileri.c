#include <stdio.h> 
#include <string.h>

struct Youtuber{
   char name[25];
   float sub;
};


int main() 
{
  
  struct Youtuber youtuber1 = {"Muhsin Göttoş",338};
  struct Youtuber youtuber2 = {"Enis Kirazoglu",1.170000};
  struct Youtuber youtuber3 = {"At0m",387.000};

  struct Youtuber youtubers[] = {youtuber1,youtuber2,youtuber3};

  for(int i = 0; i < sizeof(youtubers)/sizeof(youtubers[0]); i++){
         printf("Kanal adi = %-12s\t", youtubers[i].name);
         printf("Abone sayisi= %f\n", youtubers[i].sub);

  }


   return 0; 
}