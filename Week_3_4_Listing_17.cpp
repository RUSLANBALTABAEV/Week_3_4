// Week_3_4_Listing_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float h, w, r, min;
	cout << "Введите значения высоты: "; cin >> h;
	cout << "Введите значения ширины: "; cin >> w;
	cout << "Введите значения радиуса: "; cin >> r;
	h > w ? min = w : min = h;
	if (min > 2 * r) cout << "Мяч пролетит через забор! ";
	else cout << "Мяч НЕ долетит до забора! ";
	_getch();
	return 0;
}