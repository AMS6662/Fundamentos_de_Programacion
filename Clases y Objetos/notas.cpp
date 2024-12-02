/*Clases y Objetos
Clases
Estructura o mapa de la infromación que contiene un objeto

Objetos
Una instancia   de una clase
- Encapsulación. Funciones y información son unidas*/

#include <iostream>
#include <vector>
using namespace std;

struct Alumno
{
	//Atributos o propiedades
public:
	string nombre;
	int cuenta;

	//Funciones de la estructura
public:
	static void altaAlumno(vector <Alumno> & v1)
		{
		//Tipo de dato -> Alumno alumno <- Nombre de la variable
		Alumno alumno;
		cout << "Ingrese su nombre: ";
		cin >> alumno.nombre;

		cout << "Ingrese su numero de cuenta: ";
		cin >> alumno.cuenta;
		v1.push_back(alumno);

		}

	static void imprimeDatos(vector <Alumno> v1)
	{
		cout << "Tamano del vector: " << v1.size() << endl;
		cout << endl;
		for (int i = 0; i < v1.size(); i++)
		{
			cout << "Nombre: " << v1[i].nombre << endl;
			cout << "Cuenta: " << v1[i].cuenta << endl;
		}
	}
};
