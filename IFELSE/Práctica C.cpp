#include <iostream>
#include <iomanip>
#include <limits>
#include <locale>
using namespace std;


int main()
{
	// PRÁCTICA C
/** 1.1 Escriba el código que pregunte al usuario por un número y escribir el resultado del cuadrado.De la siguiente manera :
Ingrese un número : 5
El cuadrado de 5 es 25*/
	int numero;
	double power;

	cout << "Ingrese un número: ";
	cin >> numero;
	cout << endl;
	power = pow(numero, 2);
	cout << "El cuadrado de " << numero << " es: " << power << endl;
	cout << endl;

/*1.2 Escriba un código que solicite un número entero e imprima los resultados de x, 2x, 3x,
4x y 5x. Donde x es el número ingresado por el usuario, y los subsecuentes implican
multiplicar por 2, multiplicar por 3, multiplicar por 4 y multiplicar por 5, y escribir el
resultado en el siguiente formato : 7 / 7 -- 14 -- 21 -- 28 -- 35*/

	int c1, c2, c3, c4, c5;

	cout << "Ingrese un número: ";
	cin >> c1;
	c2 = (c1 * 2);
	c3 = (c1 * 3);
	c4 = (c1 * 4);
	c5 = (c1 * 5);
	cout << endl;
	cout << c1 << " / " << c2 << " -- " << c3 << " -- " << c4 << " - " << c5 << endl;
	cout << endl;

/*1.3 Escriba un programa que pregunte al usuario por su peso en kilogramos y lo
convierta en libras, el factor de conversión es 2.2 libras por un kilo*/
	int peso;
	double libras = 2.2, conversion;

	cout << "Ingrese su peso en kilogramos: ";
	cin >> peso;
	cout << endl;
	conversion = peso * libras;
	cout << "Su peso en libras es: " << conversion << endl;
	cout << endl;

/*1.4 Escriba el código de un programa que pregunte por 3 números (use 3 instrucciones de
entrada). Cree las tres variables de entrada, adicionalmente cree una variable que se
llame Total y Promedio, donde Total contendrá la suma de las tres variables y Promedio
que será el cálculo del promedio de los 3 números.*/
	string pregunta = "Ingrese un numero: ";
	int n1, n2, n3, total;
	double promedio;

	cout << pregunta;
	cin >> n1;
	cout << endl;
	cout << pregunta;
	cin >> n2;
	cout << endl;
	cout << pregunta;
	cin >> n3;
	cout << endl;

	total = n1 + n2 + n3;
	promedio = total / 3.0;

	cout << "La suma de los números es: " << total << endl;
	cout << "El promedio de los números es: " << promedio << endl;
	cout << endl;

/*1.5 Escriba un cálculo que calcule la propina de un Total, donde le pregunte al usuario por
el total de la cuenta, y el porcentaje de propina a aplicar y guardarlo en una variable que
se llame Porcentaje y como resultado imprima la cantidad a dar de propina.*/
	int cuenta;
	float propina, porcentaje;

	cout << "Ingrese el total de la cuenta: ";
	cin >> cuenta;
	cout << endl;
	cout << "Ingrese la cantidad de propina en número entero: ";
	cin >> propina;
	cout << endl;
	porcentaje = (propina / 100) * cuenta;

	cout << "La cantidad de propina a dar es: " << porcentaje << endl;
	cout << endl;
	
/*1.6 Escriba el código que solicite un número al usuario y si este número es mayor a 100,
que imprima “El número es mayor a 100”, de lo contrario que imprima “El número es
menor o igual que 100”*/
	int n4;

	cout << "Ingrese un número: ";
	cin >> n4;
	cout << endl;

	if (n4 > 100)
	{
		cout << "El numero es mayor a 100" << endl;
		cout << endl;
	}
	else
	{
		cout << "El numero es menor o igual a 100" << endl;
		cout << endl;
	}

/*1.7 Escriba el código que solicite un número al usuario si este número es menor a cero
entonces imprima que “el número es negativo”, de lo contrario imprimir el “número es
positivo*/
	int n5;

	cout << "Ingrese un número positivo o negativo: ";
	cin >> n5;
	cout << endl;

	if (n5 > 0)
	{
		cout << "El número es positivo" << endl;
		cout << endl;
	}
	if (n5 < 0)
	{
		cout << "El número es negativo" << endl;
		cout << endl;
	}

/*1.8 Escriba un programa que pregunte por el mail del usuario y guardarlo en una variable
llamada “Miemail”, y luego que pregunte por un password y se guarde en una variable
llamada “Password_Ingresado”, validar si el password es igual a “12345” entonces
imprimir “Felicidades password correcto” de otra manera imprimir “Su password es
incorrecto”*/
	string miEmail;
	int Password_Ingresado;

	cout << "Ingrese su eMail: ";
	cin >> miEmail;
	cout << endl;
	cout << "Ingrese su contraseña: ";
	cin >> Password_Ingresado;
	cout << endl;

	if (Password_Ingresado == 1234)
	{
		cout << "Felicidades password correcto!" << endl;
		cout << endl;
	}
	else
	{
		cout << "Su password es incorrecto" << endl;
		cout << endl;
	}

/*1.9 Crear un código que convierta de grados farenheit a grados centígrados, usando una
variable llamada Farenheith; basado en la siguiente formula: (Farenheit − 32) ∗ 5/9

Si el código es igual a 32 imprimir 0 “cero” grados centígrados, si es mayor o menor a 32
calcular los grados centígrados e imprimir los grados en número y centígrados en letra.*/
	int Farenheit;
	float Centigrados;

	cout << "Ingrese la temperatura en Farenheit: ";
	cin >> Farenheit;
	Centigrados = (Farenheit - 32) * 5 / 9;
	cout << endl;

	if (Centigrados > 32 or Centigrados < 32 and Farenheit != 32) 
	{
		cout << Centigrados << " centigrados." << endl;
		cout << endl;
	}

	else
	{
		cout << "0 grados centigrados" << endl;
		cout << endl;
	}

/* 1.10 Crear el código que reciba el peso y la estatura del usuario, y calcule la masa corporal
en base a la fórmula: masa corporal = peso / estatura * estatura

Con el resultado desplegar los siguientes letreros en caso de que la masa corporal sea:
< 18.5 Abajo del peso normal
>= 18.5 y < 25 Peso Normal
>= 25 y < 30 Sobrepeso
>= 30 y < 35 Obeso Clase 1
>= 35 y < 40 Obeso Clase 2
>= 40 Obeso Clase 3*/
	float estatura, masaCorporal, peso;

	cout << "Ingrese su peso: ";
	cin >> peso;
	cout << endl;
	cout << "Ingrese su altura: ";
	cin >> estatura;
	cout << endl;

	masaCorporal = peso / (estatura * estatura);
	cout << "El IMC es: " << masaCorporal << endl;
	cout << endl;

	if (masaCorporal < 18.5)
	{
		cout << "Abajo del peso normal" << endl;
		cout << endl;
	}
	if (masaCorporal >= 18.5 and masaCorporal < 25)
	{
		cout << "Peso normal" << endl;
		cout << endl;
	}
	if (masaCorporal >= 25 and masaCorporal < 30)
	{
		cout << "Sobrepeso" << endl;
		cout << endl;
	}
	if (masaCorporal >= 30 and masaCorporal < 35)
	{
		cout << "Obeso Clase 1" << endl;
		cout << endl;

	}
	if (masaCorporal >= 35 and masaCorporal < 40)
	{
		cout << "Obeso clase 2" << endl;
		cout << endl;
	}
	if (masaCorporal >= 40)
	{
		cout << "Obeso Clase 3" << endl;
		cout << endl;
	}



}
