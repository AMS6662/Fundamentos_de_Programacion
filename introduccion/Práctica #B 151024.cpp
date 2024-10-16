#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>

using namespace std;


int main()
{

int n1 = 3, n2 = 5, n3 = 2, n4 = 1, n5 = 10, n6 = 8;
int n7;
string pregunta = "Introduzca la operación: ";
string respuesta = "El resultado es: ";

// 1) 3 + 5 * 2 / 2 – 1 
cout << pregunta;
cin >> n7;
cout << endl;
n7 = (n1 + n2) * n2 * n2 - n4;
cout << respuesta << n7 << endl;

// 2) 3 + 10 / 2 – 1
cout << pregunta;
cin >> n7;
cout << endl;
n7 = n1 + n5 / n3 - n4;
cout << respuesta << n7 << endl;


// 3) 3 + 5 – 1 
cout << pregunta;
cin >> n7;
cout << endl;
n7 = n1 + n2 - n4;
cout << respuesta << n7 << endl;

// 4) 8 – 1
cout << pregunta;
cin >> n7;
cout << endl;
n7 = n6 - n1;
cout << respuesta << n7 << endl;

// 5) 1 / 3 * 3
cout << pregunta;
cin >> n7;
cout << endl;
n7 = n4 / n1 * n1;
cout << respuesta << n7 << endl;


return0;
}
