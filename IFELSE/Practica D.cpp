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

/*1.18 Crear un programa al que le solicitemos la hora HH, MM, SS y nos calcule la hora
dentro de un segundo más tarde. Leeremos las horas minutos y segundos como números
enteros*/

	int HH, MM, SS;

	cout << "Ingrese la hora: ";
	cin >> HH;
	cout << endl;

	cout << "Ingrese los minutos: ";
	cin >> MM;
	cout << endl;

	cout << "Ingrese los segundos: ";
	cin >> SS;
	cout << endl;

	if (SS != 59 and MM != 59)
	{
		SS++;
		cout << "La hora es " << HH << ":" << MM << ":" << SS;
	}

	if (SS == 59 and MM != 59)
	{
		MM++;
		cout << "La hora es: " << HH << ":" << MM << ":00";
	}

	if (MM == 59 and SS == 59)
	{
		HH++;
		cout << "La hora es: " << HH << ":00:00";
	}

/*1.19 Determinar el precio del boleto de ida y vuelta en avión, conociendo la distancia a
recorrer y sabiendo que si el número de días de estancia es superior a 7 y la distancia
superior a 800 km el billete tiene una reducción del 30%. El precio por km es de 2.5
dólares. */
	int dias;
	double recorrido, precioKm = 2.5;

	cout << "Ingrese la distancia a recorrer: ";
	cin >> recorrido;
	cout << endl;

	cout << "Ingrese los dias de estancia: ";
	cin >> dias;
	cout << endl;

	double precioBoleto = precioKm * recorrido;


	if (recorrido >= 800 and dias >= 7)
	{
		double descuento = precioBoleto * .70;
		cout << "El precio del boleto es: " << descuento << endl;
	}

	else
	{
		cout << "El precio del boleto es: " << precioBoleto << endl;
	}

	/*1.20 Escribir las instrucciones apropiadas para cada una de las siguientes condiciones:
	* 
a) Si un ángulo es igual a 90 grados, imprimir el mensaje "El ángulo es un ángulo
recto" sino imprimir el mensaje "El ángulo no es un ángulo recto".*/
	int angulo;

	cout << "Ingrese un angulo: ";
	cin >> angulo;
	cout << endl;

	if (angulo == 90)
	{
		cout << "El angulo es un angulo recto" << endl;
		cout << endl;
	}
	else
	{
		cout << "El angulo no es un angulo recto" << endl;
		cout << endl;
	}


/*b) Si la temperatura es superior a 100 grados, visualizar el mensaje “por encima
del punto de ebullición del agua” sino visualizar el mensaje “por debajo del
punto de ebullición del agua”.*/
	int temperatura;

	cout << "Ingresar la temperatura del agua: ";
	cin >> temperatura;
	cout << endl;

	if (temperatura >= 100)
	{
		cout << "Por encima del punto de ebullicion del agua" << endl;
		cout << endl;
	}
	else
	{
		cout << "Por debajo del punto de ebullicion del agua" << endl;
		cout << endl;
	}


/*c) Recibir un número, Si este número es positivo, sumar el número a total de
positivos usando una variable que acumule los números negativos, sino sumar al
total de negativos usando una variable que acumule los números negativos.*/
	int n1;

	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << endl;

	if (n1 % 2)
	{

	}


/*d) Si “x” es mayor que “y”, y “z” es menor que “y”, imprimir “x”.*/

/*e) Si la distancia es mayor que 20 y menos que 35, crear y leer un valor para luna
variable de tipo entero llamada “tiempo”. */

}
