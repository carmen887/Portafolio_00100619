#include<iostream>
using namespace std;

 int mcd(int numMayor, int numMenor);

int main (){
    int numMayor, numMenor;
    
    do{
        cout << "Ingrese el primer numero: "; cin >> numMayor;
        
        if(numMayor<0){
            cout << "No se aceptan numeros negativos" << endl;
        }
        
    }while(numMayor<0);
    
    do{
        cout << "Ingrese el segundo numero: "; cin >> numMenor;
        
        if(numMenor<0){
            cout << "No se aceptan numeros negativos" << endl;
        }
    }while(numMenor<0);
    
    if(numMayor > numMenor){
        cout << "El MCD de (" << numMayor << " , " << numMenor << "): " << mcd(numMayor, numMenor) << endl;
    }
    else{
        cout << "El MCD de (" << numMenor << " , " << numMayor << "): " << mcd(numMenor, numMayor) << endl;
    }
    
    return 0;
}

 int mcd(int numMayor, int numMenor){
     if(numMenor == 0){
         return numMayor;
     }
     else{
         mcd(numMenor, numMayor%numMenor);
     }
 }