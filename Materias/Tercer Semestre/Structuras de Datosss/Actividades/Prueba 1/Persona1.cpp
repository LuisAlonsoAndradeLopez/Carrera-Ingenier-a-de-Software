#include "Persona1.h"
#include <iostream>
using namespace std;

Persona1::Persona1(){
    this -> nombre = "rene";
    this -> edad = 21;
}

string Persona1::getNombre(){
    return this -> nombre;
}

int Persona1::getEdad(){
    return this -> edad;
}

void Persona1::setNombre(string _nombre){
    this -> nombre = _nombre;
}

void Persona1::setEdad(int _edad){
    this -> edad = _edad;
}