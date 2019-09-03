#include<iostream>

using namespace std;

float mediana(int arreglo[], int tamano);

int main (){
    int arreglo[50];
    int tamano, aux;
    
    cout << "Ingrese el tamano del arreglo: " ; cin >> tamano;

    for(int i = 0; i < tamano; i ++){
        cout << "Num " << (i + 1) << "= ";
        cin >> arreglo[i]; 
        
    }
    //Parte autoinvestigada para hacer mas factible el programa
    for (int i = 0; i < tamano; i ++){
        for(int j = 0; j < tamano; j ++){
            if (arreglo[i] < arreglo[j]){
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
    
    cout << "\nArreglo ordenado de menor a mayor: "; 
    
    for(int i = 0; i < tamano; i ++){
        cout << arreglo[i] << ",";
    }
    
    cout << endl;
    cout << "La mediana de los numeros es: " << mediana(arreglo,tamano) << endl;
    
    return 0;
}

float mediana(int arreglo[], int tamano){
	float med, r;
	
	if(tamano%2 == 0){
		int d = (tamano + 1)/2;
		med = (float)(arreglo[d - 1]+ arreglo[d])/2;
		r = med;
		
		return r;
	}
	else{
	
		return (arreglo[tamano/2]);
	}
	
}

