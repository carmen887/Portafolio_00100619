#include<iostream>
 using namespace std;
 
 int recConteo(int numero, int x);
 
 int main (){
     int entero;
     
     cout << "Ingrese un numero entero: "; cin >> entero;
     
     cout << "El numero " << entero << " tiene " << recConteo(entero, 0) << " digitos." ;
     
     return 0;
 }
 
 
 int recConteo(int numero, int x){
     if(numero > 0){
         return recConteo(numero/10, x+1);
     }
     return x;
 }