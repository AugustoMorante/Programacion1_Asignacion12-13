
#include "pch.h"
#include <iostream>
using namespace std;
/*
	TEST
	210044 - 16.5 - 14.5 - 17
*/

int main()
{
    int codigo;
	double  n1, n2, n3, promedio;
	char carita;
	carita = 1;
	cout << "Ingrese el codigo del alumno: ";
	cin >> codigo;
	cout << "Ingrese las tres notas del alumno " << codigo << ":\n";
	cin >> n1;
	if (n1 < 0 || n1 > 20)
	{
		cout << "No Valido\n";
	}
	cin >> n2;
	if (n2 < 0 || n2 > 20)
	{
		cout << "No Valido\n";
	}
	cin >> n3;
	if (n3 < 0 || n3 > 20)
	{
		cout << "No Valido\n";
	}
	promedio = 0.3*n1 + 0.3*n2 + 0.4*n3;
	cout << "El promedio del alumno " << codigo << " es de " << promedio << endl;
	if (promedio < 13)
	{
		cout << "Estudie\n";
	}
	if (promedio >= 13 || promedio < 15);
	{
		cout << "Felicitaciones" << carita << endl;
	}
	if (promedio >= 15)
	{
		cout << "Felicitaciones" << carita << carita << endl;
	}
	system("pause");
	return 0;
	
}

