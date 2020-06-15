#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int h,m,s;

    cout<<"Ingresa la hora:"<<endl;
    cin>>h;
    cout<<"Ingresa el minuto:"<<endl;
    cin>>m;
    cout<<"Ingresa el segundo:"<<endl;
    cin>>s;
    system("cls");

    if(h < 24 && m < 60 && s < 60)
    {
          if(s < 59 && s >= 0)
        {
            cout<<"La hora luego de un segundo es:"<<endl;  
            cout<<h<<"h "<<m<<"m "<<(s+1)<<"s"<<endl;
        }else
        {
          if(s==59)
            {
                if(m==59)
                {
                    if(h==23)
                    {
                        cout<<"La hora luego de un segundo es:"<<endl;  
                        cout<<"00h 00m 00s"<<endl;
                    }else
                    {
                        cout<<"La hora luego de un segundo es:"<<endl;  
                        cout<<(h+1)<<"h 00m 00s"<<endl;
                    }
                }else
                {
                    cout<<"La hora luego de un segundo es:"<<endl;  
                    cout<<h<<"h "<<(m+1)<<"m 00s"<<endl;
                }
            }
        }
    }else
    {
        cout<<"Fuera de Rango"<<endl;
    }

      return 0;
}