#include <stdio.h>
#include <ctype.h> //* Küçük F veya Küçük C girilince hata veriyor ve biz bunu istemiyoruz.Bundan dolayı bu kütüphane kullanılır.

int main(){
char unit; //Birim
float temp; // Değer

printf("\nSicaklik birimini giriniz (F) veya (C):");
scanf("%c", &unit);
unit = toupper(unit) ; //! Ctype.h kütüphanesinin özelliği  Küçük harfleride kabul ediyor...

if (unit == 'C'){
printf("\nCelcius cinsinden sicakligi giriniz: ");
scanf("%f", &temp);
temp = (temp * 9 / 5) + 32;
printf("\nSicaklik fahreneit cinsinden: %.1f", temp); //? Virgülden sonra sadece bir basamak gösterecek.
}
else if(unit == 'F'){
printf("\nFahreneit cinsinden sicakligi giriniz: ");
scanf("%f", &temp);
temp = ((temp - 32) * 5) / 9;
printf("\nSicaklik Celsius cinsinden : %.1f", temp);
}
else{
printf("n %c gecerli bir birim degil", unit);
}
return 0;
}