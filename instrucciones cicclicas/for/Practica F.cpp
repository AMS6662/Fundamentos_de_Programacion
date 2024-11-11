#include <iostream>
#include <iomanip>
#include <locale>
#include <limits>
using namespace std;

int main()
{
    /*Generar el código necesario en C++ para contar los números naturales de manera regresiva de nueve a cero. Tip : en lugar de sumar ++, necesitas restar --*/
    int limite = 10;
    int contador = 0;

    cout << "Los numeros naturales de mayor a menor son {";

    for (contador <= limite; limite--;)
    {
        cout << limite << ", ";
    }
    cout << "}";


    /*Generar el código necesario en C++ para contar los números de cero a 99. Tip : Necesitas inicializar el contador en uno y cambiar el limite a 99.*/
    int contador1 = 1;

    for (int limite99 = 99 ; contador1 <= limite99 ; contador1++)
    {
        cout << contador1 << ", ";
    }
	    /*Generar el código necesario en C++ solicitando el rango uno mínimo y uno máximo para generar la impresión de los números de manera secuencial de uno en uno,
    si ingresa 1 como mínimo y 10 como máximo, deberá imprimir 1,2,3,4,5,6,7,8,9,10 Tip: Declara dos variables enteras (int) e insertalas en la instrucción for.*/
    int minimo, maximo;

    cout << "Ingrese el numero minimo: ";
    cin >> minimo;
    cout << endl;

    cout << "Ingrese el numero maximo: ";
    cin >> maximo;
    cout << endl;

    cout << "El rango de numeros es ";

    for (int minimo = 0; minimo <= maximo; minimo++)
    {
        cout << minimo << ", ";
    }
    cout << endl;
    cout << endl;


}
