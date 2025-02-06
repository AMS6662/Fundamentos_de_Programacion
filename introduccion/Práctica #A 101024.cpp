#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
//Ejercicios del Módulo: Tipo de Variables.
//Sección: Declaración de Variables.
//[TIPOS DE VARIABLE Y CODIFICACIÓN, Conteste la pregunta y genere la respuesta en código en C++] 
//Declare una variable tipo int que tenga el número de materias que estás cursando actualmente.
int numeroMaterias = 6;

//[TIPOS DE VARIABLE Y CODIFICACIÓN, Conteste la pregunta y genere la respuesta en código en C++] Declare una variable tipo int que guarde el valor del cuatrimestre que estás cursando.
int cuatriNumero = 5;

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo string con identificador “materia”, e inicializar con el nombre de esta materia.
string materia = “Fundamentos de programación”;

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo string con identificador “cuenta”, e inicializar con el tu número de cuenta/matricula del Unitec.
int n1 = 335016546;
string numeroCuenta = to_string (n1);

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable de tipo string con identificador “nombre”, e inicializar con tu nombre(s) propio(s).
string nombre = “Alexander”;

//1.7 [CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable de tipo string con identificador “apellidoPaterno”, e inicializar con tu apellido paterno.
string apellidoPaterno = “Morales”;


//1.8  [CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable de tipo string con identificador “apellidoMaterno”, e inicializar con tu apellido materno.
string apellidoMaterno = “Salazar”;

//1.9 [CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo long con identificador “celular”, e inicializar con tu número celular.
long long telCelular = 5539846662;

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo long con identificador “casa”, e inicializar con tu número de casa.
long long telCasa = 0;

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo string con identificador “correoQueMasUso”, e inicializar con el correo electrónico que más uses.
string correoQueMasUso = “alexela1912003@gmial.com”;

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo string con identificador “correMyUnitec”, e inicializar con el correo electrónico que tienes asignado en el Unitec
string correoMyUnitec = “alexander.morales35@my.unitec.edu.mx”;

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo string con identificador “carrera”, e inicializar con la carrera que cursas actualmente en el Unitec.
string carrera = “Diseño, Animación y Arte Digital”;

//[CODIFICACIÓN, genere la respuesta en código en C++] Declara una variable tipo bool con identificador “blackboard”, e inicializar con valor true, si lo has usado anteriormente, de lo contrario inicializar con valor false.
bool blackboard = true;

//Ejercicios del Módulo: Tipo de Variables.
//Sección: Análisis de errores de sintaxis.
//Ejercicio 1:
int 1numero = 5; -> La sintaxis es correcta

//Ejercicio 2:
float valor@ = 3.14; -> La sintaxis es incorrecta. La sintaxis correcta es: 
float valor = 3.14;

//Ejercicio 3:
double double = 9.81; -> La sintaxis es incorrecta. La sintaxis correcta es:
double promedio = 9.81;

//Ejercicio 4:
char letra = 'AB'; -> La sintaxis es incorrecta. La sintaxis correcta es:
char letra = ‘A’;

//Ejercicio 5:
bool esVerdadero = "true"; -> La sintaxis es correcta

//Ejercicio 6:
int numero = 10.5; -> La sintaxis es incorrecta. La sintaxis correcta es:
int float = 10.5;

//Ejercicio 7:
string nombre = 'Juan'; -> La sintaxis es incorrecta. La sintaxis correcta es:
string nombre = “Juan”;

//Ejercicio 8:
const int PI = 3.14; -> La sintaxis es incorrecta. La sintaxis correcta es:
const float PI = 3.14;


//Ejercicio 9:
int suma = 5 + ; -> La sintaxis es incorrecta. La sintaxis correcta es:
int suma = 5 + 3;

//Ejercicio 10:
   int numero; 
   numero = 10 -> La sintaxis es correcta solo falta “;” en la segunda línea

//Ejercicio 11:
int numero = "diez"; -> La sintaxis es incorrecta. La sintaxis correcta es:
int numero = 10;

//Ejercicio 12:
float altura = 1,75;  -> La sintaxis es incorrecta. La sintaxis correcta es:
float altura = 1.75;

//Ejercicio 13:
char inicial = "J";  -> La sintaxis es incorrecta. La sintaxis correcta es:
char inicial = ‘J’;

//Ejercicio 14:
bool esMayor = 1;  -> La sintaxis es incorrecta. La sintaxis correcta es:
bool esMayor = true (Las variables tipo bool solo pueden ser = true o = false)

//Ejercicio 15:
string apellido = Juan;  -> La sintaxis es incorrecta. La sintaxis correcta es:
string apellido = “Juan”;

//Ejercicio 16:
int resultado = 5 * ;  -> La sintaxis es incorrecta. La sintaxis correcta es:
int resultado = 5 * 3;


//Ejercicio 17:
double area = 3.14 * radio^2;  -> La sintaxis es incorrecta. La sintaxis correcta es:
double radio = 5.5;
double area = 3.14 * (radio * radio);

//Ejercicio 18:
int edad = 25 -> La sintaxis es correcta, solo falta “;”

//Ejercicio 19:
float peso = 70.5f; -> La sintaxis es incorrecta. La sintaxis correcta es:
float peso = 70.5;

Ejercicio 20:
int suma = 10 + 2 -> La sintaxis es correcta, solo falta “;”

}
