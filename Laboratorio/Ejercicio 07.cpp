
#include<iostream>
using namespace std;
#define MAX 100
 
int leeCantidadElem()
{
    int n;
    do{
        cout<<"Cantidad de elementos a ingresar: ";cin>>n;
        if(n<=0)
            cout<<"ERROR...Ingresa una cantidad correcta: "<<endl;
        if(n>MAX)
            cout<<"ERROR...La cantidad maxima permitida es "<<MAX<<" : "<<endl;
    }while(n<=0 || n>MAX);
    return n;
}
 
int elegirEvento(int cant,int Arreglo[])
{
Opciones:
    int i,k,elem,opt;
    cout<<"1. Insertar elemento: "<<endl;
    cout<<"2. Eliminar elemento: "<<endl;
    cout<<"3. Agregar elemento: "<<endl;
    cout<<"4. Buscar elemento: "<<endl;
    cout<<"Elija una opcion 1 , 2 , 3 o 4: ";cin>>opt;
    switch(opt)
    {
        case 1:
            {
                cout<<"\t>>Que elemento desea insertar: ";cin>>elem;
                do{
                cout<<"\t>>En que posicion desea insertar...de [0] hasta ["<<cant-1<<"]: ";cin>>k;
                    if(k>(cant-1)||k<0)
                        cout<<">>Ingrese una posicion valida!!!"<<endl;
                }while(k>(cant-1)||k<0);
                cant++;
                for(i=cant-1;i>=k;i--)
                {
                    Arreglo[i+1]=Arreglo[i];
                    if(k==i)
                    Arreglo[k]=elem;
                }
            }break;
 
        case 2:
            {
                do{
                cout<<"\t>>Que posicion desea eliminar...de [0] hasta ["<<cant-1<<"]: ";cin>>k;
                if(k>(cant-1)||k<0)
                        cout<<">>Ingrese una posicion valida!!!"<<endl;
                }while(k>(cant-1)||k<0);
                for(i=k;i<cant;i++)
                {
                    Arreglo[i]=Arreglo[i+1];
                }
                    cant--;
            }break;
 
        case 3:
            {
                for(i=0;i<1;i++)
                {
                    cout<<"\t>>Que elemento desea agregar : ";cin>>elem;
                Agregar:
                    cant++;
                    Arreglo[cant-1]=elem;
                }
            }break;
 
        case 4:
            {
 
                cout<<"\t>>Que elemento desea buscar: ";cin>>elem;
                for(i=0;i<cant;i++)
                {
                    if(Arreglo[i]==elem)
                    {
                        cout<<"\t>>El elemento buscado se encuentra en: Arreglo["<<i<<"]"<<endl;
                        cout<<"\t>>El elemento se agregara al final"<<endl;
                    goto Agregar;
                    }
                    else
                    {
                        if(i==cant-1)
                        {
                        cout<<"\t>>No se encuetra el elemento que busca!!!"<<endl;
                        cout<<"\t>>Puede confirmarlo viendolo Ud. mismo!!!"<<endl;
                        }
                    }
                }
 
            }break;
        default:system("cls");cout<<"No existe esa opcion, vuelva a intentar: "<<endl;goto Opciones;break;
 
    }
 
return cant;
}
 
void leeCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa elemento en Arreglo["<<i<<"] : ";
        cin>>n[i];
    }
 
}
 
void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Arreglo["<<i<<"] : "<<n[i]<<endl;
    }
}
 
int main()
{
    int c;
    char opt;
    int n[MAX];
    c=leeCantidadElem();
    leeCadena(c,n);
    do{
    c=elegirEvento(c,n);
    muestraCadena(c,n);
    cout<<"Desea realizar otra operacion!!!... S/s, caso contrario pulse otra tecla: ";cin>>opt;
    }while(opt=='s'||opt=='S');
}
