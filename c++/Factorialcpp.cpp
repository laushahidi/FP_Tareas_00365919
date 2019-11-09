#include <iostream>

using namespace std;

int main(){
  int i, n, f;
  cout << "Factorial \n\nIngrese un número: ";
  cin >> n;
  
  f = 1;
  i = 1;
  
  while(i <= n){
    f *= i;
    i++;
  }
  cout << "\n"<<n<< "! = " <<f<<"";
return 0;
}