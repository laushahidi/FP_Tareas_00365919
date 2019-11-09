#include <iostream>
using namespace std;
int main()
{
    float multiplicacion, n, num;
    
    cout<<"Multiplicacion de varios numeros\n\nIngrese cuantos numeros quiere multiplicar: ";
    cin>>n;
    multiplicacion=1;
    for(int i = 0; i < n; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>num;
        multiplicacion*=num;
    }
    
    cout<<"Resultado: "<<multiplicacion;

    return 0;
}
