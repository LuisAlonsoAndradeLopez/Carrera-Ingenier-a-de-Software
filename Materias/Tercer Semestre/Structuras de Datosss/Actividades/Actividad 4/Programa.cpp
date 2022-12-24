#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

void mostrarDatos(Persona*);

int main(){
    Persona rene, *persona = &rene;
    getline(cin, persona -> nombre);
    cin >> persona -> edad;
    mostrarDatos(persona);
}

void mostrarDatos(Persona *persona){
    cout << persona -> nombre << endl;
    cout << persona -> edad << endl;
}