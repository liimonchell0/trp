#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "RU");
	cout << "Ввести координаты точки B(x, y) и радиус окружности R." << endl<<
	"Центром окружности является начало координат.Определить лежит ли" << endl<<
	"данная точка внутри окружности."<<endl;
	double x, y, R;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "R="; cin >> R;
	if ((x*x + y * y) < R*R)
		cout << "Лежит" << endl;
	else cout << "Не лежит" << endl;
	return 0;



}