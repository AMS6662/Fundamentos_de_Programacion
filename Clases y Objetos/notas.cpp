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
public:
	string nombre;
	int cuenta;

	//Funciones de la estructura
public:
	static void altaAlumno()
		{
		//Tipo de dato -> Alumno alumno <- Nombre de la variable
		Alumno alumno;
		cout << "Ingrese su nombre: ";
		cin >> alumno.nombre;

		cout << "Ingrese su numero de cuenta: ";
		cin >> alumno.cuenta;

		imprimeDatos(alumno);

		}

	static void imprimeDatos(Alumno alumno)
	{
		cout << "Nombre: " << alumno.nombre << endl;
		cout << "Cuenta: " << alumno.cuenta << endl;
		cout << endl;
	}
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
