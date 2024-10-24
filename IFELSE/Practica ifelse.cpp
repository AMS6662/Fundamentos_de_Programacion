#include <iostream>
#include <iomanip>
#include <limits>
#include <locale>
using namespace std;

int main()
{
    /*1.Encontrar si un número es par o impar.* /

    /*2. Encontrar el mayor de dos números, solicita los dos números de tipo int.*/
    int n1, n2;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << endl;
    cout << "Ingrese otro numero: ";
    cin >> n2;
    cout << endl;

    if (n1 > n2)
    {
        cout << "El numero mayor es " << n1 << endl;
        cout << endl;
    }
    else
    {
        cout << "El numero mayor es " << n2 << endl;
        cout << endl;
    }

    /*3. Solicitar la edad de la persona y si esta es mayor de edad, escribir en pantalla “Mayor de edad” de lo contrario “Menor de edad”*/
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << endl;

    if (edad > 18)
    {
        cout << "Es mayor de edad" << endl;
    }
    else
    {
        cout << "Es menor de edad" << endl;
        cout << endl;
    }

    /*4. Solicitar la temperatura si esta es menor a 10 grados, escribir en pantalla “hace mucho frío”, si la temperatura es entre mayor a 10
    grados y menor a 17 grados, escribir en pantalla “hace frío” y por último si es mayor a 17 grados, escribir en pantalla “el clima es templado”.*/
    int temp;

    cout << "Ingrese la temperatura: ";
    cin >> temp;
    cout << endl;

    if (temp < 10)
    {
        cout << "Hace mucho frio" 
            << endl;
    }
    if (temp >= 10 
        and temp <= 17)
    {
        cout << "Hace frio" 
            << endl;
    }
    if (temp > 17)
    {
        cout << "El clima es templado"
            << endl;
    }

    /*5. Preguntar si al usuario si está a favor de la paz, guardar en una variable tipo char llamada voto, validar si el voto es ‘S’ o el voto es
    ‘N’ escribir en pantalla “voto valido” en caso de que sea cualquier otro carácter escribir, “voto invalido”*/
    char voto; 

    cout << "Esta a favor de la paz?" << endl;
    cout << "S/N: ";
    cin >> voto;

    if (voto == 's' 
        or voto == 'n' 
        or voto == 'S' 
        or voto == 'N')
    {
        cout << "Voto valido" << endl;
    }
    else
    {
        cout << "Voto invalido";
    }


    /*6. Preguntar al usuario cuantas horas ha trabajado el empleado durante la semana, si, el empleado trabajo más de 40 horas, el excedente de horas
    se multiplicará por 75 pesos y publicar este cálculo en pantalla que será el bono del empleado.*/
    /*7. Crear dos variables de tipo int, que guarden el día y mes, del cumpleaños del usuario. Si la fecha corresponde a mes 9 y día 15, escribir en pantalla, “Feliz cumpleaños”*/
    /*8. Crear una variable que se llame velocidad, pregunta por este valor, si esta es negativa, escribir en pantalla “velocidad negativa”, si la velocidad es cero, escribir en pantalla 
    “en reposo”, y si es positiva escribir en pantalla “velocidad positiva”.*/
    /*9. Crear las siguientes variables de tipo int: huevos, mantequilla, leche, harina, levadura, azucar y sal. Asigna valores aleatorios a cada variable, entre 1 y 5. Si todos los
    ingredientes tienen al menos un elemento, escribir en pantalla “Puedes crear hot cakes” de lo contrario escribir en pantalla “No hay suficientes ingredientes”*/
    /*10. Crear un programa en C++ que determine cuantos hot cakes se pueden hacer basado en la pregunta anterior.* /
    */
}


