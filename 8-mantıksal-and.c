#include <stdio.h>
#include <stdbool.h> //* Boolean değerleri kullanmak için.

int main(){
//! mantıksal operatörler = && (AND) 2 veya daha fazla koşulun aynı anda doğru olduğunu kontrol ederken kullanılır.
float temp= 25;
bool sunny = true;
if(temp >= 0 && temp <= 30 && sunny)/* Sıcaklık 0 dan büyük VE 30 dan küçük VE güneşli*/
{
printf("\nHava gayet iyi");
}
else{
printf("\nHava kotu durumda");
}

return 0;
}