#include <iostream>
#include <string>
using namespace std;

struct Carrera{
    string nombre;
    int estudiantes;
};

int main(){
    Carrera carreras[3], *puntero = &carreras[0], *carreraConMasAlumnos = &carreras[0];
    int tamanoCarreras = sizeof(carreras) / sizeof(carreras[0]);

    for(int i = 0; i < tamanoCarreras; i++){
        cin.ignore();
        getline(cin, puntero -> nombre);
        cin >> puntero -> estudiantes;
        puntero++;
    }

    puntero -= tamanoCarreras - 1;

    for(int i = 0; i <= tamanoCarreras; i++){
        if(puntero -> estudiantes > carreraConMasAlumnos -> estudiantes){
            carreraConMasAlumnos++;
            puntero++;
        }
    }

    cin.ignore();
    cout << carreraConMasAlumnos -> nombre << endl;
    cout << carreraConMasAlumnos -> estudiantes << endl;
    
    return 0;
}