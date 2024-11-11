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
    cout << endl;
    cout << endl;


    /*Generar el código necesario en C++ para contar los números de cero a 99. Tip : Necesitas inicializar el contador en uno y cambiar el limite a 99.*/
    int contador1 = 1;

    cout << "Los numero que hay antes del cien son ";

    for (int limite99 = 99; contador1 <= limite99; contador1++)
    {
        cout << contador1 << ", ";
    }
    cout << endl;
    cout << endl;

    /*Generar el código necesario en C++ para contar los números del uno al cien pero solo imprimir los números pares. Tip : usa un “if” y usa la operación
    residuo “%” para determinar que sea número par, y si es par, entonces imprime el número. Tip : revisa la solución del examen o las clases, cuando un
    número era múltiplo de 3 o de 2.*/
    int contador2 = 1;

    cout << "Los numeros pares que existen entre uno y cien son: ";

    for (int limite100 = 100; contador2 <= limite100; contador2++)
    {
        if (contador2 % 2 == 0)
        {
            cout << contador2 << ", ";
        }
    }
    cout << endl;
    cout << endl;


    /*Generar el código necesario en C++ solicitando el rango uno mínimo y uno máximo para generar la impresión de los números de manera secuencial de uno en uno,
    si ingresa 1 como mínimo y 10 como máximo, deberá imprimir 1,2,3,4,5,6,7,8,9,10 Tip: Declara dos variables enteras (int) e insertalas en la instrucción for.*/
    int maximo = 0;
    int minimo = 0;

    cout << "Ingrese el numero maximo: ";
    cin >> maximo;
    cout << endl;

    cout << "Ingrese el numero minimo: ";
    cin >> minimo;
    cout << endl;

    cout << "El rango de numeros es: ";
    for (int i = minimo; i <= maximo; i++)
    {
        cout << i << ", ";
    }
    cout << endl;
    cout << endl;


    /*Generar el código necesario en C++ solicitando el rango uno máximo y uno mínimo para generar la impresión de los números de manera secuencial regresiva de uno en uno,
    si ingresa 1 como mínimo y 10 como máximo, deberá imprimir 10,9,8,7,6,5,4,3,2,1 Tip: Declara dos variables enteras (int) e insertalas en la instrucción for.*/
    int max, min;

    cout << "Ingrese el numero maximo: ";
    cin >> max;
    cout << endl;

    cout << "Ingrese el numero minimo: ";
    cin >> min;
    cout << endl;

    cout << "El rango de numeros de mayor a menor es ";
    for (int m = max; m >= min; m--)
    {
        cout << m << ", ";
    }
    cout << endl;




}
