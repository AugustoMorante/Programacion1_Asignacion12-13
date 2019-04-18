
#include "pch.h"
#include <iostream>
using namespace std;
// gl:7 gv:4
int main()
{
	int gl, gv;
	cout << "Ingrese cantidad de goles del equipo local: ";
	cin >> gl;
	cout << "Ingrese cantidad de goles del equipo visitante: ";
	cin >> gv;
	if (gl == 0 || gv == 0)
	{
		cout << "Los goles deben ser mayores o iguales a 0\n";
		system("pause");
		return 0;
	}
	if (gl > gv)
	{
		cout << "Gano el equipo local\n";
	}
	if (gl < gv)
	{
		cout << "Gano el equipo visitante\n";
	}
	if (gl == gv)
	{
		cout << "Empate";
		system("pause");
		return 0;
	}
}

