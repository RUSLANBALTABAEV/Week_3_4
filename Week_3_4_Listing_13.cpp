// Week_3_4_Listing_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a1, a2, b1, b2, d1, d2;
	cout << "Координаты точки A: " << endl; cin >> a1 >> a2;
	cout << "Координаты точки B: " << endl; cin >> b1 >> b2;
	d1 = sqrt(pow(a1, 2) + pow(b1, 2));
	d2 = sqrt(pow(a2, 2) + pow(b2, 2));
	
	if (d1 > d2) cout << "Точка B дальше";
	else if (d1 > d2) cout << "Точка A дальше";
	if (d1 == d2) cout << "На одном расстоянии";

	_getch();
	return 0;
}