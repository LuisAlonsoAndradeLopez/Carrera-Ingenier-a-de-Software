typedef int Dato; //typedef es como guía, pues en lugar de poner de tipo int en el metodo datoNodo, ponemos Dato, para que sea más facil identificarlo
#ifndef _NODO_H //Le dice al compilador que si no lo ha compilado...
#define _NODO_H //Compilalo, si ya lo compiló, ya no lo compiles.

class NodoFinal{
    protected:
        Dato dato;
        NodoFinal* enlace;
    
    public:
        NodoFinal(){
            dato = t;
            enlace = NULL;
        }

        NodoFinal(Dato t, Nodo* n){
            dato = t;
            enlace = n;
        }

        Dato datoNodo() const{
            return dato;
        }

        NodoFinal* enlaceNodo() const{
            return enlace;
        }

        void ponerEnlace(Nodo* sig){
            enlace = sig;
        }
};

#endif //Para cerrar