#include <stdio.h>

double square(double x) //* Void kullanmadık çünkü return bize integer bir değer dönmüyor.
{
	return x*x;
}

int main()
{

	double a = square(3.1);
	printf("%lf", a);

   return 0; //? Bu return mainin çalışma durumunu belirliyor. 0 yerine 1 olsaydı hata vericekti. Mesela kodda herhangi bir hata olunca error kısmında return 1 olarak görebilirsiniz.
}