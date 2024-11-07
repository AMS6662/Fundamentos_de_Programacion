/*switch (valor/variable)
switch -> case
break -> romper
switch / ciclo
{
case valor1:
instrucciones
  break;
case valor2:
instrucciones
  break;
default;
break;
}*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <locale>
using namespace std;


int main()
{
    int nMes = 0;
    cout << "Numero de mes ";
    cin >> nMes;
    switch (nMes)
    {
    case 1:
        cout << "ENERO" << endl;
        break;
    case 2:
        cout << "FEBRERO" << endl;
        break;
    case 3:
        cout << "MARZO" << endl;
        break;
    case 4:
        cout << "ABRIL" << endl;
        break;
    case 5:
        cout << "MAYO" << endl;
        break;
    case 6:
        cout << "JUNIO" << endl;
        break;
    case 7:
        cout << "JULIO" << endl;
        break;
    case 8:
        cout << "AGOSTO" << endl;
        break;
    case 9:
        cout << "SEPTIEMBRE" << endl;
        break;
    case 10:
        cout << "OCTUBRE" << endl;
        break;
    case 11:
        cout << "NOVIEMBRE" << endl;
        break;
    case 12:
        cout << "DICIEMBRE" << endl;
        break;

    default:
        break;
    }


  /*taking as an exmaple excercice 2.24 frompractice E
    
	srand(time(NULL)); //semilla
	int castigo = 0, i = 0;
	while (i <= 10) 
	{
		castigo = rand() % 2; //el numero after % es el limite del comando, por eso esto solo genera 0 o 1
		// si el limite fuera 3 (rand() % 3) solo se generarian 0, 1 y 2
		cout << castigo << endl;
		i++;
	} */

	{
	srand(time(NULL)); //semilla
	int castigo = 0;
	int vida = 12;
	int premio = 0;

	cout << "Vida inicial: " << vida << endl;


	while (vida > 0)
	{
		vida--; //deducir uno de vida
		cout << "Costo por ciclo: " << vida << endl;
		castigo = rand() % 2; // castigo?

		if (castigo == 1)
		{
			castigo = castigo - 3;
		}

		premio = rand() % 2;
		if (premio == 1)
		{
			vida = vida + 1;
			cout << "Castigo: " << vida << endl;
		}

		cout << "Vida despues de ciclo: " << vida << endl;

	}


}


}
