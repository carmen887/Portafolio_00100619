#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>

using namespace std;

struct continente{
	char continente[25];
	char nombre[25];
	char capital[25];
	int habitantes;
	float promedio;
};

void promedioEdad(continente *africa, continente *america, continente *asia, continente *europa, continente *oceania);


int main (){
	int capital;
	
	continente africa[5];
	
	cout << "AFRICA" << endl;
	cout << "Datos ingresados "  << endl;
	for(int i = 0; i < 5; i++){
	
	fflush(stdin);	
	cout << "\nIngrese nombre del pais " << i+1 <<": ";
	cin.getline (africa[i].nombre,25);
	cout << "Ingrese capital: ";
	cin.getline(africa[i].capital,25); 
	cout << "Ingrese numero de habitantes: ";
	cin >> africa[i].habitantes;
	cout << "Promedio de edad: ";
	cin >> africa[i].promedio;
}
	
	cout << "\n\nDatos de paises: " << endl;
	for(int i = 0; i < 5; i++){
	
	cout << "\nPais " << i+1 << " es: " << africa[i].nombre << " y su capital es: " << africa[i].capital;
	cout << endl;
	cout << "La cantidad de habitantes son: " << africa[i].habitantes;
	cout << endl;
	cout << "El promedio de edad del pais es: " << africa[i].promedio;	
	cout << endl;
}

for(int i= 0; i< 5; i++){
		int mayor;
		
	if(africa[i].habitantes > mayor){
		mayor = africa[i].habitantes;
		capital =i;
	}
	
	
}
		cout << "\nCapital con mayor poblacion: ";
	cout << endl;
	cout << "Nombre: " << africa[capital].capital << endl;
	cout << "Habitantes: " << africa[capital].habitantes << endl;
	

continente america[5];
	
	cout << "\nAMERICA" << endl;
	cout << "\nDatos ingresados " << endl;
	
	for(int i = 0; i < 5; i++){
			
	fflush(stdin);	
	cout << "\nIngrese nombre del pais " << i+1 <<": ";
	cin.getline (america[i].nombre,25);
	cout << "Ingrese capital: ";
	cin.getline(america[i].capital,25); 
	cout << "Ingrese numero de habitantes: ";
	cin >> america[i].habitantes;
	cout << "Promedio de edad: ";
	cin >> america[i].promedio;
}
	cout << "\n\nDatos de paises " << endl;
	
	for(int i = 0; i < 5; i++){
	cout << "\nPais " << i+1 <<" es: " << america[i].nombre << " y su capital es: " << america[i].capital;
	cout << endl;
	cout << "\nLa cantidad de habitantes son: " << america[i].habitantes;
	cout << endl;
	cout << "El promedio de edad del pais es: " << america[i].promedio;
	cout << endl;
}

	for(int i= 0; i< 5; i++){
		int mayor;
		
	if(america[i].habitantes > mayor){
		mayor = america[i].habitantes;
		capital =i;
	}
	
	
}
		cout << "\nCapital con mayor poblacion: ";
	cout << endl;
	cout << "Nombre: " << america[capital].capital << endl;
	cout << "Habitantes: " << america[capital].habitantes << endl;
	


	continente asia[5];
	
	cout << "\nASIA" << endl;
	cout << "\nDatos ingresados " << endl;
	
	for(int i = 0; i < 5; i++){
			
	fflush(stdin);	
	cout << "\nIngrese nombre del pais " << i+1 <<": ";
	cin.getline (asia[i].nombre,25);
	cout << "Ingrese capital: ";
	cin.getline(asia[i].capital,25); 
	cout << "Ingrese numero de habitantes: ";
	cin >> asia[i].habitantes;
	cout << "Promedio de edad: ";
	cin >> asia[i].promedio;
}
	cout << "\n\nDatos de paises " << endl;
	
	for(int i = 0; i < 5; i++){
	cout << "\nPais " << i+1 <<" es: " << asia[i].nombre << " y su capital es: " << asia[i].capital;
	cout << endl;
	cout << "\nLa cantidad de habitantes son: " << asia[i].habitantes;
	cout << endl;
	cout << "El promedio de edad del pais es: " << asia[i].promedio;
	cout << endl;
}

for(int i= 0; i< 5; i++){
		int mayor;
		
	if(asia[i].habitantes > mayor){
		mayor = asia[i].habitantes;
		capital =i;
	}
	
	
}
		cout << "\nCapital con mayor poblacion: ";
	cout << endl;
	cout << "Nombre: " << asia[capital].capital << endl;
	cout << "Habitantes: " << asia[capital].habitantes << endl;
	

	continente europa[5];
	
	cout << "\nEUROPA" << endl;
	cout << "\nDatos ingresados " << endl;
	
	for(int i = 0; i < 5; i++){
			
	fflush(stdin);	
	cout << "\nIngrese nombre del pais " << i+1 <<": ";
	cin.getline (europa[i].nombre,25);
	cout << "Ingrese capital: ";
	cin.getline(europa[i].capital,25); 
	cout << "Ingrese numero de habitantes: ";
	cin >> europa[i].habitantes;
	cout << "Promedio de edad: ";
	cin >> europa[i].promedio;
}
	cout << "\n\nDatos de paises " << endl;
	
	for(int i = 0; i < 5; i++){
	cout << "\nPais " << i+1 <<" de Europa: " << europa[i].nombre << " y su capital es: " << europa[i].capital;
	cout << endl;
	cout << "\nLa cantidad de habitantes son: " << europa[i].habitantes;
	cout << endl;
	cout << "El promedio de edad del pais es: " << europa[i].promedio;
	cout << endl;
}
	
	for(int i= 0; i< 5; i++){
		int mayor;
		
	if(europa[i].habitantes > mayor){
		mayor = europa[i].habitantes;
		capital =i;
	}
	
	
}
		cout << "\nCapital con mayor poblacion: ";
	cout << endl;
	cout << "Nombre: " << europa[capital].capital << endl;
	cout << "Habitantes: " << europa[capital].habitantes << endl;
	
	
	
	continente oceania[5];
	
	cout << "\nOCEANIA" << endl;
	cout << "\nDatos ingresados " << endl;
	
	for(int i = 0; i < 5; i++){
			
	fflush(stdin);	
	cout << "\nIngrese nombre del pais " << i+1 <<": ";
	cin.getline (oceania[i].nombre,25);
	cout << "Ingrese capital: ";
	cin.getline(oceania[i].capital,25); 
	cout << "Ingrese numero de habitantes: ";
	cin >> oceania[i].habitantes;
	cout << "Promedio de edad: ";
	cin >> oceania[i].promedio;
}
	cout << "\n\nDatos de paises " << endl;
	
	for(int i = 0; i < 5; i++){
	cout << "\nPais " << i+1 <<" de Oceania: " << oceania[i].nombre << " y su capital es: " << oceania[i].capital;
	cout << endl;
	cout << "\nLa cantidad de habitantes son: " << oceania[i].habitantes;
	cout << endl;
	cout << "El promedio de edad del pais es: " << oceania[i].promedio;
	cout << endl;
}


	for(int i= 0; i< 5; i++){
		int mayor;
		
	if(oceania[i].habitantes > mayor){
		mayor = oceania[i].habitantes;
		capital =i;
	}
	
	
}
		cout << "\nCapital con mayor poblacion: ";
	cout << endl;
	cout << "Nombre: " << oceania[capital].capital << endl;
	cout << "Habitantes: " << oceania[capital].habitantes << endl;
	

void promedioEdad(continente &africa, continente &america, continente &asia, continente &europa, continente &oceania);
	
	return 0;
}




void promedioEdad(continente *africa, continente *america, continente *asia, continente *europa, continente *oceania) { 

	int prom = 0;
	
	for(int i= 0; i < 5; i++){
	
	prom += (*africa).promedio;
	prom += (*america).promedio;
	prom += (*asia).promedio;
	prom += (*europa).promedio;
	prom += (*oceania).promedio;
	}
	
	prom = prom/25;
	
	cout << "El promedio mundial es: " << prom << endl;

}
