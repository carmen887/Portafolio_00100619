#include<iostream>
 
 using namespace std;
 
struct nodo{
    int num;
    struct nodo *siguiente;
};
typedef struct nodo *charizard;

void invertirlista(charizard &lista){
	charizard init, sig , dsig;
 
	if(lista==NULL)
	return;
	
	init = lista;
	sig = lista->siguiente;
	lista->siguiente=NULL;
 
	while(init!=NULL){
		dsig = sig->siguiente;
		sig->siguiente = init;
		init = sig;
		sig = dsig;
	}
	lista = init;
 
 
}
 
void insertarInicio(charizard &lista,int numero){
	charizard nuevo;
	
	nuevo = new(struct nodo);
	nuevo->num = numero;
	nuevo->siguiente=lista;
	lista = nuevo;
}
 
void imprimir(charizard &lista){
	while(lista!=NULL){
		
		cout << lista->num << endl;
		lista = lista->siguiente;
	}
}

int main (){
	charizard lista =NULL;
	
	int lis, numero;
		cout<<"Numero de elementos de la lista: ";
		
		cin>>lis;
 
 	cout<<"Lista original" << endl;
 	cout << endl;
	
	for(int i = 0; i < lis; i++)
{
		cout<<"Ingrese numero: ";
		cin>>numero; 

		insertarInicio(lista,numero);
}
	cout<<"\nLista invertida "<<endl;
	cout << endl;
	imprimir(lista);
	invertirlista(lista);
	
system("pause");
 
}
