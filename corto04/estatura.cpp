#include<iostream>
#include <stdio.h>
#include<conio.h>
using namespace std;

float  func_promedio(int cant, float arreglo_estudiantes[]);
int func_arribamed(float promedio, int cant, float arreglo_estudiantes[]);
int func_abajomed(float promedio, int cant, float arreglo_estudiantes[]);

int main(){

    int cantidad=0, arribamed=0, abajomed=0;
	float estatura=0, promedio=0;

    system("cls");
    cout<<"Introduzca la cantidad de estudiantes: ";
    cin>>cantidad;

    float arreglo_estudiantes[cantidad];
    for(int x=0;x<cantidad;x++){
        cout<<"\n introduzca la estatura "<<x+1<<" en metros: "<<endl;
        cin>>estatura;
        arreglo_estudiantes[x]=estatura;
    }
    system("cls");
    for(int x=0;x<cantidad;x++){
        cout<<"\tEstatura del estudiante "<<x+1<<" es: "<<arreglo_estudiantes[x]<<endl;
    }
    promedio=func_promedio(cantidad,arreglo_estudiantes);
    arribamed=func_arribamed(promedio, cantidad, arreglo_estudiantes);
    abajomed=func_abajomed(promedio, cantidad, arreglo_estudiantes);

    cout<<"\nEl promedio es: "<<promedio<<"m"<<endl;
    cout<<"La cantidad de estaturas arriba de la media son: "<<arribamed<<endl;
    cout<<"La cantidad de estaturas abajo de la media son: "<<abajomed<<endl;

    return 0;

}

float  func_promedio(int cant, float arreglo_estudiantes[]) //declaramos la funcion y la operacion que realiza
{
	float suma=0,promedio=0;
		for(int x=0;x<cant;x++){
			suma=suma+arreglo_estudiantes[x]; //sumamos cada estatura en la variable suma
		}
	promedio=suma/cant;
	return promedio; //valor que devuelve la funcion
}

int func_arribamed(float promedio, int cant, float arreglo_estudiantes[]){
    int cuenta1=0;
    for(int x=0;x<cant;x++){
        if(arreglo_estudiantes[x]>=promedio){
            cuenta1++;
            //cout<<"cuenta1: "<<cuenta1<<endl;
        }
    }
    return cuenta1;
}


int func_abajomed(float promedio, int cant, float arreglo_estudiantes[]){
    int cuenta2=0;
    for(int x=0;x<cant;x++){
        if(arreglo_estudiantes[x]<promedio){
            cuenta2++;
            //cout<<"cuenta1: "<<cuenta1<<endl;
        }
    }
    return cuenta2;
}