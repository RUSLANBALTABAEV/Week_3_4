// Week_3_4_Listing_15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	float a1, a2, r, x0, y0, z0, x, y, z, f;
    
    cout << "Введите значение x0: "; cin >> x0;
    cout << "Введите значения y0: "; cin >> y0;
    cout << "Введите значения z0: "; cin >> z0;
    cout << "Введите радиус сферы: "; cin >> r;
    cout << "Введите значения х: "; cin >> x;
    cout << "Введите значения у: "; cin >> y;
    cout << "Введите значения z: "; cin >> z;

    f = pow(x0 - x, 2) + pow(y0 - y, 2) + pow(z0 - z, 2);
    if (f <= pow(r, 2)) cout << "Точка находится внутри сферы: ";
    else cout << "Точка не лежит внутри сферы: ";
	_getch();
	return 0;
}