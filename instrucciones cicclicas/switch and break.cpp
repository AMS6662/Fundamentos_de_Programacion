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




}
