#include <iostream>
#include <string>
using namespace std;


struct Persona{
    int carnet;
    string nombre;
    string apellido;
    int edad;
    int numeroTelefono;
    string correoElectronico;

};
typedef struct Persona Datos;

Datos solicitarDatos(){
    Datos p;

    cout << "Carnet: ";
    cin >> p.carnet;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, p.nombre);
    cout << "Apellido: ";
    getline(cin, p.apellido);
    cout << "Edad: ";
    cin >> p.edad;
    cout << "Numero de telefono: ";
    cin >> p.numeroTelefono;
    cin.ignore();
    cout << "Correo electronico: ";
    getline(cin, p.correoElectronico);

    return p;
}

void mostrarDatos(Datos p){
    cout << "Carnet: " << p.carnet << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Apellido: " << p.apellido << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Numero de telefono: " << p.numeroTelefono << endl;
    cout << "Correo electronico: " << p.correoElectronico << endl;
}

struct TNodo{
    Datos dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Datos p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void insertarFinal(Datos p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;

    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void insertarDespuesDe(Datos p) {
    int unCarnet = 0;
    cout << "Numero de carnet: ";
    cin >> unCarnet;

    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
    if(s == NULL){
        cout << "El numero de carnet NO existe" << endl;
        return;
    }

    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s->sig;

    s->sig = nuevo;
    cout << "Datos ingresados" << endl;
}

void insertarAntesDe(Datos p) {
    int unCarnet = 0;
    cout << "Numero de carnet de referencia: ";
    cin >> unCarnet;

    Nodo *s = pInicio, *q = NULL;

    while(s != NULL && (s->dato).carnet != unCarnet){
        q = s;
        s = s->sig;
    }
    if(s == NULL){
        cout << "El numero de carnet NO existe" << endl;
        return;
    }

    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;

    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Datos ingresados" << endl;
}

void agregarDatos(){
    Datos p = solicitarDatos();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\t3) Despues de\n\t4) Antes de"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            case 3: insertarDespuesDe(p);   continuar = false;
            break;
            case 4: insertarAntesDe(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarDatosL() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarDatos(s->dato);
        s = s->sig;
        cout << endl;
    }
}

void eliminarPersona(){
    int unCarnet = 0;
    cout << "Carnet de la persona a eliminar: ";
    cin >> unCarnet;

    Nodo *p = pInicio, *q = NULL;

    while(p != NULL && (p->dato).carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Persona a eliminar NO esta registrada" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Se ha eliminado a la persona!" << endl;
}

bool actualizarDatos() {
    int unCarnet = 0;
    cout << "Carnet de la persona: ";
    cin >> unCarnet;

    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
	
	cout << "Ingrese nuevamente los datos de la persona: " << endl;
	
	solicitarDatos();
	
    return (s != NULL);
    
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Llenar lista\n\t2) Eliminar una persona"
            << "\n\t3) Actualizar los datos de una persona\n\t4) Mostrar todas las personas"
            << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1 : cout << "Agregando..." << endl;
                agregarDatos();
            break;
            case 2 : cout << "Eliminando..." << endl;
            	eliminarPersona();
            break;
            case 3 : cout << "Actualizando..." << endl;
               actualizarDatos();
            break;
            case 4 : cout << "Listando..." << endl;
            	mostrarDatosL();
            break;
            case 5 : continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
