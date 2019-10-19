#include <iostream>
using namespace std;

char pr[5];
char pi[5];

int  main () {
	char signo;
	
    cout << "Digite parte real: ";
    cin >> pr;
    cout << "Digite parte imaginario: ";
    cin >> pi;
    cout << "Ingrese el signo: ";
    cin >> signo;
    
        if (signo == '-'){
            signo = '+';
            cout << "La conjugada es: " << pr << signo << pi << endl;


        } 
        else{
        	signo = '-';
        	cout << "La conjugada es: " << pr << signo << pi << endl;
		}
    
    
    return 0;
}
