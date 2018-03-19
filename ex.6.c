/*Считает многочлен 3x^3 - 5x^2 + 6*/
#include <stdio.h>
int main(void)
{
	float x = 2.55;
	float polinom;
	polinom = 3*x*x*x - 5*x*x + 6;
	printf("polinom = %.3f\n", polinom);
	return 0;
}