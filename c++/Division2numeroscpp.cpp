#include <iostream>
using namespace std;
int main(){
  float num1, num2, num3, resultado;
  cout << "Division de 2 digitos\n";
  cout << "\nIngrese el primer numero: ";
  cin >> num1;
  cout << "Ingrese el segundo numero: ";
  cin >> num2;

  resultado = num1 / num2;
  cout << "\n"<<num1<< " ÷ " <<num2<< " = "<<resultado<<"" << "\n";
  return 0;
    
}