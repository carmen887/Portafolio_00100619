#include <iostream>

using namespace std;

int main(){
int valor=5;
int *puntero=&valor;
int **doble=&puntero;

cout<<"Valor."<<valor<<endl;
cout<<"Valor mediante puntero: "<< *puntero<<endl;	
cout<<"Valor mediante puntero doble: "<< **doble<<endl;
cout<<"Direccion almacenada en puntero doble: "<<*doble<<endl;

int *puntero_nuevo= *doble;
int valor_original = *puntero_nuevo;
cout<<"Valor original: "<<valor_original<<endl;

return 0;
}

