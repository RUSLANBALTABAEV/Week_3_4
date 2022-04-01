// Week_3_4_Listing_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float f, x;
    cout << "x: "; cin >> x;
    f = 2 * x * sqrt(x); if (x > 1) cout << "f: " << f;
    f = pow(x, 2) / 5; if (x <= 0) cout << "f: " << f;
    _getch();
    return 0;
}