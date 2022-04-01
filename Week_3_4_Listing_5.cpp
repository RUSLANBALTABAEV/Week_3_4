// Week_3_4_Listing_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	int count = 0;
	cout << "Первое число: "; cin >> a;
	cout << "Второе число: "; cin >> b;
	cout << "Третий число: "; cin >> c;
	if (a % 2 != 0)
		count++;
	if (b % 2 != 0)
		count++;
	if (c % 2 != 0)
		count++;
	if (count > 1)
		cout << "Да ";
	else
		cout << "Нет ";
	_getch();
	return 0;
}