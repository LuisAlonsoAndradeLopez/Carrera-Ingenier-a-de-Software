#ifndef NODOCIRCULAR_H_
#define NODOCIRCULAR_H_
typedef int Dato;
class NodoCircular{
    protected:
        Dato dato;
        NodoCircular *enlace;

    public:
        NodoCircular(Dato t){
            dato = t;
            enlace = this; //se apunta a si mismo
        }

        Dato datoNodo() const{
            return dato;
        }

        NodoCircular* enlaceNodo() const{
            return enlace;
        }

        void ponerEnlace(NodoCircular* a){
            enlace = a;
        }
};
#endif