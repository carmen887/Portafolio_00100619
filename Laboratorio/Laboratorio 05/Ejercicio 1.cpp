#include <iostream>
using namespace std;

struct nodo{
    int sig;
    struct nodo *izquierdo;
    struct nodo *derecho;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol inicioArbol(int n){
    Arbol p = new Nodo;
    p->sig = n;
    p->izquierdo = NULL;
    p->derecho = NULL;
    return p;
}

void ladoIzquierdo(Arbol uno, int unDato){
	
    if(uno == NULL)
        cout << "ARBOL VACIO" << endl;
        
    else if(uno->izquierdo != NULL)
        cout << "SUB ARBOL EXISTENTE" << endl;
        
    else
        uno->izquierdo = inicioArbol(unDato);
}

void ladoDerecho(Arbol dos, int unDato){
	
    if(dos == NULL)
        cout << "ARBOL VACIO" << endl;
        
    else if(dos->derecho != NULL)
        cout << "SUB ARBOL EXISTENTE" << endl;
        
    else
        dos->derecho = inicioArbol(unDato);
}

void agregarNodo(Arbol nuevo){
    int num = 0;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    
    Arbol p = nuevo;
    
    while(true){
    	
        if(num == p->sig){
        	
            cout << "Error, ingrese otro nodo" << endl;
            
            return;
        }
        else if(num < p->sig){
        	
            if(p->izquierdo == NULL)
            
                break;
            else
            
                p = p->izquierdo;
        }
        
        else{
        	
            if(p->derecho == NULL)
            
                break;
                
            else
            
                p = p->derecho;
        }
    }
    
    
    if(num < p->sig)
        ladoIzquierdo(p, num);
        
    else
        ladoDerecho(p, num);
}


void datos(Arbol a, int *derecho, int *izquierdo){
	
    if(a->derecho != NULL){
        (*derecho)++;
        datos(a->derecho, derecho, izquierdo);
    }
    
    if(a->izquierdo != NULL){
        (*izquierdo)++;
        datos(a->izquierdo, derecho, izquierdo);
    }
}

int altura(Arbol a){
	
    int izquierdo = 0, derecho = 0;
    
    datos(a, &derecho, &izquierdo);
    
    if(izquierdo > derecho){
        return izquierdo;
        
    }else{
        return derecho;
    }
    
    
    return 0;
}

void elNodo(Arbol a, int *suma, int *contador){
	
    if(a != NULL){
    	
        (*contador)++;
        (*suma)+= a->sig;
        
        elNodo(a->izquierdo, suma, contador);
        elNodo(a->derecho, suma, contador);
        
    }
    
}

void datosdelArbol(Arbol a){
    cout << "Altura del arbol: " << altura(a) << endl;
    
    int suma =0, totalNodos =0;
    
    elNodo(a, &suma, &totalNodos);
    
    cout << "Suma de los nodos: " << suma << endl;
    cout << "Total de nodos: " << totalNodos <<endl;
    
}

int main(){
	
    int raiz = 0;
    
    cout<<"Raiz del arbol: ";
    cin >> raiz;
    
    Arbol arbol = inicioArbol(raiz);
    
        do{
        int opcion = 0;
        
        cout << "Menu: \n\t1) Ingresar nodos"
        << "\n\t2) Datos del arbol"
        << "\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        
        switch(opcion){
            case 1: agregarNodo(arbol);
                break;
            case 2: datosdelArbol(arbol);
                break;
            case 3: return 0;
                break;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
        
    }while(true);
    
    
    return 0;
}
