#include "iostream"
using namespace std;

int main(void)
{
    int nota1, nota2, nota3, suma;
    float prom;

    cout << "ESTE PROGRAMA CALCULARA EL PROMEDIO DE TRES NOTAS" << endl;
    cout << "\n" <<endl;
    
    cout << "Ingrese el valor de la primera nota: "<< endl;
    cin >> nota1;
    cout <<"\n"<<endl;

    cout << "Ingrese el valor de la segunda nota: "<< endl;
    cin >> nota2;
    cout <<"\n"<<endl;

    cout << "Ingrese el valor de la tercera nota: "<< endl;
    cin >> nota3;
    cout <<"\n"<<endl;

    suma = (float)nota1 + (float)nota2 + (float)nota3;
    prom = (float)suma/3;

    cout << "El promedio de las notas es: " << prom << endl;

    return 0;

}