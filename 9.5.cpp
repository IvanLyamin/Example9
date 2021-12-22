

#include <iostream>

int main()
{
	int Year = 1500;// Ввод года
	int Cent = ((Year - 1) / 100) + 1;//Нахождение соответствующего Века
	printf_s("%i", Cent);
	return  0;
}