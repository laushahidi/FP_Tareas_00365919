#include <iostream>
using namespace std;
int main()
{
    float division, n, num;
    
    cout<<"Division de varios numeros\n\nIngrese cuantos numeros quiere division: ";
    cin>>n;
    cout<<"Ingrese el numero 1: ";
    cin>>num;
    division=num;
    for(int i = 1; i < n; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>num;
        while(num==0){
            cout<<"Ingrese otro numero diferente a cero: ";
            cin>>num;
        }
        division/=num;
    }
    
    cout<<"Resultado: "<<division;

    return 0;
}