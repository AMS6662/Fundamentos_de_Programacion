#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;


int main()
{
	/*1.21 Crear el código de un programa en C++ que pregunte si quiere salir del ciclo usando la
instrucción “do … while”, y leer un “string” donde el usuario tiene solo dos opciones para
contestar. Si el usuario contesta “SI” entonces salir del ciclo, su contesta “NO” entonces
volver a hacer la pregunta “Quieres salir del ciclo? [SI/NO]”. Ojo la contestación deben ser
estrictamente mayúsculas.*/
	string respuesta = "NO";

	do
	{
		cout << "Quieres salir del ciclo? [SI/NO]" << endl;
		cin >> respuesta;
	} while (respuesta != "SI");


	/*1.22 Hacer un menú de opciones que ejecute las operaciones aritméticas básicas (+) suma,
(-) resta, (*) multiplicación, (/) división y (%) residuo. que muestre un menú como el que
se muestra en la figura de abajo. Deberá usar la instrucción “do … while”, y deberá leer un
carácter y en base a la opción deberá ejecutar la operación, según la opción que elija.

Los dos operandos deberán ser preguntados al usuario, convertirlos a “int” y guardados
en dos variables con nombres “numero1” y “numero2”, el resultado debe ser guardado en
una variable llamada “total”, el total debe ser impreso en la consola.

Una vez que termine la operación, inicialice las variables “numero1”, “numero2” y “total”
en cero y el usuario podrá hacer la siguiente operación, hasta que el usuario presione “s”
de salir entonces terminará el programa.*/

	char opciones = 'a';
	int numero1, numero2, total;

	do
	{
		cout << "Menu de operaciones" << endl;
		cout << "a) Suma de dos operandos" << endl;
		cout << "b) Resta de dos operandos" << endl;
		cout << "c) Multiplicacion de dos operandos" << endl;
		cout << "d) Division de dos operandos" << endl;
		cout << "e) Residuo de dos operandos" << endl;
		cout << "s) Salir del menu" << endl;
		cin >> opciones;

		do
		{
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			cout << endl;
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
			cout << endl;

			total = numero1 + numero2;
			cout << "El resultado de la suma es " << total << endl;

		} while (opciones == 'a');

		while (opciones == 'b')
		{
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			cout << endl;
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
			cout << endl;

			total = numero1 - numero2;
			cout << "El resultado de la resta es " << total << endl;

		}

		while (opciones == 'c')
		{
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			cout << endl;
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
			cout << endl;

			total = numero1 * numero2;
			cout << "El resultado de la multiplicacion es " << total << endl;

		}

		while (opciones == 'd')
		{
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			cout << endl;
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
			cout << endl;

			total = numero1 / numero2;
			cout << "El resultado de la division es " << total << endl;
		}

		while (opciones == 'e')
		{
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			cout << endl;
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
			cout << endl;

			total = numero1 % numero2;
			cout << "El resultado del residuo es " << total << endl;
		}

	} while (opciones != 's');


}
