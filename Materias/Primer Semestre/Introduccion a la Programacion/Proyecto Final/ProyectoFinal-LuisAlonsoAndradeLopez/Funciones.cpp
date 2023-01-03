#include <iostream>

void MostradorYAsignador(int, AdministradorDeEvento []);
void FuncionCase2(AdministradorDeEvento [], bool);
void FuncionCase3(AdministradorDeEvento [], bool, int);
bool FuncionCase4();
void EliminadorDeDatosClaseAdministradorDelEvento(int, AdministradorDeEvento []);
void VerificadorContrasenaRepetida(int, AdministradorDeEvento []);

//Esta funcion muestra el menu principal
void MenuPrincipal(void){
    cout<<"Presiona 1 para Registrar evento"<<endl;
    cout<<"Presiona 2 para Modificar informaci"<<char(162)<<"n de evento"<<endl;
    cout<<"Presiona 3 para Consultar eventos"<<endl;
    cout<<"Presiona 4 para Salir"<<endl;
}





//Funcion que muestra y das los atributos del objeto
void MostradorYAsignador(int ContadorArrayEventos, AdministradorDeEvento Eventos[10]){

 //Estas variables son para interactuar con la clase
    string NombreDelEvento;
    string FechaDeInicio;
    string DiasDeDuracion;
    string NombreDelResponsableDeLaOrganizacion;
    string LugarDelEvento;



    //Para dar valor a los atributos de la clase es de aqui
    cout<<"Nombre del evento"<<endl;
    cin.ignore();
    getline(cin,NombreDelEvento);
    Eventos[ContadorArrayEventos].setNombreDelEvento(NombreDelEvento);

    cout<<"Fecha de inicio"<<endl;
    getline(cin,FechaDeInicio);
    Eventos[ContadorArrayEventos].setFechaDeInicio(FechaDeInicio);

    cout<<"Dias de duracion"<<endl;
    getline(cin, DiasDeDuracion);
    Eventos[ContadorArrayEventos].setDiasDeDuracion(DiasDeDuracion);

    cout<<"Nombre del responsable de la organizacion"<<endl;
    getline(cin,NombreDelResponsableDeLaOrganizacion);
    Eventos[ContadorArrayEventos].setNombreDelResponsableDeLaOrganizacion(NombreDelResponsableDeLaOrganizacion);

    cout<<"Lugar del evento"<<endl;
    getline(cin,LugarDelEvento);
    Eventos[ContadorArrayEventos].setLugarDelEvento(LugarDelEvento);
    //hasta aqui


}







//Esta funcion borra todo lo que tengan los atributos de la clase AdministradorDeEvento
void EliminadorDeDatosClaseAdministradorDelEvento(int ContadorArrayEventos, AdministradorDeEvento Eventos[10]){
    //Estas variables son para interactuar con la clase
    string NombreDelEvento="";
    string FechaDeInicio="";
    string DiasDeDuracion="";
    string NombreDelResponsableDeLaOrganizacion="";
    string LugarDelEvento="";

    Eventos[ContadorArrayEventos].setNombreDelEvento(NombreDelEvento);
    Eventos[ContadorArrayEventos].setFechaDeInicio(FechaDeInicio);
    Eventos[ContadorArrayEventos].setDiasDeDuracion(DiasDeDuracion);
    Eventos[ContadorArrayEventos].setNombreDelResponsableDeLaOrganizacion(NombreDelResponsableDeLaOrganizacion);
    Eventos[ContadorArrayEventos].setLugarDelEvento(LugarDelEvento);

}




