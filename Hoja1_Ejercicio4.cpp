

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int edad;
    cout << "Insertar edad de la persona\n";
	cin >> edad;
	if (edad < 18)
	{
		cout << "Precio de la entrada es de 7 soles\n";
	}
	if (edad >= 18 && edad <= 50)
	{
		cout << "Precio de la entrada es de 15 soles\n";
	}
	if (edad > 50)
	{
		cout << "Precio de la entrada es de 5 soles\n";
	}
	system("pause");
	return 0;
}

