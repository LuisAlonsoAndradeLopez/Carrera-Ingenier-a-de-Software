#ifndef Persona1h //NO PONGAS EL PUNTOOOOOOO
#define Persona1h

#include <iostream>
#include <string>
using namespace std;


class Persona1{
    private:
        string nombre;
        int edad;

    public:
        Persona1();
        ~Persona1();
        string getNombre();
        int getEdad();
        void setNombre(string _nombre);
        void setEdad(int _edad);
};

#endif