#include <iostream>

using namespace std;

void conteoA(int n){
    if(n == 1){
        cout << n << endl;
    }else{
        cout << n << endl;
        conteoA(n-1);
    }
}

void conteoB(int n, int inicio){
    if(n == inicio){
        cout << n << endl;
        conteoA(n-1);
    }else{
        cout << inicio << endl;
        conteoB(n, inicio+1);
    }

}

int main(){
    int num;
    
    cout << "Ingrese un numero: "; cin >> num;

    conteoB(num,1);
    
    return 0;
}
