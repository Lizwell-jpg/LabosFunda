#include<iostream>
#include <stdlib.h>
using namespace std;
 
int main()
{

    int year;
    float resto, r1, r2;
    bool val=false;

    cout<<"Este programa comprueba si el anio ingresado es bisiesto"<<endl;
    cout<<"Ingrese el anio a evaluar:"<<endl;
    cin>>year;
    system("cls");

    resto=year%400;
    r1=year%4; //que sea divisible entre cuatro
    r2=year%100; //que no sea divisible entre cien

    if(resto!=0)
    {
        if(r1==0 && r2!=0)
        {
            val=true;
        }
        else
        {
            val=false;
        }
        
    }
    else
    {
        val=true;
    }

    if(val==true)
    {
        cout<<"El anio es bisiesto!"<<endl;
    }else
    {
        cout<<"El anio no es bisiesto!"<<endl;
    }
    
    return 0;
}