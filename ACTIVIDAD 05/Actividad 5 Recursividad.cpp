//Carmen Elisa Lopez Alvarado 00100619 Seccion 02

#include<iostream>

using namespace std;

int recursion(int num1, int num2);

int main (void){
    int total, n1, n2;
    
    cout << "Ingrese el primer numero: "; cin >> n1;
    cout << "Ingrese el segundo numero: "; cin >> n2;
    
    total = recursion(n1, n2);
    
    cout << "El total es: " << total << endl;
    
    
    return 0;
}

int recursion(int num1, int num2){
    int numero1, numero2;
    
    if(num1 == 0 || num2 == 0){
        return 0;
    }
    
    else{
        return num1 + recursion(num1, num2-1);
    }
}
