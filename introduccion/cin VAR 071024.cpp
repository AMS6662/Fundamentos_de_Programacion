#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	//Ejercicio 4 - linea completo getline(cin.variable)
	
	//Introducir una línea completa de texto (string)
	// cin.ignore(); //Ignora la instrucción cin
	string nombreCompleto;
	cout << "Introduce tu nombre completo: ";
	getline(cin, nombreCompleto); //Obtiene una lista completa de texto
	cout << "Tu nombre completo: " << nombreCompleto << endl;

	//De qué tamaño es un string
	cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

	//Como acceder a un caracter específico de un texto (String)
	cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;


	//Ejercicio 5 - longitud de texto: una variable tipo string se puede accesar a la función lenght()
	// para obetener cuántos caracteres hay
	//De qué tamaño es un string
	cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

	//EJERCICIO 6 - Cómo acceder a un caracter específicp de un string o texto
	// [] = operador ínidice
	cout << "El primer caracter del nombre completo es: " << nombreCompleto[0] << endl;

	//EJERCICIO 7 - Cambiar un caracter específico de un string
	string cambio = "Hola";
	cambio[0] = 'h';
	cout << "Cambiar H por h: " << cambio << endl;

	//Ejercicio 8 - convertir un string a MAYUSCULAS
	string textoMinusculas = "texto a convertir: ";
	transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), toupper);
	cout << "Texto en Mayúsculas: " << textoMinusculas << endl;

	//EJERCCIO 9 - Convertir un string a minúsculas
	string textoMayusculas = "TEXTO A CONVERTIR";
	transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), tolower);
	cout << "Texto en minusculas: " << textoMayusculas << endl;

	//EJERCICIO 10 - Insertar un texto dentro de otro texto
	string textoPrincipal = "Jose, ";
	textoPrincipal.insert(6, "Luis");
	cout << "Insertar texto dentro de otro: " << textoPrincipal << endl;

	//EJERCICIO 11 - Revertir un texto
	string textoRevertir = "Hola, mundo!";
	reverse(textoRevertir.begin(), textoRevertir.end());
	cout << "Texto revertido: " << textoRevertir << endl;

	//EJERCICIO 12 - Convertir un número a un string
	int n1 = 123;
	string NumeroAtexto = to_string(n1);
	cout << "Numero como string: " << NumeroAtexto << endl;

	//EJERCICIO 13 - Convertir un string a número 
	string TextoAnumero = "123";
	int n2 = stoi(TextoAnumero);
	cout << "String como número: " << n2 << endl;







	return 0;
}
