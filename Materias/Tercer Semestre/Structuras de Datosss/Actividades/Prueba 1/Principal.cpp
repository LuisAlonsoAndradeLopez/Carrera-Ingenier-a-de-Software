#include "Persona1.cpp"
#include <iostream>
using namespace std;

int main(){
    //Objeto estatico
    Persona1 p1;
    cout << p1.getEdad() << endl;
    cout << p1.getNombre() << endl;
    p1.setEdad(25);
    p1.setNombre("Maria");
    p1.~Persona1();

    //Objeto dinámico
    Persona1 *p2 = new Persona1();
    cout << p2 -> getEdad() << endl;
    cout << p2 -> getNombre() << endl;
    p2 -> setEdad(48);
    p2 -> setNombre("Jorge");

    delete p2;

    return 0;
}