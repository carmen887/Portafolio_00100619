//Lo puse de 8 bits porque no lo iba a probar con numeros demasiado altos c:

#include<iostream>

using namespace std;

void convertirbinario(){
	
	int const bits = 8;
	int numero = 0, ponderacion[bits] = {128, 64, 32, 16, 8, 4, 2, 1};
	
	cout << "Ingrese numero base 10: ";
	cin >> numero;
	
	for(int i = 0; i < bits; i++){
		if(numero >= ponderacion[i]){
			numero = numero - ponderacion[i];
			cout << "1";
			
		}
		else{
			cout << "0";
		}
		
	}
	cout << endl;
}


int main (){
	cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Convertir\n\t2) Salir \n\tIngrese Opcion: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Convirtiendo..." << endl;
                convertirbinario();
            break;
            case 2: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}

