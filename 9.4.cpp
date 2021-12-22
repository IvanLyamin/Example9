

#include <iostream>

int main()
{
    int A = 12;//Ввод сторон фигур
    int B = 23;
    int C = 5;
    int nA = A / C;//Кол-во квадратов по вертикали
    int nB = B / C;//Кол-во квадратов по горизонтали
    int N = nA * nB;//Общее кол-во квадратов
    float S = (A * B) - (pow(C, 2) * N);//Свободная площадь
    printf_s("%i\n%f", N, S);//Вывод значений
    return 0;

}
