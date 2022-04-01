// Week_3_4_Task_2_Listing_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;

	do {
		cout << "Введите количество граней: ";
		cin >> n;

		if ((n < 4) || (n > 21)) cout << "Введено неверно. Введите еще раз. ";

	} while ((n < 4) || (n > 21));

	switch (n)
	{
	case 4: cout << "Тетраэдр. "; break;
	case 6: cout << "Гексаэдр. "; break;
	case 8: cout << "Куб"; break;
	case 12: cout << "Октаэдр. "; break;
	case 20: cout << "Икосаэдр. "; break;
	default: cout << "Неизвестная цифра. "; break;
	}

	_getch();
	return 0;
}