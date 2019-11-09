#include <iostream>

using namespace std;

int main()
{
  int orden;
  
  cout << "Menu del restaurante: Delicias caseras \n";
  cout << "\nDesayuno (1) \nAlmuerzo (2) \nCena (3) \nPostre (4) \nAntojo (5) \nSalir (6)\n";
  cout << "\n¿Qué desea ver (ingrese el número)?\n\n";
  cin >> orden;
  while (orden != 6){
    switch(orden){
      case 1:
      cout << "\nOpciones de desayuno: típico, frutas, cereal\n" <<endl;
      break;
      case 2:
      cout << "\nOpciones de almuerzo: lasaña, pizza, sopa\n" <<endl;
      break;
      case 3:
      cout << "\nOpciones de cena: pupusas, cena típica, hamburguesa\n" <<endl;
      break;
      case 4:
      cout << "\nOpciones de postre: flan, cheesecake, tres leches\n" <<endl;
      break;
      case 5:
      cout << "\nOpciones de antojo: deditos de queso, papas fritas, enchiladas\n" <<endl;
      break;
      default:
      cout << "\nEl número no es válido\n" <<endl;
    }
  cout << "¿Que mas desea ver?\n";
  cout << "\nDesayuno (1) \nAlmuerzo (2) \nCena (3) \nPostre (4) \nAntojo (5) \nSalir (6)\n\n";
  cin >> orden;
  }
  if(orden==6){
    cout << "Salida exitosa";
  }
    return 0;
}
