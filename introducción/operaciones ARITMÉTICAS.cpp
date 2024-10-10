#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;


int main()
{
    //Operaciones Aritméticas

    //Enteros
    int n1 = 10;
    int n2 = 20;
    int n3;

    //Floats
    float f1 = 1.5;
    float f2 = 5.2;
    float f3;

    cout << "Enteros: n1 = 10, n2 = 20 " << "Floats: f1= 1.5, f2 = 5.2" << endl;
 

    //1. Adición
    n3 = n1 + n2;
    cout << "Resultado suma enteros: " << n3 << endl;

    //2. Sustracción 
    n3 = n1 - n2;
    cout << "Resultado resta enteros: " << n3 << endl;
    f3 = f1 - f2;
    cout << "Resultado resta flotantes: " << f3 << endl;


    //3. Multiplicación
    n3 = n1*n2;
    cout << "Resultado multiplicación enteros: " << n3 << endl;
    f3 = f1 * f2;
    cout << "Resultado multiplicación flotantes: " << f3 << endl;

    //4. División
    n3 = n1 / n2;
    cout << "Resultado dicvisión enteros: " << n3 << endl;
    f3 = f1 / f2;
    cout << "Resultado división flotantes: " << f3 << endl;

    //5. Modulo (Residuo de la división)
    n3 = n2 % n1;
    cout << "Resultado modulo: " << n3 << endl;

    //6.Operaciones mixtas
    f3 = n1 + f1;
    cout << "Resultado suma mixta: " << f3 << endl;
    f3 = n2 - f2;
    cout << "Resultado resta mixta: " << f3 << endl;
    f3 = n1 * f2;
    cout << "Resultado multiplicación mixta: " << f3 << endl;
    f3 = n2 / f1;
    cout << "Resultado división mixta: " << f3 << endl;
    f3 = (n1 + n2) * f1 / f2;
    cout << "Resultado operación mixta: " << f3 << endl;

    //7. Más ejemplos con floats
    f3 = f1 + 10.3;
    cout << "Resultado suma flotantes: " << f3 << endl;
    f3 = f2 * 2.5;
    cout << "Resultado multiplicación flotantes: " << f3 << endl;
    f3 = f1 / 2.0;
    cout << "Resultado multiplicación flotantes: " << f3 << endl;
    f3 = f2 - 3.2;
    cout << "Resultado resta flotantes: " << f3 << endl;

    //8. Combinaciones de numeros enteros y flotantes
    f3 = n1 + f1 - n2 / 2.0 + f2 * 1.5;
    cout << "Resultado operación mixta enteros y flotantes: " << f3 << endl;

    //9. Combinaciones más complejas
    f3 = (n1 + f1) * (n2 - f2) / (n1 * f2);
    cout << "Resultado operación compleja: " << f3 << endl;

    //10. Operaciones aritméticas de tipo mixto
    double d1 = 7.4;
    f3 = n1 + d1;
    cout << "Resultado suma doble: " << f3 << endl;
    f3 = n2 - d1;
    cout << "Resultado resta doble: " << f3 << endl;
    f3 = d1 * f2;
    cout << "Resultado multiplicación doble: " << f3 << endl;
    f3 = d1 / f1;
    cout << "Resultado división double: " << f3 << endl;

    //11. Números negativos
    int negInt = -25;
    float negFloat = -12.3;

    n3 = n1 + negInt;
    cout << "Resultado suma enteros positivo + negativo: " << n3 << endl;
    n3 = n2 + negInt;
    cout << "Resultado suma enteros positivo + negativo: " << n3 << endl;
    f3 = negFloat - f2;
    cout << "Resultado resta flotantes negativo - positivo: " << f3 << endl;
    n3 = negInt * n2;
    cout << "Resultado multiplicación enteros positivo * negativo: " << n3 << endl;

    //12. Incremento decremento
    n1++;
    cout << "Incremento 1 a n1: " << n1 << endl;
    n2--;
    cout << "Decremento en 1 a n2: " << n2 << endl;
    f2 - 1.2;
    cout << "Restas 1.2 a f2: " << f2 << endl;




}
