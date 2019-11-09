#include <iostream>
using namespace std;

int main(){
	int n, m, k;
	
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"Ingrese numero de columnas: ";
	cin>>m;
	cout<<"Ingrese otro numero: ";
	cin>>k;

	int matriz[n][m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
      			cout<<"Dato "<<i<<","<<j<<": ";
			cin>>matriz[i][j];
      			matriz[i][j]=matriz[i][j] * k;
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
