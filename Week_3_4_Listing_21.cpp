// Week_3_4_Listing_21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	float y, t;
	float a = -0.5;
	float b = 2;
	cout << "t: "; cin >> t;
	y = a * pow(t, 2) * log(t); if (1 <= t <= 2) cout << "y: " << y;
	else if (t < 1) cout << "y: " << y;
	y = exp(a * t) * cos(b * t); if (t > 2) cout << "y: " << y;
	_getch();
	return 0;
}	