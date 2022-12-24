/*
Elabora un algoritmo que pida la calificación de un alumno (puede ser con números decimales) 
y luego pregunte el número total de participaciones, si las participaciones son más de 10 sumarle 
un punto extra a la calificación final siempre y cuando sea mayor a 6 y mostrarla. 
Recuerda que la calificación no puede ser mayor a 10.
*/
#include <iostream>
using namespace std;
int main(){
    double CalificacionAlumno, CalculadorParaPuntosExtra;
    int NumeroDeParticipaciones;
    cout<<"Dime la calificacion del alumno"<<endl;
    cin>>CalificacionAlumno;
    cout<<"Ahora dime su total de participaciones"<<endl;
    cin>>NumeroDeParticipaciones;
    if(CalificacionAlumno>=0 && CalificacionAlumno<=10 && NumeroDeParticipaciones>=0){
        if(CalificacionAlumno>6){
            if(NumeroDeParticipaciones>10){
                CalificacionAlumno=CalificacionAlumno+1;
                if(CalificacionAlumno>10){
                    CalificacionAlumno=10;
                    cout<<"La calificacion final del alumno es: "<<endl;
                    cout<<CalificacionAlumno<<endl;
                }
                else{
                    cout<<"La calificacion final del alumno es: "<<endl;
                    cout<<CalificacionAlumno<<endl;
                }
            }
            else{
                cout<<"La calificacion final del alumno es: "<<endl;
                cout<<CalificacionAlumno<<endl;
            }
        }
        else{
            cout<<"La calificacion final del alumno es: "<<endl;
            cout<<CalificacionAlumno<<endl;
        }
    }
    else{
        cout<<"No puedo hacer nada por ti, lo siento"<<endl;
    }
    return 0;
}
