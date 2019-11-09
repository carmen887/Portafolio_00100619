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


void paraelIngreso(Arbol p){
    bool continuar = true;
    
    do{
        int opcion = 0;
        cout << "\nNodo actual " << p->sig <<endl;
        cout << "\t1)Hacia la izquierda \n\t2)Hacia la derecha\n";
        cout << "\t3)Hacia sub arbol izquierdo\n\t4)Hacia sub arbol derecho\n";
        cout << "\t5)Ir al nodo padre\n\tOpcion: ";
        cin >> opcion;
        
        switch(opcion){
            case 1: 
                if (p->izquierdo == NULL){
                    int num = 0;
                    
                    cout << "Numero: ";
                    cin >> num;
                    
                    ladoIzquierdo(p, num);
                    
                    cout << "Se agrego el numero" << endl;
                }
                else
                    cout << "SUB ARBOL EXISTENTE" << endl;
                break;
            case 2: 
                if (p->derecho == NULL){
                	
                    int num = 0;
                    
                    cout << "Numero: ";
                    cin >> num;
                    
                    ladoDerecho(p, num);
                    
                    cout << "Se agrego el numero" << endl;
                }
                else
                    cout << "SUB ARBOL EXISTENTE" << endl;
                break;
            case 3: 
                if (p->izquierdo != NULL)
                    paraelIngreso(p->izquierdo);
                else
                    cout << "Error" << endl;
                break;
            case 4:
                if (p->derecho != NULL)
                    paraelIngreso(p->derecho);
                else
                    cout << "Error" << endl;
                break;
            case 5:
                continuar = false;
                break;
            default:
                cout << "Error: Opcion no valida" << endl;
                break;
        }
    }while(continuar);
}

void buscar(Arbol a, bool *siono, int n){
	
    if(a->derecho != NULL){
        if(n > a->sig){
            (*siono) = false;
            
        }else if(*siono){
            buscar(a->derecho, siono, n);
        }
    }
    
    if(a->izquierdo != NULL){
        if(n < a->sig){
            (*siono) = false;
            
        }else if(*siono){
            buscar(a->izquierdo, siono, n);
        }
    }
}
void binario(Arbol a, bool *siono){
    int num2 = a->sig;

    if(a->derecho != NULL){
        if(num2 > a->derecho->sig){
        
            (*siono) = false;
            
        }else if(*siono){
            buscar(a->derecho, siono, num2);
        }
    }
    if(a->izquierdo != NULL){
        if(num2 < a->izquierdo->sig){
        	
            (*siono) = false;
            
        }else if(*siono){
            buscar(a->izquierdo, siono, num2);
        }
    }

    if(*siono){
    	
        if(a->derecho != NULL)
            binario(a->derecho, siono);
            
        if(a->izquierdo != NULL)
            binario(a->izquierdo, siono);
    }
}

int main(){
	
    int num = 0;
    
    cout<<"Raiz del arbol: ";
    cin >> num;
    
    Arbol arbol = inicioArbol(num);

    bool continuar = true;
    
    do{
        int opcion = 0;
        cout << "Menu:\n\t1) Ingresar nodo ";
        cout << "\n\t2) Es un arbol binario de busqueda?";
        cout << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;

        bool siono = true;
        switch(opcion){
        	case 1: paraelIngreso(arbol);
            break;
            case 2:
                binario(arbol, &siono);
                if(siono){
                    cout << "Si es un arbol binario de busqueda" << endl;
                }else{
                    cout << "No es un arbol binario de busqueda" << endl;
                }
                break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    
    return 0;
}
