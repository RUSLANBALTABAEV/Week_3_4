// Week_3_4_Task_2_Listing_25_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int m;

	cout << "Введите месяц: "; cin >> m;

	switch (m)
	{
	case 1: cout << "В январе 31 дней "; break;
	case 2: cout << "В феврале 29 дней "; break;
	case 3: cout << "В марте 31 дней "; break;
	case 4: cout << "В апреле 30 дней "; break;
	case 5: cout << "В мае 31 дней "; break;
	case 6: cout << "В июне 30 дней "; break;
	case 7: cout << "В июле 31 дней "; break;
	case 8: cout << "В августе 31 дней "; break;
	case 9: cout << "В сентябре 30 дней "; break;
	case 10: cout << "В октябре 31 дней "; break;
	case 11: cout << "В ноябре 30 дней "; break;
	case 12: cout << "В декабре 31 дней "; break;
	default: cout << "Номер месяца не определен! "; break;
	}
	_getch();
	return 0;
}