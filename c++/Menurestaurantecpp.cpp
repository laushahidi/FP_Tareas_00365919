#include <iostream>
using namespace std;

int main()
{
  int orden;
  
  cout << "Menu del restaurante: Delicias caseras \n";
  cout << "\nDesayuno (1) \nAlmuerzo (2) \nCena (3) \nPostre (4) \nAntojo (5) \nSalir (6)\n";
  
  cout << "\n¿Qué desea ver (ingrese el número)?\n\n";
  cin >> orden;
  
  while(orden != 6){
    if(orden==1){
            cout << "\nOpciones de desayuno: típico, frutas, cereal\n";
        }
    if(orden==2){
            cout << "\nOpciones de almuerzo: lasaña, pizza, sopa\n";
        }
    if(orden==3){
            cout << "\nOpciones de cena: pupusas, cena típica, hamburguesa\n";
        }
    if(orden==4){
            cout << "\nOpciones de postre: flan, cheesecake, tres leches\n";
        }
    if(orden==5){
            cout << "\nOpciones de antojo: deditos de queso, papas fritas, enchiladas\n";
        }
    if(orden >= 7){
    cout << "\nEl numero ingresado no es valido\n";
    }
  cout << "\n¿Qué más desea ver?\n";
  cout << "\nDesayuno (1) \nAlmuerzo (2) \nCena (3) \nPostre (4) \nAntojo (5) \nSalir(6)\n\n";
  cin >> orden;
  }

  if(orden==6){
    cout<<"Salida exitosa";
  }
  return 0;
}
