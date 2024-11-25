#include <iostream>
#include <iomanip>
#include <limits>
#include <locale>
using namespace std;

int main()
{
   /*#1 Realice el programa en C++ que solicite un número e imprima el numero multiplicado por 10 y
   esto lo seguirá haciendo hasta que el usuario ingrese un cero. Utilice el arreglo preconstruido*/

	int numeros[10];
	int num, i = 0;
	num = -1;

	while (num != 0)
	{
		cout << "Ingrese un número: ";
		cin >> num;

		if (num == 0 and i > 9)
		{
			break;
		}
		numeros[i] = num;
		i++;

	}
	for (int elementos : numeros)
	{
		cout << elementos << endl;
	}

}
