#include <iostream>
using namespace std;

int main() {
  int cantnotas, estudiantes;
  float promedios[estudiantes][cantnotas], ponderaciones[cantnotas], suma=0.0, sumaProducto=0.0, sumaPonderaciones=0.0;
  cout<<"Ingrese el numero de estudiantes: ";
  cin>>estudiantes;
  cout<<"Ingrese cuantas notas va a ingresar por cada estudiante: ";
  cin>>cantnotas;
  for(int j = 0; j < cantnotas; j++){
      cout<<"Ingrese la ponderacion de la nota "<<j+1<<": ";
      cin>>ponderaciones[j];
  }
  suma = 0;
  for(int i = 0; i < estudiantes; i++){
    sumaProducto = 0;
    sumaPonderaciones = 0;
    for(int j = 0; j < cantnotas; j++){
      cout<<"\nIngrese la nota "<<j+1<<": ";
      cin>>promedios[i][j];
      sumaProducto = sumaProducto + (promedios[i][j]*ponderaciones[j]);
      sumaPonderaciones = sumaPonderaciones + ponderaciones[j];
    }
    cout<<"\nEl promedio del estudiante "<<i+1<< " es: "<< sumaProducto/ sumaPonderaciones << endl;
    suma = suma + (sumaProducto/ sumaPonderaciones);
  }

  cout<<"\nEl promedio de la clase de fundamentos es: "<< suma/ estudiantes << endl;
  
  return 0;
}
