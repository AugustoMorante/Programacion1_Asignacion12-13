#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int opcion;
	double v1, v2, operacion;
	cout << "1.- Area de un Triangulo\n";
	cout << "2.- Area de un Rectangulo\n";
	cout << "3.- Area de un Circulo\n";
	cout << "4.- Area de un Cuadrado\n";
	cout << "5.- Salir\n";
	cout << "Que opcion desea?\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "Base: ";
		cin >> v1;
		cout << "Altuta: ";
		cin >> v2;
		operacion = v1 * v2 / 2;
		break;
	case 2:
		cout << "Largo: ";
		cin >> v1;
		cout << "Ancho: ";
		cin >> v2;
		operacion = v1 * v2;
		break;
	case 3:
		cout << "Radio: ";
		cin >> v1;
		operacion = 3.14 * (v1 * v1);
		break;
	case 4:
		cout << "Lado: ";
		cin >> v1;
		operacion = v1 * v1;
		break;
	case 5:
		cout << "Cerrar ventana\n";
		system("pause");
		return 0;
		break;
	default:
		cout << "ERROR/n";
		system("pause");
		return 0;
		break;
	}
	cout << "Resultado: ";
	cout << operacion << endl;
	system("pause");
	return 0;
}