void FuncionCase2(AdministradorDeEvento Eventos[10], bool DeclaradorSiHayEventosRegistrados){
    //Estas variables son para interactuar con esta funcion
    string ClaveParaVerificar;
    int RecorredorArrayEventos; //recorre todo el ArrayEventos con el ciclo for
    int ContadorParaDarError=0;

    //Estas variables son para interactuar con la clase
    string NombreDelEvento;
    string FechaDeInicio;
    string DiasDeDuracion;
    string NombreDelResponsableDeLaOrganizacion;
    string LugarDelEvento;

    //Verifica si hay eventos registrados o no
    if(DeclaradorSiHayEventosRegistrados==true){

        cin.ignore();//evita bugs
        cout<<"Dime la clave del evento para cambiar sus datos"<<endl;
        getline(cin, ClaveParaVerificar);

        //system("cls");
        for(RecorredorArrayEventos=0;RecorredorArrayEventos<=9;RecorredorArrayEventos++){


            //Verifica se la clave si pusiste coincide con alguna clave de un evento
            if(ClaveParaVerificar==Eventos[RecorredorArrayEventos].getClave()){

                //Mostrara los datos que tiene el evento con la clave que le diste

                cout<<"Nombre del evento: "<<Eventos[RecorredorArrayEventos].getNombreDelEvento()<<endl;
                cout<<"Fecha de inicio: "<<Eventos[RecorredorArrayEventos].getFechaDeInicio()<<endl;
                cout<<"Dias de duracion: "<<Eventos[RecorredorArrayEventos].getDiasDeDuracion()<<endl;
                cout<<"Nombre del responsable de la organizacion: "<<Eventos[RecorredorArrayEventos].getNombreDelResponsableDeLaOrganizacion()<<endl;
                cout<<"Lugar del evento: "<<Eventos[RecorredorArrayEventos].getLugarDelEvento()<<endl;


                cout<<endl;
                cout<<"Pon el nuevo dato, presiona enter sin haber escrito nada para no modificar el dato"<<endl;


                //Para dar valor a los atributos de la clase es de aqui
                cout<<"Nombre del evento"<<endl;
                getline(cin,NombreDelEvento);
                if(NombreDelEvento!="\0"){//conjunto vacio para que no modifique nada cuando pongas enter sin haber escrito nada
                    Eventos[RecorredorArrayEventos].setNombreDelEvento(NombreDelEvento);
                }

                system("cls");
                
                cout<<"Fecha de inicio"<<endl;
                getline(cin,FechaDeInicio);
                if(FechaDeInicio!="\0"){
                    Eventos[RecorredorArrayEventos].setFechaDeInicio(FechaDeInicio);
                }

                cout<<"Dias de duracion"<<endl;
                getline(cin, DiasDeDuracion);
                if(DiasDeDuracion!="\0"){
                    Eventos[RecorredorArrayEventos].setDiasDeDuracion(DiasDeDuracion);
                }

                cout<<"Nombre del responsable de la organizacion"<<endl;
                getline(cin,NombreDelResponsableDeLaOrganizacion);
                if(NombreDelResponsableDeLaOrganizacion!="\0"){
                    Eventos[RecorredorArrayEventos].setNombreDelResponsableDeLaOrganizacion(NombreDelResponsableDeLaOrganizacion);
                }

                cout<<"Lugar del evento"<<endl;
                getline(cin,LugarDelEvento);
                if(LugarDelEvento!="\0"){
                    Eventos[RecorredorArrayEventos].setLugarDelEvento(LugarDelEvento);
                }
                //hasta aqui


            }
            else{
                ContadorParaDarError++;
            }


        }

        //Verifica si de todas las veces que se busco en los eventos no encontro la clave que introduciste
        if(ContadorParaDarError==10){
            cout<<"Evento no encontrado"<<endl;
        }

        system("pause");
        system("cls");

    }
    else{
        cout<<"No hay eventos registrados"<<endl;
        system("pause");
        system("cls");
    }


}




//Funcion que muestra lo que hay en cada evento, menos la clave
void FuncionCase3(AdministradorDeEvento Eventos[10], bool DeclaradorSiHayEventosRegistrados, int ContadorArrayEventosParaSwitchCase3){


    //este if verifica si hay o no eventos registrados
    if(DeclaradorSiHayEventosRegistrados==true){
        int VariableAuxiliarParaForSwitchCase3;
        VariableAuxiliarParaForSwitchCase3=ContadorArrayEventosParaSwitchCase3; //con esto VariableAuxiliarParaForSwitchCase3 se vuelve constante

        //este ciclo for muestra la informacion solo de los eventos que estan registrados
        for(ContadorArrayEventosParaSwitchCase3=0;ContadorArrayEventosParaSwitchCase3<=VariableAuxiliarParaForSwitchCase3;ContadorArrayEventosParaSwitchCase3++){
            cout<<"Evento "<<ContadorArrayEventosParaSwitchCase3+1<<":"<<endl;

            cout<<"Nombre del evento: "<<Eventos[ContadorArrayEventosParaSwitchCase3].getNombreDelEvento()<<endl;
            cout<<"Fecha de inicio: "<<Eventos[ContadorArrayEventosParaSwitchCase3].getFechaDeInicio()<<endl;
            cout<<"Dias de duracion: "<<Eventos[ContadorArrayEventosParaSwitchCase3].getDiasDeDuracion()<<endl;
            cout<<"Nombre del responsable de la organizacion: "<<Eventos[ContadorArrayEventosParaSwitchCase3].getNombreDelResponsableDeLaOrganizacion()<<endl;
            cout<<"Lugar del evento: "<<Eventos[ContadorArrayEventosParaSwitchCase3].getLugarDelEvento()<<endl;

            cout<<endl;

        }
        
    }
    else{
        cout<<"No hay eventos registrados"<<endl;
    }


    system("pause");
    system("cls");

    
}







//Esta funcion genera una variable tipo bool con el valor de false
bool FuncionCase4(){
    bool ContinuarConElPrograma=false;
    return ContinuarConElPrograma;
}



void VerificadorContrasenaRepetida(int ContadorArrayEventos ,AdministradorDeEvento Eventos[10]){
    int RecorredorDeEventos;
    string ClaveCorregida;
    int Contador;
    int VariableAuxiliar;
    char CaracterAuxiliar;
    string StringAuxiliar;

    //Esto va convirtiendo la VarialeAuxiliar a string
    //for(Contador=0;Contador<10;Contador++){
        VariableAuxiliar=rand()%1000001; //Genera numeros del 0 al 1000000 para darle ese numero a las contraseñas repetidas
        CaracterAuxiliar=VariableAuxiliar;
        StringAuxiliar=to_string(CaracterAuxiliar);
    //}
    


    //Verifica si se repite la contraseña y asigna una contraseña nueva
    for(RecorredorDeEventos=0;RecorredorDeEventos<=9;RecorredorDeEventos++){
        //Verifica si RecorredorDeEventos sea diferente de ContadorArrayEventos, por que si son iguales, pues ovio que daran la misma contraseña
        if(RecorredorDeEventos!=ContadorArrayEventos){
            if(Eventos[ContadorArrayEventos].getClave()==Eventos[RecorredorDeEventos].getClave()){
            Eventos[ContadorArrayEventos].setClave(StringAuxiliar);
            }
        }
    }

}