#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>

using namespace std;


int main()
{
 //Ejercicio 1 to be reworked on
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
  //side-eye


//1.2 Escriba el código que pregunte al usuario por un número y escriba
// el resultado de la  potencia del número. De la siguiente manera: 
	
	int numero;

	cout << "Ingrese un numero: ";
	cin >> numero;
	int potencia = numero * numero;
	cout << "La potencia es: " << potencia << endl; 


//1.3 Escriba un programa que pregunte al usuario por el número de yardas
// a convertir en  metros. Recuerde que la unidad de conversión de una
// yarda equivale a 0.9144 metros.

	cout << "Ingrese las yardas: ";
	int yardas;
	cin >> yardas;
	float metros = yardas * 0.9144;
	cout << "Numero en metros: " << metros << endl;


//1.4 Escriba el código de un programa que calcule la depreciación de un 
// auto  con valor de 200,000 pesos donde se despreciará por cinco años, 
// considerando que solo se  puede depreciar el 80% del valor original 
// pagado por el vehículo. Imprima en consola el  valor de deducción por 
// cada año. 

	cout << "Valor original del auto: ";
	int carro;
	cin >> carro;
	cout << endl;
	cout << "Ingrese el número de años: ";
	int años;
	cin >> años;
	double depreciacion = carro * (.80 / años);
	cout << endl;
	cout << "Devaluación tras 1 año: " << depreciacion * 1 << endl;
	cout << "Devaluación tras 2 años: " << depreciacion * 2 << endl;
	cout << "Devaluación tras 3 años: " << depreciacion * 3 << endl;
	cout << "Devaluación tras 4 años: " << depreciacion * 4 << endl;
	cout << "Devaluación tras 5 años: " << depreciacion * 5 << endl;


// 1.5 Escriba un cálculo que calcule el porcentaje de deducción de impuestos
// del salario mensual de 25, 000 pesos, donde este se deducirá un impuesto
// fijo de 900 pesos, más una parte porcentual de 1.5 % sobre el cálculo de 
// sueldo mensual – 900, Imprima el valor total del impuesto a deducir, y el
// sueldo neto que recibirá el empleado.

	cout << "Ingrese el salario mensual: ";
	int salario;
	cin >> salario;
	int impuestoFijo = 900;
	float impuestoPorcentual = 0.015;
	float impuestoDeducir = ((salario - impuestoFijo) * impuestoPorcentual) + impuestoFijo;
	float sueldoNeto = salario - impuestoDeducir;
	cout << "El impuesto total a deducir es: " << impuestoDeducir << endl;
	cout << "El sueldo neto a recibir es: " << sueldoNeto << endl;

  
//1.6 Escriba el código de cada una de las siguientes operaciones en C++; por favor 
// cree una  variable con el nombre de su elección e imprima el resultado con la 
// instrucción cout:
	int result1, result2, result3, result4, result7;
	float result5;
	double result6;

	// 1) 3*4 - int
	result1 = 3 * 4;
	cout << "El resultado de 3 * 4 es: " << result1 << endl;

	// 2) 12 / 3 - int
	result2 = 12 / 3;
	cout << "El resultado de 12 / 3 es: " << result2 << endl;

	// 3) 12 % 3 - float
	result3 = 12 % 3;
	cout << "El resultado del modulo 12 % 3 es: " << result3 << endl;

	// 4) 12 % 7 - float
	result4 = 12 % 7;
	cout << "El resultado de 12 % 7 es: " << result4 << endl;

	// 5) 3 + 3.0 - double
	result5 = 3 + 3.0;
	cout << "El resultado de 3 + 3.0 es: " << result5 << endl;

	// 6) 10 / 100 - float
	result6 = 10.0 / 100;
	cout << "El resultado de 10 / 100 es: " << result6 << endl;

	// 7) Potencia 3 a la 2, para esta instrucción usar - int
	// i) pow(número a elevar, potencia a elevar)
	result7 = pow(3, 2);
	cout << "La potencia cuadrada de 3 es: " << result7 << endl;

  
//1.7 Comparaciones. Cuál será el resultado de cada comparación 
// y escriba el código e  imprima los resultados usando la instrucción 
// cout, NOTA: Las comparaciones encierrelas  entre paréntesis. 
//Si a = 10 y b = 20
	int a = 10, b = 20;
	cout << "A = 10, B = 20" << endl;
	cout << endl;

	// i. (a > b)
	cout << boolalpha;
	cout << "A es mayor que B es: " << (a > b) << endl;

	// ii. (a < b)
	cout << "A es menor que B es: " << (a < b) << endl;

	// iii. (a == b)
	cout << "A es igual que B es: " << (a == b) << endl;

	// iv. (a != b)
	cout << "A no es igual que B es: " << (a != b) << endl;

	// v. (a + b) > 100
	cout << "A + B es mayor que 100 es: " << (a + b > 100) << endl;

	// vi. (a - b) == 0
	cout << "A - B es igual que 0 es: " << (a - b == 0) << endl;

	// vii. (a * b) > 500
	cout << "A * B es mayor que 500 es: " << (a + b > 500) << endl;

	// viii. (a * b) < 100
	cout << "A * B es menor que 100 es: " << (a * b < 100) << endl;

	// ix. (a - b) < 0
	cout << "A - B es menor que 0 es: " << (a - b < 0) << endl;

	// x.a < 20
	cout << "A es menor que 20 es: " << (a < 20) << endl;


return0;
}
