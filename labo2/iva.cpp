#include "iostream"
using namespace std;

int main(void)
{
    float cant, iva, ivaT;
    int pais;

    cout<<endl;
    cout<<"ESTE PROGRAMA MUESTRA EL TOTAL DE SU CANTIDAD A PAGAR CON EL IVA INCLUIDO"<<endl;
    cout<<"\n"<<endl;

    cout<<"Ingrese la cantidad a calcular"<<endl;
    cin>>cant;
    cout<<"\n"<<endl;

    cout<<"PAISES vs IVA"<<endl;
    cout<<"1. El Salvador - 13%"<<endl;
    cout<<"2. Guatemala - 9%"<<endl;
    cout<<"3. Honduras - 15%"<<endl;
    cout<<"4.Espana - 20%"<<endl;
    cout<<"Ingrese el valor de su pais en la lista"<<endl;
    cin>>pais;
    cout<<"\n"<<endl;
    

    switch(pais)
    {
        case 1:
        iva = cant*0.13;
        ivaT = iva + cant;
        cout<<"Por la cantidad mas iva en El Salvador es de: "<< ivaT<<endl;
        break;

        case 2:
        iva = cant*0.09;
        ivaT = iva + cant;
        cout<<"Por la cantidad mas iva en Guatemala es de: "<< ivaT<<endl;
        break;

        case 3:
        iva = cant*0.15;
        ivaT = iva + cant;
        cout<<"Por la cantidad mas iva en Honduras es de: "<< ivaT<<endl;
        break;

        case 4:
        iva = cant*0.20;
        ivaT = iva + cant;
        cout<<"Por la cantidad mas iva en España es de: "<< ivaT<<endl;
        break;

        default:
        cout<<"Pais ingresado no valido"<<endl;
        break;

    }
    cout<<endl;

}