#include <iostream>
using namespace std;
int main()
{
    float suma, n, num;
    
    cout<<"Suma de varios numeros\n\nIngrese cuantos numeros quiere sumar: ";
    cin>>n;
    suma=0;
    for(int i = 0; i < n; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>num;
        suma=suma+num;
    }
    
    cout<<"Resultado: "<<suma;

    return 0;
}
