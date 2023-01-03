#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "AdministradorDeEvento.cpp"
#include "Funciones.cpp"

void MenuPrincipal(void);

int main(int argc, char** argv){

    srand(time(NULL));
    AdministradorDeEvento Eventos[10]; //Un array para almacenar los datos de un evento en una posicion del array
    int ContadorArrayEventos=0; //Contador para el array Eventos[10]
    int NumeroParaMenuPrincipal;//El numero que das para elegir e switch
    int ContadorDeEventos=1, DesicionDatosCorrectosOIncorrectos=-1; //Se usan para el case 1 del switch
    bool ContinuarConElPrograma=true; //Continua o para el programa
    int ContadorArrayEventosParaSwitchCase3=-1; //Contador que recorre el array Eventos para mostrar todo lo que tiene en el switch case 3
    bool DeclaradorSiHayEventosRegistrados=false; //Dice si hay eventos registrados

    system("cls");

    while(ContinuarConElPrograma==true){
        MenuPrincipal();
        cin>>NumeroParaMenuPrincipal;
        
        //Verifica si el numero que pusiste es entre 1 y 4
        while (NumeroParaMenuPrincipal<=0 or NumeroParaMenuPrincipal>=5){
        cout<<"Tienes que escribir un n"<<char(163)<<"mero entre 1 y 4"<<endl;
        cin>>NumeroParaMenuPrincipal;
        }

        system("cls");




        //Este switch es el que hace algo dependiendo el numero que seleccionaste
        switch (NumeroParaMenuPrincipal){



            case 1:
            if(ContadorDeEventos<11){
                
                //ejecuta todo lo que tiene esta funcion
                MostradorYAsignador(ContadorArrayEventos, Eventos);


                system("cls");

                
                //Muestra la informacion que introdiciste en la funcion MostradorYAsignador
                cout<<"Nombre del evento: "<<Eventos[ContadorArrayEventos].getNombreDelEvento()<<endl;
                cout<<"Fecha de inicio: "<<Eventos[ContadorArrayEventos].getFechaDeInicio()<<endl;
                cout<<"Dias de duracion: "<<Eventos[ContadorArrayEventos].getDiasDeDuracion()<<endl;
                cout<<"Nombre del responsable de la organizacion: "<<Eventos[ContadorArrayEventos].getNombreDelResponsableDeLaOrganizacion()<<endl;
                cout<<"Lugar del evento: "<<Eventos[ContadorArrayEventos].getLugarDelEvento()<<endl;
                

                //¿Son correctos o no los datos?

                cout<<"¿Son correctos los datos, pon 0 si es no, pon 1 si es si?"<<endl;
                cin>>DesicionDatosCorrectosOIncorrectos;
                while(DesicionDatosCorrectosOIncorrectos!=0 && DesicionDatosCorrectosOIncorrectos!=1){
                    cout<<"Debe ser un 0 o un 1"<<endl;
                    cin>>DesicionDatosCorrectosOIncorrectos;
                }
                

                system("cls");


                //Si los datos son correctos
                if(DesicionDatosCorrectosOIncorrectos==1){
                    Eventos[ContadorArrayEventos].GeneradorDeClave();
                    VerificadorContrasenaRepetida(ContadorArrayEventos ,Eventos);//Con esto tomara cartas para asignar una contraseña al azar si se repite una
                    cout<<"Registro realizado con exito"<<endl;
                    cout<<"La clave es esta: "<<Eventos[ContadorArrayEventos].getClave()<<". Conserve la clave para cuando quieras hacer algun cambio."<<endl;
                    ContadorDeEventos++;
                    ContadorArrayEventos++;
                    ContadorArrayEventosParaSwitchCase3++;
                    DeclaradorSiHayEventosRegistrados=true; //lo pone en true, asi que esto va a ser true siempre sin importar cuantas veces haga el ciclo

                }
                

                //Si los datos no son correctos
                if(DesicionDatosCorrectosOIncorrectos==0){
                    EliminadorDeDatosClaseAdministradorDelEvento(ContadorArrayEventos, Eventos);
                    cout<<"Ok"<<endl;
                }
                    

                cout<<"Presiona una tecla para continuar"<<endl;
                system("pause");
                system("cls");


            }
            else{
                cout<<"Limite de eventos almacenados"<<endl;
                system("pause");
                system("cls");
            }
            
            break;




            case 2:
            FuncionCase2(Eventos, DeclaradorSiHayEventosRegistrados);
            break;


            case 3:
            FuncionCase3(Eventos, DeclaradorSiHayEventosRegistrados, ContadorArrayEventosParaSwitchCase3);
            break;


            case 4:
            ContinuarConElPrograma=FuncionCase4();
            break;
        }


    }

    system("cls");

    return 0;
}