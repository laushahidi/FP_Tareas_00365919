#include <iostream>

using namespace std;

int main()
{
  int m;
  
  cout << "Ingrese el caso del 1 al 5\n";
  cin >> m;
  
  switch(m){
      
    case 1:
    case 2:
    case 3:
    cout << "Error de credenciales" <<endl;
    break;
    case 4:
    cout << "Su conexión no es la adecuada" <<endl;
    break;
    case 5:
    cout << "Su cuenta no existe" <<endl;
    break;
    default:
    cout << "El número no es válido" <<endl;
  }
  return 0;
}