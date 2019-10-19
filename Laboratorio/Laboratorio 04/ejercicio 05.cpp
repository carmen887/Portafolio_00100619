#include<iostream>
 
 using namespace std;
 
struct nodo{
       int num;
       struct nodo *siguiente;
       };
typedef struct nodo *n;
void insertarInicio(n &,int );
void invertirlista(n &);
void imprimir(n &);
 
 
int main ()
{
n lista =NULL;
int m,numero;
cout<<"numero de elementos"<<endl;
cin>>m;
 
for(int i=0;i<m;i++)
{
cout<<"ingrese elemento"<<endl;
cin>>numero; 
insertarInicio(lista,numero);
}
 
cout<<"lista original"<<endl;
imprimir(lista);
 
invertirlista(lista);
cout<<"lista invertida "<<endl;
imprimir(lista);
system("pause");
 
}
 
void invertirlista(n &lista)
{
n p,b,t;
 
if(lista==NULL)
return;
p=lista;
b=lista->siguiente;
lista->siguiente=NULL;
 
while(p!=NULL)
{
t=b->siguiente;
b->siguiente=p;
p=b;
b=t;
}
lista=p;
 
 
}
 
void insertarInicio(n &lista,int numero)
{
n q;
q=new(struct nodo);
q->num=numero;
q->siguiente=lista;
lista=q;
}
 
void imprimir(n &lista)
{
while(lista!=NULL)
{
cout<<lista->num<<endl;
lista=lista->siguiente;
}
}
