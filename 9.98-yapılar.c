#include <stdio.h>
#include <string.h>


struct Students{
   char name[15];
   int age;
};


int main()
{
    /*      struct = bir bellek bloğunda tek bir ad altında fiziksel olarak gruplandırılmış 
            değişkenler tanımlayan veri türüdür. */
            
      struct Students student1;
      struct Students student2;

      strcpy(student1.name, "Alper");
      student1.age = 20;

      strcpy(student2.name, "Eren");
      student2.age = 19;
      

      printf("%s\n", student1.name);
      printf("%d\n", student1.age);
      printf("*********************************\n");
      printf("%s\n", student2.name);
      printf("%d\n", student2.age);


   return 0;
}