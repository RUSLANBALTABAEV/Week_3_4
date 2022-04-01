// Week_3_4_Listing_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, r1, r2;
	cout << "x1: "; cin >> x1;
	cout << "x2: "; cin >> x2;
	cout << "y1: "; cin >> y1;
	cout << "y2: "; cin >> y2;
	cout << "r1: "; cin >> r1;
	cout << "r2: "; cin >> r2;

	if (x1 == x2 && y1 == y2 && r1 == r2)
	{
		cout << -1 << endl;
	}
	else if (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == r1 + r2 
		|| sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + r2 == r1 || sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + r1 == r2)
	{
		cout << "Имеет точек: " << 1 << endl;
	}
	else if (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) > r1 + r2)
	{
		cout << "Имеет точек: " << 0 << endl;
	}
	else if (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + r2 < r1 || sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + r1 < r2)
	{
		cout << "Имеет точек: " << 0 << endl;
	}
	else
	{
		cout << "Имеет точек: " << 2 << endl;
	}
	_getch();
	return 0;
}