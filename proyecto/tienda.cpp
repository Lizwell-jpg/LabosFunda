#include<iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;

int main(){

    int cantidadArticulos;
    float total;
    const int longCad=20;
    struct costoPorArticulo{
        char nombreArt[longCad+1];
        int cant;
        float precio;
        float costoXarticulo;
    };

    cout<<"Introduzca el numero de articulos a incluir: "<<endl;
    cin>>cantidadArticulos;
    system("cls");

    costoPorArticulo*articulos=new costoPorArticulo[cantidadArticulos];

    for (int i=0; i<cantidadArticulos; i++){
        cout<<"Introduzca el nombre del articulo: "<<endl;
        cin>>articulos[i].nombreArt;
        cout<<"Introduzca la cantidad comprada: "<<endl;
        cin>>articulos[i].cant;
        cout<<"Introduzca el precio del articulo: "<<endl;
        cin>>articulos[i].precio;
        system("cls");

        articulos[i].costoXarticulo=articulos[i].cant*articulos[i].precio;
        total=total+articulos[i].costoXarticulo;

    }

    cout<<"RECIBO------------"<<endl;
    for(int i=0; i<cantidadArticulos; i++){
        cout<<"Articulo "<<i+1<<" es "<<articulos[i].nombreArt<<endl;
        cout<<"se compraron "<<articulos[i].cant<<" por un precio total de: $"<<articulos[i].costoXarticulo<<endl;
    }
    cout<<"El total de la compra es: $"<<total<<endl;
}