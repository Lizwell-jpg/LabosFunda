#include "iostream"
#include "cmath"

using namespace std;

int main(void)
{

    float a, b, c, formp, formn, r, res, div, pot, mul, sum, resi;
    

    cout <<"ESTE PROGRAMA SIRVE PARA OBTENER EL RESULTADO DE LA FORMULA GENERAL" << endl;
    cout << "\n" << endl;

    cout << "Inserte el valor de 'a': " << endl;
    cin >> a;
    cout<< "\n"<< endl;

    cout << "Inserte el valor de 'b': " << endl;
    cin >> b;
    cout<< "\n"<< endl;

    cout << "Inserte el valor de 'c': " << endl;
    cin >> c;
    cout<< "\n"<< endl;

    mul= 4*a*c;
    pot= b*b;
    res= pot-mul;
    r= sqrt(res);
    sum= -b+r;
    resi= -b-r;
    div= 2*a;
    formp= sum/div;
    formn= resi/div;

    if (res < 0){
        cout <<"El resultado de la formula general es: "<< endl;
        cout<<"X1= la raiz era de un numero negativo, no existe"<< endl;
        cout<<"X2= la raiz era de un numero negativo, no existe"<<endl;

    }
    else{

        cout <<"El resultado de la formula general es: "<< endl;
        cout<<"X1= "<< formp<<endl;
        cout<<"X2= "<<formn<<endl;
    }

    return 0;

}