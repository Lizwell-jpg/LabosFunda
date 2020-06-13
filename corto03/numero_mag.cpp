#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
    int num, intentos=6, adiv, opcion;
    srand(time(NULL));
    
    //generador de numero random
    num = 1 + rand() % (101 - 1);
    // cout << num; 
    //imprime el numero escogido
    cout<<"\n"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"1. Adivinar el numero magico"<<endl;
    cout<<"Ingrese la opcion que desea:"<<endl;
    cin>>opcion;
    system("cls");
    

    do
    {
        
        if(intentos<6)
        {
            cout<<"\n"<<endl;
            cout<<"Desea continuar adivinando?"<<endl;
            cout<<"0. No"<<endl;
            cout<<"1. Si"<<endl;
            cout<<"Opcion #:"<<endl;
            cin>>opcion;
            system("cls");
        }

        switch(opcion)
        {
            case 1:
            intentos--;
            if(intentos>=1)
            {
                cout<<"Adivina el numero del 1 al 100"<<endl;
                cout<<"Tienes "<<intentos<<" intentos"<<endl;
                cout<<"Ingresa el numero:"<<endl;
                cin>>adiv;
                system("cls");

                if(adiv==num)
                {
                    cout<<"Correcto! el numero es: "<<num<<endl;
                    adiv=0;
                    return 0;
                }
                else
                {
                    cout<<"Incorrecto! vuelve a intentarlo!"<<endl;
                    break;
                }
            }
            else
            {
                cout<<"Ya no tienes mas intentos!"<<endl;
                cout<<"Vuelve pronto!"<<endl;
                return 0;
            }

            break;

            case 0:
                cout<<"Gracias por elegirme! ahora... Adios! jiji"<<endl;
                break;

            default:
                cout<<"El numero ingresado no es una de las opciones"<<endl;
                break;
                
        }
    } while (opcion!=0);
    
    
    
    return 0;
}