#include "iostream"
using namespace std;

int main(void)
{
    int col;
    cout << "ESTE PROGRAMA MUESTRA EL VALOR DE LOS COLORES" << endl;
    cout << "\n" << endl;

    
    cout << "1. Blanco" << endl;
    cout << "2. Amarillo" << endl;
    cout << "3. Naranja" << endl;
    cout << "4. Rojo" << endl;
    cout << "5. Morado" << endl;
    cout << "6. Azul" << endl;
    cout << "7. Verde" << endl;
    cout << "Inserte el valor del color que necesita: " << endl;
    cin >> col;
    cout << "\n" << endl;

    switch(col)
    {
        case 1:
        cout<<"Ha escogido el color Blanco"<<endl;
        cout<<"El precio de este color es $67"<<endl;
        break;

        case 2:
        cout<<"Ha escogido el color Amarillo"<<endl;
        cout<<"El precio de este color es $70"<<endl;
        break;

        case 3:
        cout<<"Ha escogido el color Naranja"<<endl;
        cout<<"El precio de este color es $46"<<endl;
        break;

        case 4:
        cout<<"Ha escogido el color Rojo"<<endl;
        cout<<"El precio de este color es $55"<<endl;
        break;

        case 5:
        cout<<"Ha escogido el color Morado"<<endl;
        cout<<"El precio de este color es $65"<<endl;
        break;

        case 6:
        cout<<"Ha escogido el color Azul"<<endl;
        cout<<"El precio de este color es $15"<<endl;
        break;

        case 7:
        cout<<"Ha escogido el color Verde"<<endl;
        cout<<"El precio de este color es $41"<<endl;
        break;

        default:
        cout<<"Numero ingresado no valido"<<endl;
        break;

    }
    cout<<endl;


}