#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int day, month, year;
    float resto, r1, r2;
    bool val=false;

    cout<<"ESTE PROGRAMA INDICA EL DIA SIGUIENTE"<<endl;
    cout<<"Utiliza el formato dd/mm/aaaa"<<endl;
    cout<<"Ingrese el dia:"<<endl;
    cin>>day;
    cout<<"Ingrese el mes:"<<endl;
    cin>>month;
    cout<<"Ingrese el anio:"<<endl;
    cin>>year;
    system("cls");
    cout<<"La fecha ingresada fue: "<<day<<"/"<<month<<"/"<<year<<endl;

    //primero se evalua el año bisiesto

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

    //evaluando dias del mes
    int monti;

    if(month==01 || month==03 || month==05 || month==07 || month==8 || month==10 || month==12)
        {
            //cout<<"El mes tiene 31 dias"<<endl;
            monti=2;
        }
        else if(month==02)//evaluando febrero
        {
            if(val==true)
            {
                //cout<<"El mes tiene 29 dias"<<endl;
                monti=4;
            }
            else
            {
                //cout<<"El mes tiene 28 dias"<<endl;
                monti=3;
            }
            
        }
        else
        {
            //cout<<"El mes tiene 30 dias"<<endl;
            monti=1;
        }

    //evaluar el rango
    if(day<=31 && month<=12)
    {
        if(month==12 && day==31)
        {
            cout<<"La fecha luego de un dia es:"<<endl;  
            cout<<"01/01/"<<(year+1)<<endl;
        }
        else
        {
            if(monti==1)//30 dias
            {
                if(day==30)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<"01/"<<(month+1)<<"/"<<year<<endl;
                }else if(day>=1 && day<30)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<(day+1)<<"/"<<month<<"/"<<year<<endl;
                }else
                {
                    cout<<"Fuera de Rango"<<endl;
                }
                

            }else if(monti==2)//31 dias
            {
                if(day==31)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<"01/"<<(month+1)<<"/"<<year<<endl;
                }else if(day>=1 && day<31)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<(day+1)<<"/"<<month<<"/"<<year<<endl;
                }else
                {
                    cout<<"Fuera de Rango"<<endl;
                }
                

            }else if(monti==3)//28 dias
            {
                if(day==28)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<"01/"<<(month+1)<<"/"<<year<<endl;
                }else if(day>=1 && day<28)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<(day+1)<<"/"<<month<<"/"<<year<<endl;
                }else
                {
                    cout<<"Fuera de Rango"<<endl;
                }

            }else if(monti==4)//29 dias
            {
                if(day==29)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<"01/"<<(month+1)<<"/"<<year<<endl;
                }else if(day>=1 && day<29)
                {
                    cout<<"La fecha luego de un dia es:"<<endl;  
                    cout<<(day+1)<<"/"<<month<<"/"<<year<<endl;
                }else
                {
                    cout<<"Fuera de Rango"<<endl;
                }
            }else
            {
                cout<<"Fuera de Rango"<<endl;
            }
            
        }
    }else
    {
        cout<<"Fuera de Rango"<<endl;
    }
    return 0;
}