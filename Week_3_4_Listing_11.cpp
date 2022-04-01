// Week_3_4_Listing_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float f, x;
    cout << "x: "; cin >> x;
    f = x * pow(sin(x), 2); if (x < 1) cout << "f: " << f;
    f = exp(x); if (x >= 2) cout << "f: " << f;
    _getch();
    return 0;
}