#include <iostream>
#include <cmath>
using namespace std;


/*Practica K Funciones vence [Dic 2] Elabora un programa en C++ usando funciones , que calcule el area de las siguientes figuras geometricas:
- Cuadrado
- Rectangulo
- Circulo
- Triangulo
- Rombo*/

// Cuadrado
double areaCuadrado(double lado)
{
	return lado * lado;
}

//Rectangulo
double areaRectangulo(double largo, double ancho)
{
	return largo * ancho;
}

//Circulo
double areaCirculo(double radio)
{
	return 3.1416 * radio * radio;
}

//Triangulo
double areaTriangulo(double base, double altura)
{
	return 0.5 * base * altura;
}

//Rombo
double areaRombo(double diagonalMayor, double diagonalMenor)
{
	return diagonalMayor * diagonalMenor / 2;
}


int main() {
	int opcion;

	cout << "Calculadora de Areas" << endl;
	cout << "Opcion 1: Cuadrado" << endl;
	cout << "Opcion 2: Rectangulo" << endl;
	cout << "Opcion 3: Circulo" << endl;
	cout << "Opcion 4: Triangulo equilatero" << endl;
	cout << "Opcion 5: Rombo" << endl;
	cout << "Cual opcion desea ejecutar? ";
	cin >> opcion;
	cout << endl;

	switch (opcion)
	{
	case 1:
	{
		double lado;
		cout << "Cuadrado" << endl;
		cout << "Ingrese la medida del lado: ";
		cin >> lado;
		cout << endl;

		cout << "El area del cuadrado es " << areaCuadrado(lado) << endl;
		break;
	}

	case 2:
	{
		double largo, ancho;
		cout << "Rectangulo" << endl;

		cout << "Ingrese el largo: ";
		cin >> largo;
		cout << endl;

		cout << "Ingrese el ancho: ";
		cin >> ancho;
		cout << endl;

		cout << "El area del rectangulo es " << areaRectangulo(largo, ancho) << endl;
		break;
	}

	case 3:
	{
		double radio;
		cout << "Circulo" << endl;

		cout << "Ingrese la medida del radio: " << endl;
		cin >> radio;
		cout << endl;

		cout << "El area del circulo es " << areaCirculo(radio) << endl;
		break;

	}

	case 4:
	{
		double base, altura;
		cout << "Triangulo" << endl;

		cout << "Ingrese la base: ";
		cin >> base;
		cout << endl;

		cout << "Ingrese la altura: " << endl;
		cin >> altura;
		cout << endl;

		cout << "El area del triangulo es " << areaTriangulo(base, altura) << endl;
		break;

	}

	case 5:
	{
		double diagonalMayor, diagonalMenor;
		cout << "Rombo" << endl;

		cout << "Ingrese la medida de la diagonal mayor: ";
		cin >> diagonalMayor;
		cout << endl;

		cout << "Ingrese la medida de la diagonal menor: ";
		cin >> diagonalMenor;
		cout << endl;

		cout << "La medida del area es " << areaRombo(diagonalMayor, diagonalMenor) << endl;
		break;

	}
	default:
		cout << "Opcion invalida" << endl;

	}

	return 0;

}
