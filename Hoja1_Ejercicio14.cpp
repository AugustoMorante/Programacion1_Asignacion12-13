
#include "pch.h"
#include <iostream>
using namespace std;
//161-343-565
int main()
{
	int num, u, c;
	cout << "Insertar numero de 3 digitos:\n";
	cin >> num;
	if (num < 100 || num > 999)
	{
		cout << "Numero Incorrecto\n";
		system("pause");
		return 0;
	}
	u = num % 10;
	c = num / 100;
	if (u == c)
	{
		cout << "Es numero capicua\n";
	}
	else
	{
		cout << "No es numero capicua\n";
	}
	system("pause");
	return 0;
}


