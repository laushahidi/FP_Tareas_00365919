#include <iostream>
using namespace std;
int main(){
    int canNumeros;
    cout<<"Ingrese la cantidad de notas: "<<endl;
    cin>>canNumeros;
    
    float notas[canNumeros];
    
    float sumaProducto = 0.0;
    
    float suma = 0.0;
    
    cout<<"Notas "<<endl;
    
    for (int i = 0; i < canNumeros; i++){
        cout<<"Ingrese su nota: "<<endl;
        cin>>notas[i];
        sumaProducto = sumaProducto + notas[i];
    
    }
    cout<<"El promedio es: "<< sumaProducto/ canNumeros << endl;
}