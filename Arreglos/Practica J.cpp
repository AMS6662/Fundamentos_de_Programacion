#include <iostream>
#include <iomanip>
#include <limits>
#include <locale>
using namespace std;

int main()
{
   /*#1 Realice el programa en C++ que solicite un número e imprima el numero multiplicado por 10 y
   esto lo seguirá haciendo hasta que el usuario ingrese un cero. Utilice el arreglo preconstruido*/

	vector <int> numeros;
	int num;
	num = -1;

	while (num != 0)
	{
		cout << "Numero: ";
		cin >> num;
		if (num == 0)
		{
			break;
		}
		numeros.push_back(num);
		cout << num * 10 << endl;
	}
	for (int elementos : numeros)
	{
		cout << elementos << endl;
	}


/*#2 Realice el programa en C++ que encuentre el mayor elemento de un arreglo de tipo entero.
Utilice el arreglo preconstruido*/
	int numeros2[10]
	{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };

	vector <int> vnum
	{ 34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };

	int mayor = -1;
	for (int i = 0; i <= 9; i++)
	{
		if (vnum[i] > mayor)
		{
			mayor = vnum[i];
		}
	}
	cout << "El mayor es: " << mayor << endl;
}
