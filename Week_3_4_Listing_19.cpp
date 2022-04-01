// Week_3_4_Listing_19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	cout << "Год: "; cin >> year;
	if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) cout << "Високосный год! ";
	else cout << "Обычный год!";
	_getch();
	return 0;
}