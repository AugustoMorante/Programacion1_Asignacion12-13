/*TEST
Dinosaurio=120.50
Elefante=255.50
*/
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	double pesoElefante, pesoDino;

	cout << "Pon el peso del dinosaurio:\n";
	cin >> pesoDino;
	cout << "Pon el peso del elefante:\n";
	cin >> pesoElefante;

	if (pesoElefante > pesoDino)
	{
		cout << "El elefante pesa mas que el dinosaurio\n";
	}
	if (pesoDino > pesoElefante)
	{
		cout << "El dinosaurio pesa mas que el elefante\n";
	}
	if (pesoElefante == pesoDino);
	{
		cout << "Ambos pesan igual";
	}

	system("pause");
	return 0;
}
