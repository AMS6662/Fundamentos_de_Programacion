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

		if (opciones != 's')
		{
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			cout << endl;
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
			cout << endl;

			if (opciones == 'a')
			{
				total = numero1 + numero2;
				cout << "El resultado de la suma es " << total << endl;
			}

			else if (opciones == 'b')
			{
				total = numero1 - numero2;
				cout << "El resultado de la resta es " << total << endl;
			}

			else if (opciones == 'c')
			{
				total = numero1 * numero2;
				cout << "El resultado de la multiplicacion es " << total << endl;
			}

			else if (opciones == 'd')
			{
				if (numero2 != 0)
				{
					total = numero1 / numero2;
					cout << "El resultado de la division es " << total << endl;
				}
				else
				{
					cout << "Operacion invalida" << endl;
				}
			}

			else if (opciones == 'e')
			{
				total = numero1 % numero2;
				cout << "El resultado del residuo es " << total << endl;
			}

			numero1 = 0;
			numero2 = 0;
			total = 0;

		}


	} while (opciones != 's');

	/*1.23 Crear un programa en C++ que “simule” dos operaciones básicas de un cajero que es
retiro y consulta de saldo, el proceso debe considerar la lectura y validación de banda
magnética o chip*. Si la tarjeta es invalida, terminar el proceso usando la instrucción
“break “de lo contrario pedir un pin de 4 dígitos, validar que solo sean 4 dígitos, el digito a
validar será “1234” de lo contrario será pin invalido.
Las opciones que deberá mostrar el cajero si el chip y el pin son válidos será:
a) Consulta de saldo
b) Retiro de dinero 
c) Cancelar operacion

El saldo inicial de la cuenta del cliente será 3,450.00 pesos, en la opción de retiro, deberá
validar si la cantidad que quiere retirar es mayor al saldo, entonces desplegará la opción
fondos insuficientes, y terminará la operación.
De tener fondos suficientes se le restará al saldo inicial y mostrará el saldo remanente
antes de terminar la operación.
Si desea cancelar la operación deberá salir del menú.
Para la consulta, solo deberá mostrar el saldo y terminar la operación con el cajero.*/

	int chip = 0;
	int nip = 0;
	float saldo = 3450.00;
	char operaciones = 0;

		cout << "Para insertar su tarjeta en el lector presione 2" << endl;
		cin >> chip;
		cout << endl;

		switch (chip)
		{
		case 1:
			cout << "Tarjeta invalida" << endl;
			break;

		case 2:
			cout << "Ingrese su nip" << endl;
			cin >> nip;
			cout << endl;
			if (nip == 1234)
			{
				cout << "Menu de operaciones Cajero Unitec" << endl;
				cout << endl;
				cout << "a) Consulta de saldo" << endl;
				cout << "b) Retiro de dinero" << endl;
				cout << "c) Cancelar operacion" << endl;
				cin >> operaciones;

				while (operaciones == 'a') //this is an infinite loop rn, it needs a stop command
				{
					cout << "Su saldo es " << saldo << endl;
				}





			}
			else
			{
				cout << "Pin invalido" << endl;
			}
			break;

		}



}
