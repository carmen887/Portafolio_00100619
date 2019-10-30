#include<iostream>
using namespace std;

int arreglo[8] = {1, 3, 4, 5, 17, 18, 31, 33};
int fun(int x, int low, int high);

int main (){
	int x = 0, i;
	int high = 7;
	int low=0;
	
	cout << "Ingrese el valor a buscar: " ;
	cin >> x;
	i = fun(x, low, high);

	if(i== -1){
	
		cout << "El elemento no existe en el arreglo" << endl;
}
	else{


		cout << "El elemento esta en la casilla: " << i << endl;
	
	}
	
	
	return 0;
}

int fun(int x, int low, int high){
	int mid;
	
		if (low > high){
			return -1;
		}
	mid = (low + high)/2;
	
	if(x == arreglo[mid]){
		return (mid);
	}
	if(x < arreglo[mid]){
		return fun( x, low, mid-1);
	}
	else{
		return fun( x, mid+1, high);
	}
}
