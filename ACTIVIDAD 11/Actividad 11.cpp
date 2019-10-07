#include <iostream>
using namespace std;

void colaCircular(){
int arreglo[9]={0};
int numeroActual=0;

for(int i=1; i<=15; i++){
	arreglo[numeroActual]=i;
	numeroActual++;
	
	if(numeroActual ==9) 
	numeroActual=0;
}
	
for(int i=0;i<9;i++) 
cout << arreglo[i]<<endl;

}


int main(){
	colaCircular();
	return 0;
}
