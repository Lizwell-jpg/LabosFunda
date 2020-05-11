#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int sel, cant;
    float total;
    string nombre;
    
    cout << "BIENVENIDO A LA TIENDITA DE MARY"<< endl;
    cout << "\n" << endl;
    cout << "Que desea llevar hoy? selecciona el numero del que quieras" << endl;
    cout << "1. Doritos $0.35" << endl;
    cout << "2. Maruchan $0.60" << endl;
    cout << "3. Arroz $1.20" << endl;
    cout << "4. Mangoneada $0.25" << endl;
    cout << "5. Coquita helada $0.50" << endl;
    cout << "6. Solo venia a hablar" << endl;
    cout << "7. Nada, Adios Mary!" << endl;
    cout << "\n"<<endl;

    cout << "Quiero llevar el numero "<<endl;
    cin >> sel;
    cout <<"\n"<<endl;

    if(sel ==1){
        cout <<"Perfecto!, Cuantos Doritos quieres llevar?"<<endl;
        cout << "Quiero llevar "<<endl;
        cin >> cant;
        total = cant*0.35;
        nombre= "Doritos";
    }
    else if(sel == 2){
        cout <<"Perfecto!, Cuantas Maruchan quieres llevar?"<<endl;
        cout << "Quiero llevar "<<endl;
        cin >> cant;
        total = cant*0.60;
        nombre= "Maruchan";
    }
    else if(sel == 3){
        cout <<"Perfecto!, Cuantas bolsas de Arroz quieres llevar?"<<endl;
        cout << "Quiero llevar "<<endl;
        cin >> cant;
        total = cant*1.20;
        nombre= "bolsas de Arroz";
    }
    else if(sel == 4){
        cout <<"Perfecto!, Cuantas Mangoneadas quieres llevar?"<<endl;
        cout << "Quiero llevar "<<endl;
        cin >> cant;
        total = cant*0.25;
        nombre = "Mangoneadas";
    }
    else if(sel == 5){
        cout <<"Perfecto!, Cuantas Coca-colas quieres llevar?"<<endl;
        cout << "Quiero llevar "<<endl;
        cin >> cant;
        total = cant*0.50;
        nombre= "Coca-cola";
    }
    else if(sel == 6){
        cout <<"Ay! justo acaba de llegar otro cliente, luego hablamos. Cuidate!"<<endl;
    }
    else if(sel == 7){
        cout <<"No te preocupes, cuidate!"<<endl;
    }
    else{
        cout << "Creo que no tengo esa opccion disponible"<<endl;
        
    }

    if(sel>=1 && sel<=5){
        cout<<"\n"<<endl;
        cout << "En total es $"<< total << " Por que llevas "<< cant<< " "<< nombre<< " Gracias!"<<endl;
    }
    else
    {
        cout<<"Vuelva pronto!"<<endl;
    }
    
    
    return 0;
}