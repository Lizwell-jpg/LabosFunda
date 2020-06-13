#include "iostream"
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
    //ESTE PROGRAMA CALCULA EL SALARIO MENSUAL DE LOS TRABAJADORES
    int cant;
    float salT, salR, sum;
    //Salario Total es el sin descuentos
    //Salario Real es que tiene descuentos
    float multiHT, multiHE, seg, afp, rent, desc; 

    struct datosEmpleado
    {
        string nombre;
        char apellido[300]="";
        char prim='z';
        int HT, HE;
        //Horas trabajadas $1.75
        //Horas extras $2.50
        
    };

    cout<<"Introduzca el numero de empleados: "<<endl;
    cin>>cant;
    system("cls");
    
    datosEmpleado *empleado= new datosEmpleado[50];

    for (int i=1; i<=cant; i++)
    {
        cout<<"Introduzca el nombre empleado "<< i<<endl;
        cin>>empleado[i].nombre;
        cout<<"Introduzca el apellido de "<<empleado[i].nombre<<endl;
        cin>>empleado[i].apellido;
        system("cls");
        cout<<"Introduzca las horas trabajadas del empleado"<<endl;
        cin>>empleado[i].HT;
        cout<<"Introduzca las horas extras trabajadas del empleado"<<endl;
        cin>>empleado[i].HE;
        system("cls");
    }

    //seguro 4%
    //AFP 6.25%
    //Renta 10%

    for (int i=1; i<=cant; i++)
    {
        empleado[i].prim = empleado[i].apellido[0];
        multiHT= empleado[i].HT*1.75;
        multiHE= empleado[i].HE*2.50;
        sum= multiHT+multiHE;
        salT= multiHT+multiHE;
        seg=sum*0.04;
        rent=sum*0.10;
        afp= sum*0.0625; 
        desc= seg+rent+afp;
        salR= sum-desc;
        cout<<"El empleado "<< i<<" es: "<<empleado[i].nombre<<" "<<empleado[i].apellido<<endl;
        cout<<"El Salario total de "<<empleado[i].nombre<<" "<<empleado[i].prim<<". es de: "<<salT<<endl;
        cout<<"El Salario real de "<<empleado[i].nombre<<" "<<empleado[i].prim<<". es de: "<<salR<<endl;
        cout<<"\n"<<endl;
        
    }

    

    return 0;

}