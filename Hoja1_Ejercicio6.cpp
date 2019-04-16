
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c, x, dis;
	double raiz, r1, r2, formula;
	cout << "Ingrese valor de A: ";
	cin >> a;
	cout << "Ingrese valor de B: ";
	cin >> b;
	cout << "Ingrese valor de C: ";
	cin >> c;
	cout << "Ingrese un valor a evaluar(x): ";
	cin >> x;
	cout << endl;
	dis = (b*b) - (4 * a * c);
	if (dis <= 0)
	{
		cout << "El discriminante debe ser mayor que 0\n";
		system("pause");
		return 0;
	}
	raiz = sqrt(dis);
	r1 = (-b + raiz) / (2 * a);
	r2 = (-b - raiz) / (2 * a);
	formula = (a*(x*x)) + (b*x) + c;
	cout << "Raiz 1: ";
	cout << r1 << endl;
	cout << "Raiz 2: ";
	cout << r2 << endl;
	cout << "Ax^2 + Bx + C = " << formula << endl;
	system("pause");
	return 0;
}
/*
TEST
Ingrese el valor de A: 3
Ingrese el valor de B: 6
Ingrese el valor de C: 1
Ingrese un valor para evaluar: 10
*/
