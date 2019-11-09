#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  cout<<"Ingrese numero de filas y columnas: ";
	cin>>n;

  int matriz[n][n];
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout<<"Dato "<<i<<","<<j<<": ";
      cin>>matriz[i][j];
    }
  }
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      cout<<"     ";
    }
      for(int j = i; j < n; j++){
        cout<<fixed<<setprecision(4)<<setw(4)<<setfill(' ')<<matriz[i][j]<<" ";
      }
    cout<<endl;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      cout<<fixed<<setprecision(4)<<setw(4)<<setfill(' ')<<matriz[i][j]<<" ";
    }
      for(int j = i; j < n; j++){
        cout<<"     ";
      }
    cout<<endl;
  }

  return 0;
}