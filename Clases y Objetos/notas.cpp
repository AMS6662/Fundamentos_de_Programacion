/*Clases y Objetos
Clases
Estructura o mapa de la infromación que contiene un objeto

Objetos
Una instancia   de una clase
- Encapsulación. Funciones y información son unidas*/


#include <iostream>
using namespace std;

struct Alumno
{
	//Atributos o propiedades
	string nombre;
	int cuenta;
};

int main()
{
	Alumno Alex;
	Alex.nombre = "Alex";
	Alex.cuenta = 12345;

	Alumno Angela;
	Angela.nombre = "Angela";
	Angela.cuenta = 67890;

	cout << "Nombre: " << Alex.nombre << endl;
	cout << "Cuenta: " << Alex.cuenta << endl;
	cout << endl;

	cout << "Nombre: " << Angela.nombre << endl;
	cout << "Cuenta: " << Angela.cuenta << endl;

}

  
