#include <iostream>

using namespace std;

int main()
{
    int arreglo[10];
    float suma = 0;
    float promedio;
    
    for(int i = 0; i < 10 ; i++){
       cout << "Ingrese el numero " << (i + 1) << " = ";
       cin >> arreglo[i];
       
       suma = suma + arreglo[i];
       
    }
    promedio = suma/ 10;
   
    cout << "La suma es: " << suma << endl;
    
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
