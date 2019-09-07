#include<iostream>

using namespace std;

int main (){
	int i, j;
	int matriz[5][5] = {};

	for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i+1 >= j and i-1 <= j){
                cout << "Anadir numero " << "[" << i << "]" << "[" << j << "] : ";
				 cin >> matriz[i][j];
            }
        }
    }
    
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}

return 0;
	
}
