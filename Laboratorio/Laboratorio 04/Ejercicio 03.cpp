#include <iostream>
using namespace std;

//Debido a que no pude asistir al labo 4 por parcial de calculo solicite la explicacion de un compañero de labo para hacer este ejercicio
//Me dio la indicacion de no usar el [35] porque no se sabia como meter las palabras alli asi que funciona ingresando como titulo una letra
struct libro{
  char titulo;
  int numPaginas;
  struct libro *sig;
};
typedef struct libro *Book;

void inialize(Book *p){
   *p=NULL;
}

bool empty(Book *p){
  return *p==NULL;
}

void ver(Book *p, char letra,int total){
    struct libro *unNodo;
    
    unNodo = (struct libro*)malloc(sizeof(struct libro));
    unNodo->titulo = letra;
    unNodo->numPaginas = total;
    unNodo->sig = *p;
   
    *p = unNodo;
}


void agregarLibro(Book *p){
    char mander;
    int totalp;
    
       cout << "Titulo del libro: ";
	   cin >> mander;
	   
       cout << "Paginas que posee el libro: ";
	   cin >> totalp;
	   
       ver(p,mander,totalp);
}

char buscarLibro(){
    char izard;
    cout <<"Escoger libro: ";cin>>izard;
    return izard;
}

int funcion(Book *p,char meleon){
   
    if(meleon==((*p)->titulo))
    
      return (*p)->numPaginas;
      
    else
    
      return 0;
}

int main()
{
  Book deLibro;
  
  inialize(&deLibro);
  agregarLibro(&deLibro);
  
  char buscar=buscarLibro();
  
  if(funcion(&deLibro,buscar)!=0) 
  cout << "Numero de paginas del libro escogido: " << funcion(&deLibro,buscar);
  
  else
    cout <<"No existe el libro";
    
    
   
    return 0;
}
