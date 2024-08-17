#include <stdio.h>

int main()
{
   // 2 boyutlu dizi = Matrix, veri tablosu gibi yapılarda kullanılır

   /*
   int ch[2][3] = {1, 2, 3},
                        {4, 5, 6}};
   */

   int ch[2][3];

   int rows = sizeof(ch)/sizeof(ch[0]);
   int columns = sizeof(ch[0])/sizeof(ch[0][0]);

   printf("rows: %d\n", rows);
   printf("columns: %d\n", columns);

   ch[0][0] = 1;
   ch[0][1] = 2;
   ch[0][2] = 3;
   ch[0][3] = 7;
   ch[1][0] = 4;
   ch[1][1] = 5;
   ch[1][2] = 6;
   ch[1][3] = 8;


   for(int i = 0; i < rows; i++)
   {
      for(int j = 0; j < columns; j++)
      {
         printf("%d ", ch[i][j]);
      }
      printf("\n");
   }

   return 0;
}