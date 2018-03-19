/*Переводит градусы по Фаренгейту в градусы по Цельсию*/
#include <stdio.h>
int main(void)
{ 
	float far, cel;
	far = 27;
    cel = (far - 32)/1.8;
    printf("27 degrees Fahrenheit is %.2f degrees Celsius\n", cel);
	return 0;
}