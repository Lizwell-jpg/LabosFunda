#include "iostream"
using namespace std;

int main(void)
{
    float rad, area, per;

    cout << "ESTE PROGRAMA CALCULA EL AREA Y PERIMETRO DE UN CIRCULO" << endl;
    cout << "\n" << endl;

    cout << "Inserte el valor del radio del circulo: " << endl;
    cin >> rad;
    cout << "\n" << endl;

    area= 3.1415*rad*rad;
    per= 2*3.1415*rad;

    cout << "El area del circulo es:" << area << endl;
    cout << "El perimetro del circulo es: "<< per << endl;

    return 0;

}