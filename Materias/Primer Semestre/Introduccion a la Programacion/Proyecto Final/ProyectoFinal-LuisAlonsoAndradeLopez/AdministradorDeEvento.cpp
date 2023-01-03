#include "AdministradorDeEvento.h"

AdministradorDeEvento::AdministradorDeEvento() {
    NombreDelEvento="";
    FechaDeInicio="";
    DiasDeDuracion="";
    NombreDelResponsableDeLaOrganizacion="";
    LugarDelEvento="";
    Clave="";
}

void AdministradorDeEvento::setNombreDelEvento(string ne) {
    NombreDelEvento=ne;
}

string AdministradorDeEvento::getNombreDelEvento() {
    return NombreDelEvento;
}


void AdministradorDeEvento::setFechaDeInicio(string fe) {
    FechaDeInicio=fe;
}


string AdministradorDeEvento::getFechaDeInicio() {
    return FechaDeInicio;
}


void AdministradorDeEvento::setDiasDeDuracion(string ddd) {
    DiasDeDuracion=ddd;
}


string AdministradorDeEvento::getDiasDeDuracion() {
    return DiasDeDuracion;
}


void AdministradorDeEvento::setNombreDelResponsableDeLaOrganizacion(string ndrdlo) {
    NombreDelResponsableDeLaOrganizacion=ndrdlo;
}


string AdministradorDeEvento::getNombreDelResponsableDeLaOrganizacion() {
    return NombreDelResponsableDeLaOrganizacion;
}


void AdministradorDeEvento::setLugarDelEvento(string lde) {
    LugarDelEvento=lde;
}


string AdministradorDeEvento::getLugarDelEvento() {
    return LugarDelEvento;
}

void AdministradorDeEvento::setClave(string clave) {
    Clave=clave;
}

string AdministradorDeEvento::getClave(){
    return Clave;
}


void AdministradorDeEvento::GeneradorDeClave() {
    int Contador; //Contador que recorre el string NombreDelEvento
    char VariableAuxiliar; //Variable que sirve para darle el mismo valor que el string NombreDelEvento en el algoritmo de este metodo

    Clave=""; //Limpia lo que tiene la clave

    //Aqui es donde empieza el algoritmo, ojo eh, el algoritmo



    //Este if lo que hace es que en la posicion 0 de NombreDelEvento si hay un espacio, haga una cosa u otra, pero solo se ejecuta este if 1 vez
    if(NombreDelEvento[0]!=' '){

        //este if verifica si el dato que esta en la posicion del contador en el NombreDelEvento hay una letra del abecedario en minuscula, y lo convierte en mayuscula
        if( (NombreDelEvento[0]>=97) && (NombreDelEvento[0]<=122) ){
            VariableAuxiliar=NombreDelEvento[0];
            VariableAuxiliar=VariableAuxiliar-32;
            Clave=Clave+VariableAuxiliar;
        }


        //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay un numero
        if( (NombreDelEvento[0]>=48) && (NombreDelEvento[0]<=57) ){
            VariableAuxiliar=NombreDelEvento[0];
            Clave=Clave+VariableAuxiliar;
        }


        //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay una letra mayuscula
        if( (NombreDelEvento[0]>=65) && (NombreDelEvento[0]<=90) ){
            VariableAuxiliar=NombreDelEvento[0];
            Clave=Clave+VariableAuxiliar;
        }


    }


    //Con este for hace que lo que este adentro de este for se repita las veces que tiene el NombreDelEventos
    for(Contador=0;Contador<NombreDelEvento.size();Contador++){

        //este if verifica si en la posicion de NombreDelEvento hay un espacio
        if(NombreDelEvento[Contador]==' '){

            //este if verifica si en la posicion siguiente del contador en NombreDelEvento hay un espacio
            if(NombreDelEvento[Contador+1]!=' '){



                //este if verifica si el dato que esta en la posicion del contador+1 en el NombreDelEvento hay una letra del abecedario en minuscula, y lo convierte en mayuscula
                if( (NombreDelEvento[Contador+1]>=97) && (NombreDelEvento[Contador+1]<=122) ){
                    VariableAuxiliar=NombreDelEvento[Contador+1];
                    VariableAuxiliar=VariableAuxiliar-32;
                    Clave=Clave+VariableAuxiliar;
                }



                //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay un numero
                if( (NombreDelEvento[Contador+1]>=48) && (NombreDelEvento[Contador+1]<=57) ){
                    VariableAuxiliar=NombreDelEvento[Contador+1];
                    Clave=Clave+VariableAuxiliar;
                }
                

                //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay una letra mayuscula
                if( (NombreDelEvento[Contador+1]>=65) && (NombreDelEvento[Contador+1]<=90) ){
                    VariableAuxiliar=NombreDelEvento[Contador+1];
                    Clave=Clave+VariableAuxiliar;
                }



            }
        }
    }




}


