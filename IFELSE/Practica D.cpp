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

/*1.17 Crear un programa que lea tres números diferentes, A, B, C, e imprime los valores
máximo y mínimo. El procedimiento consistirá en comparaciones sucesivas de parejas de
números. Cree el algoritmo, diagrama de flujo y código en C# */
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

    if (A > B and C < B)
    {
        cout << "El mínimo es " << C << " y el máximo es " << A;
    }

    if (B > A and C < A)
    {
        cout << "El mínimo es " << C << " y el máximo es " << B;
    }

    if (C > B and A < B)
    {
        cout << "El mínimo es " << A << " y el máximo es " << C;
    }

    //B max A min
    if (B > C and A < C)
    {
        cout << "El mínimo es " << A << " y el máximo es " << B;
    }

    //max A min B
    if (A > C and B < C)
    {
        cout << "El mínimo es " << B << " y el máximo es " << A;
    }

    // MIN b MAX c
    // 2, 1, 3
    if (C > A and B < A)
    {
        cout << "El mínimo es " << B << " y el máximo es " << C;
    }
}
