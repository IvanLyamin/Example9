

#include <iostream>

int main()
{
    int K = 140;//ВВод К-го дня года
    int Day = K % 7;//Нахождение порядкового номера
    printf_s("%i", Day);//Вывод на экран номера дня недели
    return 0;
}
