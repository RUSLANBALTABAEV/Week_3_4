// Week_3_4_Task_2_Listing_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;

int main()
{
    int C;

    setlocale(LC_ALL, "Russian");
    do {
        cout << "Введите C = "; cin >> C;
        if (C > 5)
            cout << "Число больше 5. Повторите попытку и у вас получится: ";
    } while (C > 5);

    switch (C)
    {
    case 0: cout << "C = 0 Ноль. "; break;
    case 1: cout << "C = 1 Один. "; break;
    case 2: cout << "C = 2 Два. "; break;
    case 3: cout << "C = 3 Три. "; break;
    case 4: cout << "C = 4 Четыре. "; break;
    case 5: cout << "C = 5 Пять. "; break;
    default: cout << "Число отрицательное. "; break;
    }

    _getch();
    return 0;
}