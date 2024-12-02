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
double calcularArea(double lado)
{
	return lado * lado;
}

//Rectangulo
double calcularArea(int largo, int ancho)
{
	return largo * ancho;
}

//Circulo
double calcularArea(float radio)
{
	return 3.1416 * sqrt(radio * 2);
}

//Triangulo
double calcularArea(double base, double altura)
{
	return 0.5 * base * altura;
}

//Rombo
double calcularArea(double diagonalMayor, double diagonalMenor)
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
	cout << "¿Cual opcion desea ejecutar?" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
	{
		double lado;
		cout << "Cuadrado" << endl;
		cout << "Ingrese la medida del lado: ";
		cin >> lado;
		cout << endl;
		cout << "El area del cuadrado es " << calcularArea(lado) << endl;
		break;
	}
	
	case 2:
	{
		int largo, ancho;
		cout << "Rectangulo" << endl;

		cout << "Ingrese el largo: ";
		cin >> largo;
		cout << endl;

		cout << "Ingrese el ancho: ";
		cin >> ancho;
		cout << endl;

		cout << "El area del rectangulo es " << calcularArea(largo, ancho) << endl;
		break;
	}

	case 3:
	{
		float radio;
		cout << "Circulo" << endl;

		cout << "Ingrese la medida del radio" << endl;
		cin >> radio;
		cout << endl;

		cout << "El area del circulo es " << calcularArea(radio) << endl;
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

		cout << "El area del triangulo es " << calcularArea(base, altura) << endl;
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

		cout << "La medida del area es " << calcularArea(diagonalMayor, diagonalMenor) << endl;
		break;

	}
	default:
		cout << "Opcion invalida" << endl;

	}

	return 0;



}

