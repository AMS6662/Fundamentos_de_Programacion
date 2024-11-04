//C. INSTRUCCIONES CICLICAS
// WHILE

 /*1. Imprimir los números naturales usando la instrucción while. Crear una variable que incremente el número desde cero.*/
int i = 0;
while (i <= 9);
{
cout << i << " , ";
i++;
}

/*2. Sumar los números naturales usando la instrucción while, usando una variable adicional para acumular el resultado.*/
    int suma = 0, i = 0;
    
    while (i <= 9)
    {
        cout << i << " , ";
        suma = suma + i;
        i++;
    }
    cout << endl;
    cout << "total: " << suma << endl;


// DO WHILE
/*3. Calcular el factorial de un número usando la instrucción while, usando una variable adicional para acumular el resultado de las multiplicaciones*/
    int opcion1 = 0;

    do
    {
        cout << "Menu opciones " << endl;
        cout << "1. Ejecuctar opcion 1" << endl;
        cout << "2. Ejecuctar opcion 2" << endl;
        cout << "3. Ejecuctar opcion 3" << endl;
        cout << "4. Ejecuctar opcion 4" << endl;
        cout << "5. Ejecuctar opcion 5" << endl;
        cout << "6. Salir " << endl;
        cin >> opcion1;
     
    } while (opcion1 != 6);

}
