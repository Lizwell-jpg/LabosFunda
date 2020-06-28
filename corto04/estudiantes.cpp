/*
Lo intente de todas las maneras posibles,
pero no hacia mas que darme errores, y se me acabo el tiempo al final:(
*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;


int  main(){
    int cantidad=0, aprobados, reprobados, x;
    char op;
    float notas[cantidad][5], n1, mu1, mu2, mu3, mu4, mu5, suma=0, promedio[cantidad];

    do{
        system("cls");
        do{
            cout<<"Ingrese la cantidad de alumnos: "<<endl;
            cin>>cantidad;
        }while(cantidad<=0);

        for(int i=0;i<cantidad;i++){
            cout<<"Estudiante "<<i+1<<endl;
            for(int x=0;x<5;x++){
                cout<<"Nota "<<x+1<<": ";
                cin>>n1;
                notas[i][x]=n1;
            }
        }
        system("cls");
        for(int i=0;i<cantidad;i++){
            for(int x=0;x<5;x++){
                cout<<"Estudiante "<<i+1<<" nota "<<x+1<<": "<<notas[i][x]<<endl;
                
            }
        }

        for(int i=0;i<cantidad;i++){
            mu1=notas[i][0]*0.20;
            mu2=notas[i][1]*0.20;
            mu3=notas[i][2]*0.20;
            mu4=notas[i][3]*0.20;
            mu5=notas[i][4]*0.20;

            suma=mu1+mu2+mu3+mu4+mu5;
            promedio[i]=suma/5;
            
        }
        cout<<"multiplicacion: "<<mu1<<endl;
        cout<<"suma: "<<suma<<endl;

        cout<<"desea continuar [s/n]:";
        cin>>op;        
    }while(op=='2');
}