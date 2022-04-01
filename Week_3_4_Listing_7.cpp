// Week_3_4_Listing_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a1, a2, x, y;
	cout << "a1: "; cin >> a1;
	cout << "a2: "; cin >> a2;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;
	if (pow(a1 - x, 2) + pow(a2 - y, 2) <= 16) cout << "Принадлежит ";
	else cout << "Не принадлежит ";
	if (pow(a1 - x, 2) + pow(a2 - y, 2) <= 1) cout << "Принадлежит ";
	else cout << "Не принадлежит ";
	_getch();
	return 0;
}