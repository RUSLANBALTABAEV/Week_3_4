// Week_3_4_Task_2_Listing_19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int d;
	cout << "По заданному номеру дня можно узнать часы работы фирмы, если хотите то введите номер: "; cin >> d;

	switch (d)
	{
	case 1: cout << "В понедельник фирма работает с 9-00 до 16-00 "; break;
	case 2: cout << "Во вторник фирма работает c 8-00 до 19-00 "; break;
	case 3: cout << "В среду фирма работает с 8-00 до 19-00 "; break;
	case 4: cout << "В четверг фирма работает с 8-00 до 19-00 "; break;
	case 5: cout << "В пятницу фирма работает с 8-00 до 19-00 "; break;
	case 6: cout << "В субботу фирма работает с 10-00 до 15-00 "; break;
	case 7: cout << "Воскресенье выходной "; break;
	default: cout << "Данный номер дня не определен! "; break;
	}
	_getch();
	return 0;
}