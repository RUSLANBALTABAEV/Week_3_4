// Week_3_4_Task_2_Listing_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int C;

	do {
		cout << "Введите C: "; cin >> C;
		if ((C < -7) || (C > 7)) cout << "Введено неверно. Введите еще раз. ";
	} while ((C < -7) || (C > 7));

	switch (C)
	{
	case -7: cout << "C = -7 Минус семь. "; break;
	case -6: cout << "C = -6 Минус шесть. "; break;
	case -5: cout << "C = -5 Минус пять. "; break;
	case -4: cout << "C = -4 Минус четыре. "; break;
	case -3: cout << "C = -3 Минус три. "; break;
	case -2: cout << "C = -2 Минус два. "; break;
	case -1: cout << "C = -1 Минус один. "; break;
	case 0: cout << "C = 0 Ноль. "; break;
	case 1: cout << "C = 1 Один. "; break;
	case 2: cout << "C = 2 Два. "; break;
	case 3: cout << "C = 3 Три. "; break;
	case 4: cout << "C = 4 Четыре. "; break;
	case 5: cout << "C = 5 Пять. "; break;
	case 6: cout << "C = 6 Шесть. "; break;
	case 7: cout << "C = 7 Семь. "; break;
	default: cout << "Неизвестная цифра. "; break;
	}

	_getch();
	return 0;
}