#include <iostream>
using namespace std;

int main()
{
  int contador,contador1;
  contador1=101;
  cout << "\t Estos son los números impares entre 0 y 100 \n";
  cout << "\t -------------------------------------------\n";
 for(contador=199; contador>0; contador-= 2)//Este contador permite moverme de impar a impar
 {
    
    contador1--;           // Este otro contador cuenta el número de impares
    cout <<"El numero en la casilla "<<contador1<<" es: "<< contador << "\n";
    
 }

 return 0;
}