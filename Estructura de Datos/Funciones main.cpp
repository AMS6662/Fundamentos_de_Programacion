
/*Código con propósito específico
- Update() -> Actualizacion
- OnCreate() -> Inicializar
- main() -> Punto de entrada
!!!!! NO se pueden definir funciones dentro de otras funciones !!!!!
- Llamado o llamado cuando lo necesitas
- Divide y vencerás (break down the problem to accurately and best design the solution)*/

#include <iostream>
using namespace std;

//Variables globales: fuera de la función main
int n1, n2;


//Variable local
void suma(int n1, int n2)
// void nombre_funcion(tipo identificador , tipo identificador)
{
	//Suma con parámetros
	cout << n1 + n2 << endl;
}

void pedirNumeros()
{
	cout << "Dame el número 1: ";
	cin >> n1;
	cout << endl;

	cout << "Dame el numero 2: ";
	cin >> n2;
	cout << endl;

}

//funciones
void hola()
{
	cout << "Hola mundo!";
}

int main() //Punto de entrada
{
	pedirNumeros();
	suma(n1, n2); //n1 y n2 son argumentos
}
