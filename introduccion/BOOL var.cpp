#include <iostream>
#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
    bool BB = true;
    cout << BB << endl;

    //OPCIONES LÓGICAS (true, false)
    // && -> and (disyunción) -> mujer AND <60
    // || -> or (conjunción) -> kitkat OR snickers OR milkyway
    // ! -> not -> NOT(mujer) = false

    cout << boolalpha; //Imprime true en lugar de 1

    //Enteros
    int n1 = 10;
    int n2 = 20;

    //Floats
    float f1 = 1.5;
    float f2 = 5.2;

    //1. Igualdad
    cout << "(n1 == n2): " << (n1 == n2) << endl;
    cout << "(f1 == f2): " << (f1 == f2) << endl;

    //2. Desigualdad
    cout << "(n1 != n2): " << (n1 != n2) << endl;
    cout << "(f1 != f2): " << (f1 != f2) << endl;

    //3. Mayor que
    cout << "(n1 > n2): " << (n1 > n2) << endl;
    cout << "(f1 > f2): " << (f1 > f2) << endl;

    //4. Menor que 
    cout << "(n1 > n2): " << (n1 > n2) << endl;
    cout << "(f1 > f2): " << (f1 > f2) << endl;

    //5. Mayor o igual que
    cout << "(n1 >= n2): " << (n1 >= n2) << endl;
    cout << "(f1 >= f2): " << (f1 >= f2) << endl;

    //6. Menor o igual que
    cout << "(n1 <= n2): " << (n1 <= n2) << endl;
    cout << "(f1 <= f2): " << (f1 <= f2) << endl;

    //7. Comparaciones de tipos mixtos
    cout << "(n1 > f2): " << (n1 > f2) << endl;
    cout << "(f1 < n2): " << (f1 < n2) << endl;

    //8. Valores negativos
    cout << "(n1 > - n2): " << (n1 > -n2) << endl;
    cout << "(f1 < - f2): " << (f1 < -f2) << endl;

    //9. Combinación de compraciones
    // Se puede utilizar AND o &&
    // Se puede utilizar OR o ||
    cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) and (f1 > f2)) << endl;
    cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) or (f1 == 5.2)) << endl;

    //10. Comparaciones anidadas
    cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
    cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

    //11. Comparaciones con constantes
    cout << "(n1 == 10): " << (n1 == 10) << endl;
    cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

    //12. Comparación con los resultados de las operaciones artiméticas
    cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
    cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 + n2) < (f1 / f2)) << endl; 

    // 13. Comparación de resultados positivos y negativos
    cout << "((-n1) < n2): " << ((-n1) < n2) << endl;
    cout << "((-f1) > f2): " << ((-f1) < f2) << endl;

    //14. Combinación de aritméticas y comparación
    cout << "(( -n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
    cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;

    // 15. Comparaciones encadenadas
    cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
    cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;

    //16. Comparación de módulos
    cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;
    
    //Operadores Lógicos
    bool p = true, q = false;

    //17. Lógico AND
    cout << "(p and q): " << (q and p) << endl;

    //18. OR Lógico
    cout << "(p or q)" << (p or q) << endl;

    //19. Lógico NOT
    // Puedes usar not o !
    cout << "(!p): " << (not(p)) << endl;

    //20. Combinación de AND y NOT
    cout << "(p and not(q)): " << endl;

    //21. Doble NOT 
    cout << "(not(not(q))): " << (not(not(q))) << endl;

    //22. Operaciones mixtas
    cout << "(not(p and q) or (p or not(q))): " << endl;

    //23. Asignación de variables con operadores lógicos
    bool a = p and q;
    cout << "Valor asignado a variable 'a': " << a << endl;

    //24. Operaciones lógicas con números enteros (distinto de 0 es verdadero, cero es falso)
    int x = 5, y = 0;
    cout << "(x and y): " << (x and y) << endl;

    //25. Operaciones lógicas con tipos de datos mixtos
    float m = 3.5, n = 0.0;
    cout << "(m or n): " << (m or n) << endl;

    //26. Expresiones complejas
    cout << "((p or q) and (x or n)): " << ((p or q) and (x or n)) << endl;

    //27. Expresiones anidadas
    cout << "((x && !(y)) && (m || !(q))): " << ((x and not(y)) and (m or not(q))) << endl;

    //28. Operaciones lógicas con números de punto flotante
    cout << "((m > n) and (m <= 3.5)): " << ((m > n) and (m <= 3.5)) << endl;

    //29. Uso de operadores lógicos con comparación de cadenas de texto (string)
    string str1 = "hola", str2 = "mundo!"; 
    cout << "(str1 == str2) or (str1 != str2)): " << ((str1 == str2) or str1 != str2) << endl;




}
