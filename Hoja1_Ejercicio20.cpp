#include "pch.h"
#include <iostream>
using namespace std;
//76
int main()
{
	int creditos;
	cout << "Ingrese la cantidad de creditos acumulados: ";
	cin >> creditos;
	if (creditos < 0)
	{
		cout << "ERROR\n";
	}
	if (creditos < 32)
	{
		cout << "El alumno se encuentra en el PRIMER ANIO\n";
	}
	if (creditos >= 32 && creditos <= 63)
	{
		cout << "El alumno se encuentra en el SEGUNDO ANIO\n";
	}
	if (creditos >= 64 && creditos <= 95)
	{
		cout << "El alumno se encuentra en TERCER ANIO\n";
	}
	if (creditos >= 96)
	{
		cout << "El alumno se encuentra en CUARTO ANIO\n";
	}
	system("pause");
	return 0;
}