// Week_3_4_Task_2_Listing_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	
	do {
		cout << "Вы сколько экзаменов: "; cin >> n;
		if (n < 1 && n < 25) cout << "Значение введено неверно. ";
	} while (n < 1 && n < 25);


	switch (n)
	{
	case 0: cout << "Мы успешно сдали 0 экзаменов"; break;
	case 1: cout << "Мы успешно сдали 1 экзаменов"; break;
	case 2: cout << "Мы успешно сдали 2 экзаменов"; break;
	case 3: cout << "Мы успешно сдали 3 экзаменов"; break;
	case 4: cout << "Мы успешно сдали 4 экзаменов"; break;
	case 5: cout << "Мы успешно сдали 5 экзаменов"; break;
	case 6: cout << "Мы успешно сдали 6 экзаменов"; break;
	case 7: cout << "Мы успешно сдали 7 экзаменов"; break;
	case 8: cout << "Мы успешно сдали 8 экзаменов"; break;
	case 9: cout << "Мы успешно сдали 9 экзаменов"; break;
	case 10: cout << "Мы успешно сдали 10 экзаменов"; break;
	case 11: cout << "Мы успешно сдали 11 экзаменов"; break;
	case 12: cout << "Мы успешно сдали 12 экзаменов"; break;
	case 13: cout << "Мы успешно сдали 13 экзаменов"; break;
	case 14: cout << "Мы успешно сдали 14 экзаменов"; break;
	case 15: cout << "Мы успешно сдали 15 экзаменов"; break;
	case 16: cout << "Мы успешно сдали 16 экзаменов"; break;
	case 17: cout << "Мы успешно сдали 17 экзаменов"; break;
	case 18: cout << "Мы успешно сдали 18 экзаменов"; break;
	case 19: cout << "Мы успешно сдали 19 экзаменов"; break;
	case 20: cout << "Мы успешно сдали 20 экзаменов"; break;
	case 21: cout << "Мы успешно сдали 21 экзаменов"; break;
	case 22: cout << "Мы успешно сдали 22 экзаменов"; break;
	case 23: cout << "Мы успешно сдали 23 экзаменов"; break;
	case 24: cout << "Мы успешно сдали 24 экзаменов"; break;
	case 25: cout << "Мы успешно сдали 25 экзаменов"; break;
	default: cout << "Превышен количество экзаменов! "; break;
	}
	_getch();
	return 0;
}