#include <iostream>
using namespace std;

int main(){
  int n, m, p;
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
  
  p = n;
  if(m<p){
    p=m;
  }

  for(int i = 0; i < p; i++){
    cout<<matriz[i][i]<<" ";
  }

  return 0;
}