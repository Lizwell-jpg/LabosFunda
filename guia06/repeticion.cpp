#include<iostream>
using namespace std;


int main(){
    int valor, suma=0, num_al;
    int num_el, i;

    cout<<"Ingrese el numero de elementos a del arreglo \n"<<endl;
    cin>>num_el;

    int array[num_el]; // Creamos un arreglo de enteros, el número de elementos del arreglo
                       // será el número asignado a la variable 'n'.
    for(i=0; i<num_el; i++)
    {
        num_al = 1 + rand() % (11 - 1); //genera un numero al azar del 1-10
        array[i]=num_al;
        cout<<"Arreglo "<<i<<" = "<<array[i]<<endl;
    }

    
    cout<<"\n"<<endl;
    cout<<"Valor a verificar: "<<endl;
    cin>>valor;
    
    for(i=1; i<=num_el;i++){
        if(array[i]==valor){
            suma++;
        }
    }
    cout<<"Repeticiones: "<<suma<<endl;
    return 0;
    
}
