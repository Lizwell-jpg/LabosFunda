#include "iostream"
using namespace std;

int main(void)
{
    int num1, num2;
    float div;

    cout<<"ESTE PROGRAMA COMPRUEBA SI UN DIMERO ES DIVISIBLE ENTRE OTRO"<<endl;
    cout<<"\n"<<endl;

    cout<<"Inserte el primer numero: "<<endl;
    cin>>num1;
    cout<<"\n"<<endl;
    cout<<"Inserte el segundo numero"<<endl;
    cin>>num2;
    cout<<"\n"<<endl;

    div=num1%num2;

    if(div==0){
        cout<<"El numero "<<num1<<" es divisible entre el numero "<<num2<<endl;

    }else{
        cout<<"El numero "<<num1<<" no es divisible entre el numero "<<num2<<endl;
    }

}