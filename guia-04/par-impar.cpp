#include "iostream"
using namespace std;

int main(void)
{
    int num1, num2;
    float div;

    cout<<"ESTE PROGRAMA COMPRUEBA SI UN DIMERO ES PAR O IMPAR"<<endl;
    cout<<"\n"<<endl;

    cout<<"Inserte el numero: "<<endl;
    cin>>num1;
    cout<<"\n"<<endl;

    div=num1%2;

    if(div==0){
        cout<<"El numero "<<num1<<" es par "<<endl;

    }else{
        cout<<"El numero "<<num1<<" es impar"<<endl;
    }

}