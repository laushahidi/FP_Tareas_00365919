#include <iostream>
using namespace std;
int main()
{
    float resta, n, num;
    
    cout<<"Resta de varios numeros\n\nIngrese cuantos numeros quiere restar: ";
    cin>>n;
    cout<<"Ingrese el numero 1: ";
    cin>>num;
    resta=num;
    for(int i = 1; i < n; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>num;
        resta-=num;
    }
    
    cout<<"Resultado: "<<resta;

    return 0;
}
