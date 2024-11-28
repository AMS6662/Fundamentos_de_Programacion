
/*Código con propósito específico
- Update() -> Actualizacion
- OnCreate() -> Inicializar
- main() -> Punto de entrada
!!!!! NO se pueden definir funciones dentro de otras funciones !!!!!
- Llamado o llamado cuando lo necesitas
- Divide y vencerás (break down the problem to accurately and best design the solution)*/

#include <iostream>
using namespace std;

void hola()
{
	cout << "Hola mundo!";
}

void suma()
{
	int n1, n2;
	cout << "Ingrese numero 1: ";
	cin >> n1;
	cout << endl;

	cout << "Ingrese numero 2: ";
	cin >> n2;
	cout << endl;

	cout << n1 + n2 << endl;
}

int main() //Punto de entrada
{
	hola();
	cout << endl;

	suma();
}


