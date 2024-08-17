#include <stdio.h> 
#include <string.h>

typedef struct {
   char nick[25];
   char password[15];
   int id;
}Login;

int main() 
{
   // typedef = struct tanımlarken kullandığımız bir anahtar kelime, daha kısa değişken tanımlarken kullanılabilir.

   Login account1 = {"alihaktans","ruhi123",564845215};

   printf("Kullanici adi= %s\n", account1.nick);
   printf("Sifre = %s\n", account1.password);
   printf("id= %d\n", account1.id);

  

   return 0; 
}