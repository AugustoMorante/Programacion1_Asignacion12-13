#include "pch.h"
#include <iostream>
using namespace std;
//55
int main()
{
	int hora, salario, dscto;
	cout << "Ingrese total de horas trabajadas por el obrero: ";
	cin >> hora;
	if (hora < 0)
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (hora <= 40)
	{
		salario = hora * 16;
	}
	if (hora > 40)
	{
		dscto = hora - 40;
		salario = (40 * 16) + (dscto * 20);
	}
	cout << "El salario semanal del obrero es de $ " << salario << endl;
	system("pause");
	return 0;

}