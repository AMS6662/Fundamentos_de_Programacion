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


/* #3 Realice el programa en C++ que encuentre el menor elemento de un arreglo de tipo entero.
Utilice el arreglo preconstruido.*/
	int numeros3[10]
	{ 22 , 565, 34, 45, 67, 12, 65, 32, 90, 87 };

	vector <int> xnum
	{ 22 , 565, 34, 45, 67, 12, 65, 32, 90, 87 };

	int menor = xnum[0];

	for (int i = 1; i < xnum.size(); i++)
	{
		if (xnum[i] < menor)
		{
			menor = xnum[i];
		}
	}
	cout << "El menor es: " << menor << endl;


/*#4 Realice el programa en C++ calcule el promedio de los elementos de un arreglo
de tipo entero. Utilice el arreglo preconstruido.*/
	vector <int> ynum
	{ 23, 54, 64, 65, 76, 86, 9, 85, 2, 94 };

	double sum = 0;
	int avg = ynum.size();

	for (int i = 0; i < avg; i++)
	{
		sum =+ ynum[i];
	}

	double promedio = sum / avg;
	cout << "El promedio es: " << promedio << endl;

/*#5 Realice el programa en C++ que encuentre el segundo mayor elemento de un
arreglo. Utilice arreglo preconstruido.*/

	vector <int> gnum
	{12, 467, 25, 26, 26, 64, 63, 74, 25 };

	int greatest = -1;
	int secondGreatest = -1;

	for (int i = 0; i < gnum.size(); i++)
	{
		if (gnum[i] > greatest)
		{
			secondGreatest = greatest;
			greatest = gnum[i];
		}

		else if (gnum[i] > secondGreatest and gnum[i] < greatest)
		{
			secondGreatest = gnum[i];
		}

	}
	if (secondGreatest == -1)
	{
		cout << "No hay un segundo numero mayor" << endl;
	}

	else
	{
		cout << "El segundo numero mayor es: " << secondGreatest << endl;
	}


/*#6. Realice el programa en C++ que cuente el número de elementos pares e
impares de un arreglo preconstruido.*/

	vector <int> evnodds
	{ 56, 86, 16, 62, 53, 77, 25, 94, 62, 27};
	vector <int> pares;
	vector <int> impares;

	for (int val = 0; val < evnodds.size(); val++)
	{
		if (evnodds[val] % 2 == 0)
		{
			pares.push_back(evnodds[val]);
		}

		else
		{
			impares.push_back(evnodds[val]);
		}
	}

	cout << "Los numeros pares son: ";
	for (int i = 0; i < pares.size(); i++)
	{
		cout << pares[i] << " ";
	}
	cout << endl;

	cout << "Los numeros impares son: ";
	for (int x = 0 ; x < impares.size(); x++)
	{
		cout << impares[x] << " ";
	}
	cout << endl;

/*#7. Realice el programa en C++ que imprima las tablas de multiplicar del numero
solicitado hasta 10 veces.*/

	int multiplicacion[1];

	cout << "Ingrese un numero: ";
	cin >> multiplicacion[0];
	cout << endl;

	for (int i = 1; i < 11; i++)
	{
		cout << multiplicacion[0] * i;
		cout << endl;

	}

	
}
