/*
Crea un programa que muestre un menú con 3 opciones:
1. Registrar libro. Nos pedirá el código, el nombre del libro y el número de
ejemplares (se pueden registrar máximo 3)
2. Vender libro (nos mostrará los libros que hay para elegir cual comprar y
el número de ejemplares que queremos) y
3. Salir (el programa terminará hasta que le demos esta opción).
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int Seleccion, ContadorCase1=0, ContadorCase2_1=0, ContadorCase2_2=0, ContinuarPrograma=0, CodigoLibro, NumeroDeEjemplares, CodigoLibroComprar, UnidadesComprar, UnidadesRestantes, IntAuxiliarParaLosIfs;
    string MatrizAuxiliar[3][3], NombreDelLibro;
    cout<<"Registrar Libro       Vender Libro           Salir"<<endl;
    cout<<"  Presiona 1           Presiona 2          Presiona 3"<<endl;
    while(ContinuarPrograma==0){
        cout<<"Selecciona lo que quieres hacer"<<endl;
        cin>>Seleccion;
        while(Seleccion<=0 && Seleccion>=4){
            cin>>Seleccion;
        }
        switch(Seleccion){
            
            //case 1: este case registra los libros

            case 1:
            if(ContadorCase1<3){
                cout<<"Dime el codigo del libro"<<endl;
                cin>>CodigoLibro;
                cin.ignore();
                MatrizAuxiliar[0][ContadorCase1]=to_string(CodigoLibro);
                cout<<"Dime el nombre del libro"<<endl;
                getline(cin,NombreDelLibro);
                MatrizAuxiliar[1][ContadorCase1]=NombreDelLibro;
                cout<<"Dime el numero de ejemplares"<<endl;
                cin>>NumeroDeEjemplares;
                MatrizAuxiliar[2][ContadorCase1]=to_string(NumeroDeEjemplares);
                ContadorCase1++;
            }
            if(ContadorCase1==3){
                cout<<"Limite de libros alcanzado"<<endl;
            }
            break;

            //case 2: este case hace que puedes comprar los libros que registraste en el case 1

            case 2:
                cout<<"Codigo del Libro  "<<"Nombre del Libro   "<<"Unidades disponibles   "<<endl;;
                for(ContadorCase2_2=0;ContadorCase2_2<3;ContadorCase2_2++){
                    for(ContadorCase2_1=0;ContadorCase2_1<3;ContadorCase2_1++){
                        cout<<"\t"<<MatrizAuxiliar[ContadorCase2_1][ContadorCase2_2]<<"\t";
                    }
                    cout<<endl;
                }
                cout<<"Dime el codigo del libro que quieres comprar"<<endl;
                cin>>CodigoLibroComprar;



                //Estos ifs verifican si el codigo que pusiste coinciden con los codigos de los libros que pusiste en el case 1

                //Libro 1
                if(CodigoLibroComprar==stoi(MatrizAuxiliar[0][0])){
                    IntAuxiliarParaLosIfs=stoi(MatrizAuxiliar[2][0]);
                    if(IntAuxiliarParaLosIfs>0){
                        cout<<"Dime cuantas unidades quieres comprar"<<endl;
                        cin>>UnidadesComprar;
                        UnidadesRestantes=stoi(MatrizAuxiliar[2][0]);
                        if( (UnidadesRestantes-UnidadesComprar) >=0 ){
                            UnidadesRestantes=UnidadesRestantes-UnidadesComprar;
                            MatrizAuxiliar[2][0].clear();
                            MatrizAuxiliar[2][0]=to_string(UnidadesRestantes);
                            UnidadesRestantes=0;
                        }
                        else{
                            cout<<"No hay la cantidad que quieres"<<endl;
                        }
                    }
                    else{
                        cout<<"No hay libros disponibles"<<endl;
                    }
                }


                else{

                    //Libro 2
                    if(CodigoLibroComprar==stoi(MatrizAuxiliar[0][1])){
                        IntAuxiliarParaLosIfs=stoi(MatrizAuxiliar[2][1]);
                        if(IntAuxiliarParaLosIfs>0){
                            cout<<"Dime cuantas unidades quieres comprar"<<endl;
                            cin>>UnidadesComprar;
                            UnidadesRestantes=stoi(MatrizAuxiliar[2][1]);
                            if( (UnidadesRestantes-UnidadesComprar) >=0 ){
                                UnidadesRestantes=UnidadesRestantes-UnidadesComprar;
                                MatrizAuxiliar[2][1].clear();
                                MatrizAuxiliar[2][1]=to_string(UnidadesRestantes);
                                UnidadesRestantes=0;
                            }
                            else{
                                cout<<"No hay la cantidad que quieres"<<endl;
                            }
                        }
                        else{
                            cout<<"No hay libros disponibles"<<endl;
                        }   
                    }


                    else{

                        //Libro 3
                        if(CodigoLibroComprar==stoi(MatrizAuxiliar[0][2])){
                            IntAuxiliarParaLosIfs=stoi(MatrizAuxiliar[2][2]);
                            if(IntAuxiliarParaLosIfs>0){
                                cout<<"Dime cuantas unidades quieres comprar"<<endl;
                                cin>>UnidadesComprar;
                                UnidadesRestantes=stoi(MatrizAuxiliar[2][2]);
                                if( (UnidadesRestantes-UnidadesComprar) >=0 ){
                                    UnidadesRestantes=UnidadesRestantes-UnidadesComprar;
                                    MatrizAuxiliar[2][2].clear();
                                    MatrizAuxiliar[2][2]=to_string(UnidadesRestantes);
                                    UnidadesRestantes=0;
                                }
                                else{
                                    cout<<"No hay la cantidad que quieres"<<endl;
                                }
                            }
                            else{
                                cout<<"No hay libros disponibles"<<endl;
                            }
                        }
                        else{
                            //Si no coincide ningun codigo
                            cout<<"No hay libro con ese codigo"<<endl;
                        }
                    }
                }
                


            break;

            //case 3: nah este case simplemente hace que salgas del programa

            case 3:
            cout<<"Saliendo..."<<endl;
            ContinuarPrograma++;
            break;
        }
    }
    return 0;
}