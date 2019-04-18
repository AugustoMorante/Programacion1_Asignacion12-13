

#include "pch.h"
#include <iostream>
using namespace std;
//F - 24
int main()
{
	char sexo;
	int edad, npul;
    cout << "Ingrese sexo de la persona(F o M): ";
	cin >> sexo;
	cout << "Ingrese edad de la persona: ";
	cin >> edad;
	if (sexo != 'F' && sexo != 'M')
	{
		cout << "ERROR\n";
		system("pause");
		return 0;
	}
	if (sexo == 'F')
	{
		npul = (220 - edad) / 10;
	}
	if (sexo == 'M')
	{
		npul = (210 - edad) / 10;
	}
	cout << "El numero debe ser de " << npul << " pulsasiones por cada 10 segundos aproximadamente\n";
	system("pause");
	return 0;
}

