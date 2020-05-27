#include "iostream"
#include <cstring>
using namespace std;

int main(void)
{
    char str[300]="";
    char prim='z';
    char ult='x';
    int len;

    cout<<"ESTE PROGRAMA COMPRUEBA SI UNA PALABRA TIENE MAS DE 10 CARACTERES Y SU LONGITUD"<<endl;
    cout<<"\n"<<endl;

    cout<<"Ingrese la palabra a calcular:"<<endl;
    cin>>str;
    cout<<"\n"<<endl;

    len = strlen(str);
    prim = str[0];
    ult = str[len-1];
    
    cout<<"La primera letra de -"<<str<<"- es "<<prim<<endl;
    cout<<"La ultima letra de -"<<str<<"- es "<<ult<<endl;

    if(prim==ult)
    {
        cout<<"La palabra inicia y termina con el mismo caracter"<<endl;
    }else
    {
        cout<<"La palabra inicia y termina con diferentes caracteres"<<endl;
    }
    


}