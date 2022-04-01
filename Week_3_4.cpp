// Week_3_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float S, t, v;
	cout << "S: "; cin >> S;
	cout << "t: "; cin >> t;
	cout << "v: "; cin >> v;
	if (S / v < t) cout << "рано ";
	else if (S / v > t) cout << "поздно ";
	else cout << "во время ";
	_getch();
	return 0;
}