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
}
