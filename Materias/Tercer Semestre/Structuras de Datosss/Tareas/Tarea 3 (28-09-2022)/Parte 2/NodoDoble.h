typedef char Dato; //typedef es como guía, pues en lugar de poner de tipo int en el metodo datoNodo, ponemos Dato, para que sea más facil identificarlo
#ifndef _NODODOBLE_H //Le dice al compilador que si no lo ha compilado...
#define _NODODOBLE_H //Compilalo, si ya lo compiló, ya no lo compiles.

class NodoDoble{
    protected:
        NodoDoble *adelante;
        Dato dato;
        NodoDoble *atras;
    
    public:
        NodoDoble(Dato t){
            adelante = 0;
            dato = t;
            atras = 0;
        }
        
        NodoDoble* adelanteNodo() const{
            return adelante;
        }

        Dato datoNodo() const{
            return dato;
        }

        NodoDoble* atrasNodo() const{
            return atras;
        }

        void ponerAdelante(NodoDoble* a){
            adelante = a;
        }

        void ponerAtras(NodoDoble* a){
            atras = a;
        }
};

#endif //Para cerrar