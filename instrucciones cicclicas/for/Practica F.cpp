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



}
