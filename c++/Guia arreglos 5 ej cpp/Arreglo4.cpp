#include <iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Ingrese un numero (X): "<<endl;
    cin>>x;
    cout<<"Ingrese un numero (Y): "<<endl;
    cin>>y;
    int arr1[x], arr2[y];
    
    cout<<"Datos X\n"<<endl;
    for (int i = 0; i < x; i++){
        cout<<"Ingrese el dato " << i+1 << ": " <<endl;
        cin>>arr1[i];
    }
    cout<<"Datos Y\n"<<endl;
    for (int i = 0; i < y; i++){
        cout<<"Ingrese el dato " << i+1 << ": " <<endl;
        cin>>arr1[i];
    }
    cout<<"Datos X ingresados: \n"<<endl;
    for (int i = 0; i < x; i++){
        cout<<arr1[i]<<endl;
    }
    cout<<"Datos Y ingresados: \n"<<endl;
    for (int j = 0; j < y; j++){
        cout<<arr2[j]<<endl;
    }
    return 0;
}