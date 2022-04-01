// Week_3_4_Task_2_Listing_23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "N = "; cin >> N;
	do {
		if (N > 0 && N < 5);
	} while (N > 0 && N < 5);

	switch (N)
	{
	case 0: cout << "Ноль! "; break;
	case 1: cout << "Один! "; break;
	case 2: cout << "Два! "; break;
	case 3: cout << "Три! "; break;
	case 4: cout << "Четыре! "; break;
	case 5: cout << "Пять! "; break;
	default: cout << "Найдите квадрат этого числа! "; break;
	}
	return 0;
}