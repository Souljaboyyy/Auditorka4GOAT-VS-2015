#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double Pi = 3.1415926535;
double sqrt2 = 1.414213;
int main() {
	double garden, ver;
	double result;
	scanf_s("%lf", &garden);
	scanf_s("%lf", &ver);
	if (ver <= (garden / 2)) {
		result = Pi * pow(ver, 2);
	}
	if (((garden / 2) * sqrt2) <= ver) {
		result = pow(garden, 2);
	}
	if ((((garden / 2) * sqrt2) > ver) && (ver > (garden / 2))) {
		float s;
		double a;
		garden /= 2;
		a = 2 * garden*sqrt((ver - garden)*(ver + garden)) / pow(ver,2);
		s = ver * ver*(asin(a) - a);
		result = Pi * (ver * ver) - (2 * s);
	}
	printf("%0.3lf\n", result);
	system("pause");
	return 0;
}