#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

 int numeros[5];

 for (int i = 0; i < 5; i++){

   cout<<"Ingrese el dato: "<<(i + 1)<<endl;
   cin>>numeros[i];
 }

 cout<<"Los numeros ingresados son: \n";
 for (int i = 0; i < 5; i++){
   cout<<numeros[i]<<"\n";
 }
}