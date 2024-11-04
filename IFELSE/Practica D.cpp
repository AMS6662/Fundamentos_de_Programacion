#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;


int main()
{ // PRÁCTICA D
    /*1.16 Diseñar un programa que lea tres números A, B, C y visualice en pantalla el valor del
    más grande.*/
    int A, B, C;

    cout << "Ingrese un número: ";
    cin >> A;
    cout << endl;

    cout << "Ingrese otro número: ";
    cin >> B;
    cout << endl;

    cout << "Ingrese otro número: ";
    cin >> C;
    cout << endl;

    if (A > B and A > C)
    {
        cout << "El número mayor es " << A << endl;
    }

    if (B > A and B > C)
    {
        cout << "El numero mayor es " << B << endl;
    }

    if (C > A and C > B)
    {
        cout << "El número mayour es " << C << endl;
    }

}
