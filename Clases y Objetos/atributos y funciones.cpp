#include <iostream>
using namespace std;


//Clase, se declaran fuera de cualquier función
class Enemigo
{
public:
    string tipo;
    int vida;
    int potencia;

    //Contructor enemigo
    class Enemigo(string tipo1, int vida1, int potencia1)
    {
        this->tipo = tipo1;
        this->potencia = potencia1;
        this->vida = vida1;
    }

    //Getter enemigo
    string getTipo()const
    {
        return tipo;
    }
    int getVida()const
    {
        return vida;
    }
    int getPotencia()const
    {
        return potencia;
    }

};

//Subclase
class Orco : public Enemigo
{
public:
    Orco(int vida1, int potencia1) :
        Enemigo("Orco", vida1, potencia1)
    {}

};

class Dragon : public Enemigo
{
public:
    Dragon (int vida1, int potencia1) :
        Enemigo("Dragon", vida1, potencia1)
    {}

};

class Hechicero : public Enemigo
{
public:
    Hechicero (int vida1, int potencia1) :
        Enemigo("Hechicero", vida1, potencia1)
    {}
};


class Jugador
{
public: //Por default las clases o atributos son privados. Solo se accesan dentro de la clase.
    string ID; //Identificador del jugador
    int vida;
    int potencia;
    //Un **constructor** genera un objeto o una instancia de una clase
    //Un **constructor** tienen el nombre de la clase
    
    //Contructor jugador
    class Jugador(string ID1, int vida1, int potencia1)
    {
        this->ID = ID1;
        this->potencia = potencia1;
        this->vida = vida1;

    }

    /*Getter = obtener informacion*/
    string getID()const
    {
        return ID;
    }
    int getVida()const
    {
        return vida;
    }
    int getPotencia()const
    {
        return potencia;
    }

    /*Setter = Establecer o actuailzar infromación*/
    void setID(string ID1)
    {
        this->ID = ID1;
    }
    void setVida(int vida1)
    {
        this->vida = vida1;
    }
    void setPotencia(int potencia1)
    {
        this->potencia = potencia1;
    }
    
    //Función prototipo, primera linea de la función terminando con ";"
    void ataque(Enemigo& enemigo);




};

int main()
{
    Jugador link("Link", 100, 20);
    cout << "Nombre: " << link.getID();
    cout << "Vida: " << link.getVida();
    cout << "Potencia: " << link.getPotencia();
    cout << endl;
    Orco orco(80, 10);
    Dragon dragon(300, 80);
    Hechicero hechicero(100, 200);
    cout << "Vida Orco" << orco.getVida();

}
