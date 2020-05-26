#include "iostream"
#include <cstring>
using namespace std;

int main(void)
{
    char str[300]="";
    int len;
    float div;

    cout<<"ESTE PROGRAMA COMPRUEBA SI UNA PALABRA TIENE MAS DE 10 CARACTERES Y SU LONGITUD"<<endl;
    cout<<"\n"<<endl;

    cout<<"Ingrese la palabra a calcular:"<<endl;
    cin>>str;
    cout<<"\n"<<endl;

    len = strlen(str);
    cout<<"La longitud de la palabra es de "<<len<<" caracteres."<<endl;

    if(len>=10)
    {
        cout<<"La palabra -"<<str<<"- es mayor o igual a 10 caracteres"<<endl;
    }else
    {
        cout<<"La palabra -"<<str<<"- no es mayor a 10 caracteres"<<endl;
    }

    div= len%2;

    if(div==0)
    {
        cout<<"La longitud de la palabra -"<<str<<"- es par"<<endl;
    }else
    {
        cout<<"La longitud de la palabra -"<<str<<"- es impar"<<endl;
    }
    

}