// Week_3_4_Task_2_Listing_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float f, x;
	cout << "x: "; cin >> x;
	f = 2 * pow(sin(x), 2); if (-1 <= x <= 1) cout << "f: " << f;
	f = 3 * pow(x, 3); if (-10 < x < -1) cout << "f: " << f;
	else if (x < 0)
	_getch();
	return 0;
}