/*
//Hace lo mismo que el metodo GeneradorDeClave, solo que ahora es NombreDelEvento[Contador+Contador2] en lugar de NombreDelEvento[Contador+1]
void AdministradorDeEvento::GeneradorDeClaveSiEsRepetida() {
    int Contador; //Contador que recorre el string NombreDelEvento
    char VariableAuxiliar; //Variable que sirve para darle el mismo valor que el string NombreDelEvento en el algoritmo de este metodo

    Clave=""; //Limpia lo que tiene la clave

    //Aqui es donde empieza el algoritmo, ojo eh, el algoritmo



    //Este if lo que hace es que en la posicion 0 de NombreDelEvento si hay un espacio, haga una cosa u otra, pero solo se ejecuta este if 1 vez
    if(NombreDelEvento[0]!=' '){

        //este if verifica si el dato que esta en la posicion del contador en el NombreDelEvento hay una letra del abecedario en minuscula, y lo convierte en mayuscula
        if( (NombreDelEvento[0]>=97) && (NombreDelEvento[0]<=122) ){
            VariableAuxiliar=NombreDelEvento[0];
            VariableAuxiliar=VariableAuxiliar-32;
            Clave=Clave+VariableAuxiliar;
        }


        //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay un numero
        if( (NombreDelEvento[0]>=48) && (NombreDelEvento[0]<=57) ){
            VariableAuxiliar=NombreDelEvento[0];
            Clave=Clave+VariableAuxiliar;
        }


        //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay una letra mayuscula
        if( (NombreDelEvento[0]>=65) && (NombreDelEvento[0]<=90) ){
            VariableAuxiliar=NombreDelEvento[0];
            Clave=Clave+VariableAuxiliar;
        }


    }


    //Con este for hace que lo que este adentro de este for se repita las veces que tiene el NombreDelEventos
    for(Contador=0;Contador<NombreDelEvento.size();Contador++){

        //este if verifica si en la posicion de NombreDelEvento hay un espacio
        if(NombreDelEvento[Contador]==' '){

            //este if verifica si en la posicion siguiente del contador en NombreDelEvento hay un espacio
            if(NombreDelEvento[Contador+2]!=' '){



                //este if verifica si el dato que esta en la posicion del contador+1 en el NombreDelEvento hay una letra del abecedario en minuscula, y lo convierte en mayuscula
                if( (NombreDelEvento[Contador+2]>=97) && (NombreDelEvento[Contador+2]<=122) ){
                    VariableAuxiliar=NombreDelEvento[Contador+2];
                    VariableAuxiliar=VariableAuxiliar-32;
                    Clave=Clave+VariableAuxiliar;
                }



                //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay un numero
                if( (NombreDelEvento[Contador+2]>=48) && (NombreDelEvento[Contador+2]<=57) ){
                    VariableAuxiliar=NombreDelEvento[Contador+2];
                    Clave=Clave+VariableAuxiliar;
                }
                

                //este if lo que hace es ver si en la posicion 0 del NombreDelEvento hay una letra mayuscula
                if( (NombreDelEvento[Contador+2]>=65) && (NombreDelEvento[Contador+2]<=90) ){
                    VariableAuxiliar=NombreDelEvento[Contador+2];
                    Clave=Clave+VariableAuxiliar;
                }



            }
        }
    }




}

*/