#include "pch.h"
#include <iostream>
using namespace std;
//3 - 8
int main()
{
	int pos;
	cout << "Ingrese poicion del equipo en la tabla: ";
	cin >> pos;
	if (pos < 1 || pos > 10)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (pos >= 1 && pos <= 4)
	{
		cout << "El equipo seleccionado ira al mundial!\n";
	}
	if (pos == 5)
	{
		cout << "El equipo selccionado ira al repechaje\n";
	}
	if (pos >= 6)
	{
		cout << "Comprate una TV LED para ver el mundial\n";
	}
	system("pause");
	return 0;
}