// Week_3_4_Listing_23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Введите все стороны треугольника: "; cin >> a >> b >> c;
	if ((a < b + c) || (b < a + c) || (c < a + b)) {
		if (a == b && a == c && b == c) cout << "Равносторонний треугольник! ";
		else if (a == b || a == c || b == c) cout << "Равнобедренный треугольник! ";
		else cout << "Разносторонний треугольник! ";
	}

	_getch();
	return 0;
}