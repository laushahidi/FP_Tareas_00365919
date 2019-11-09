#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
 int catNumeros = 0;
 int numeros[catNumeros];
 cout<<"Ingrese tamaño del arreglo: ";
 cin>>catNumeros;
 for (int i = 0; i < catNumeros; i++){
   //numeros[i] = i + 1;
   cout<<"Ingrese el dato: "<<(i + 1)<<endl;
   cin>>numeros[i];
 }
 // mostrar contenido del arreglo
 cout<<"Los numeros ingresados son: \n";
 for (int i = 0; i < catNumeros; i++){
   cout<<numeros[i]<<"\n";
 }
}
