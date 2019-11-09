#include <iostream>
using namespace std;
int main(){
    int canNumeros;
    cout<<"Ingrese la cantidad de notas: "<<endl;
    cin>>canNumeros;
    
    float notas[canNumeros];
    float ponderaciones[canNumeros];
    float sumaProducto = 0.0, sumaPonderaciones = 0.0;
    
    float suma = 0.0;
    
    cout<<"Ingrese sus notas y sus ponderaciones"<<endl;
    
    for (int i = 0; i < canNumeros; i++){
        cout<<"Ingrese su nota y ponderacion: "<<endl;
        cin>>notas[i];
        cin>>ponderaciones[i];
        sumaProducto = sumaProducto + (notas[i]*ponderaciones[i]);
        sumaPonderaciones = sumaPonderaciones + ponderaciones[i];
        
    }
    cout<<"El promedio es: "<< sumaProducto/ sumaPonderaciones << endl;
}