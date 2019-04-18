
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
    int num;
	cout << "Insertar numero del 1 al 100: ";
	cin >> num;
	if (num <= 0 || num > 100)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (num >= 1 && num <= 9)
	{
		cout << "El numero tiene 1 digito\n";
	}
	if (num >= 10 && num <= 99)
	{
		cout << "El numero tiene 2 digitos\n";
	}
	if (num == 100)
	{
		cout << "El numero tiene 3 digitos\n";
	}
	system("pause");
	return 0;
}
