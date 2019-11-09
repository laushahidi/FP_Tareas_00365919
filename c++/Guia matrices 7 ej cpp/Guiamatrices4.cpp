#include <iostream>
using namespace std;

int main(){
  int n, m;
  cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"Ingrese numero de columnas: ";
	cin>>m;
  int matriz[n][m];
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout<<"Dato "<<i<<","<<j<<": ";
      cin>>matriz[i][j];
    }
  }
  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(i==j){
        cout << matriz[i][j] << "  ";
      }
    }
  }

  return 0;
}