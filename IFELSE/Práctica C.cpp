#include <iostream>
#include <iomanip>
#include <limits>
#include <locale>

using namespace std;


int main()
{ // PRÁCTICA C
  // 1.1 Escriba el código que pregunte al usuario por un número y escribir el resultado del
  // cuadrado.De la siguiente manera :
  // Ingrese un número : 5
  // El cuadrado de 5 es 25
	int numero, power;
	cout << "Ingrese un número: ";
	cin >> numero;
	cout << endl;
	power = pow(numero, 2);
	cout << "El cuadrado de " << numero << " es: " << power << endl;

  // 1.2 Escriba un código que solicite un número entero e imprima los resultados de x, 2x, 3x,
  // 4x y 5x. Donde x es el número ingresado por el usuario, y los subsecuentes implican
  // multiplicar por 2, multiplicar por 3, multiplicar por 4 y multiplicar por 5, y escribir el
  // resultado en el siguiente formato : 7 / 7 -- 14 -- 21 -- 28 -- 35
	int valor{}, twoX, threeX, fourX, fiveX;
	twoX = (valor * 2);
	threeX = (valor * 3);
	fourX = (valor * 4);
	fiveX = (valor * 5);

	cout << "Ingrese un número: ";
	cin >> valor;
	cout << endl;
	cout << twoX << " - " << threeX << " - " << fourX << " - " << fiveX << endl;


}
