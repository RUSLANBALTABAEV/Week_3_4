// Week_3_4_Listing_25.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	float a, b, c, d, x1, x2;

	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	cout << "Введите c: "; cin >> c;
	d = pow(b, 2) - 4 * a * c;
	
	if (d > 0) {
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "x1 = " << x1;
		cout << "x2 = " << x2;
	}

	if (d == 0) {
		x1 = - (b / (2 * a));
		cout << "x1 = x2 = " << x1;
	}

	if (d < 0) {
		cout << "D < 0, Действительных корней уравнения не существует ";
	}
	_getch();
	return 0;
}