﻿// 9.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int N = 228;//Задаем кол - во секунд 
	int Sec = N % 60;//Находим остаток от деления
	printf_s("%i", Sec);//Выводим ответ на экран
	return 0;
}


