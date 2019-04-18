
#include "pch.h"
#include <iostream>
using namespace std;
/*
	Curso = 10
	Ciclo = 9
*/
int main()
{
	int ciclo, curso, costo, cc;
	double totalPagar;
	cout << "El costo de cada curso es de $ 155.00\n";
    cout << "Ingrese el número de cursos: ";
	cin >> curso;
	cout << "Ingrese el número ciclo a cursar: ";
	cin >> ciclo;
	costo = 155;
	cc = curso * costo;
	if (ciclo >= 1 && ciclo <= 3)
	{
		totalPagar = cc - cc * 0.1;
	}
	if (ciclo >= 4 && ciclo <= 6)
	{
		totalPagar = cc - cc * 0.15;
	}
	if (ciclo >= 7 && ciclo <= 8)
	{
		totalPagar = cc - cc * 0.17;
	}
	if (ciclo >= 9 && ciclo <= 10)
	{
		totalPagar = cc - cc * 0.18;
	}
	cout << "El costo es de $ " << totalPagar << endl;
	system("pause");
	return 0;
}

