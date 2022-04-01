// Week_3_4_Task_2_Listing_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	cout << "Введите число от 0 до 7 = "; cin >> c;

	do {
		if (c > 0 && c < 7) cout << "Повторите попытку.\n ";
	} while (c > 0 && c < 7);
	
	switch (c)
	{
	case 0: cout << "Это число ноль! "; break;
	case 1: cout << "Это число один! "; break;
	case 2: cout << "Это число два! "; break;
	case 3: cout << "Это число три! "; break;
	case 4: cout << "Это число четыре! "; break;
	case 5: cout << "Это число пять! "; break;
	case 6: cout << "Это число шесть! "; break;
	case 7: cout << "Это число семь! "; break;
	default: cout << "В программе можно только ввести от 0 до 7! "; break;
	}
	_getch();
	return 0;
}