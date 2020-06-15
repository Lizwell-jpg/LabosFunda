#include "iostream"
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(void){
    int a, b, residuo, n1, n2;

    cout<<"MCD de dos numeros\n"<<endl;
    cout<<"digite el primer numero:"<<endl;
    cin>>n1;
    cout<<"digite el segundo numero:"<<endl;
    cin>>n2;
    system("cls");

    //se escoge el numero mayor y el menor de los ingresados
    a= std::max(n1,n2);
    b= std::min(n1,n2);

    //iterar
    do{
        residuo=b;
        b= a%b;
        a=residuo;

    }while(b!=0);
    cout<<"El MCD es: "<<residuo<<endl;


    return 0;
}