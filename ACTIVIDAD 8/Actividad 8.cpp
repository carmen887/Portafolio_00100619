#include<iostream>

using namespace std;

struct pila{
	float elementos[100];
	int top;
};
typedef struct pila Pila;

void initialize (Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elementos[s->top] = e;
	}
}

void pop(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elementos[s->top];
        (s->top)--;
    }
}

float obtenerUltimo(Pila *s){
	if(empty(s))
		return -1;
		
	float a = 0, b = 0, c= 0, d = 0, e = 0;
	pop(s, &e);
	
	
    if(empty(s))
        return -1;
   
    pop(s, &d);
    pop(s, &c);
    pop(s, &b);
    pop(s, &a);
   
    return a; 
}

float obtenerUltimo2(Pila *s){
	if(empty(s))
		return -1;
			
	float f = 0, g = 0, h = 0, i = 0;
	pop(s, &i);
	
	if(empty(s))
		return -1;
		
	pop(s, &h);
	pop(s, &g);
	pop(s, &f);
	push(s, f);
	push(s, g);
	push(s, h);
	push(s, i);

	return f;
}

int main(){
	Pila unaPila;
	initialize (&unaPila);
	
	push(&unaPila, 1.7);
    push(&unaPila, 8.3);
    push(&unaPila, 9);
    push(&unaPila, 15);
    push(&unaPila, 23.13);
    

    float ultimo = obtenerUltimo(&unaPila);
    cout << "1. Pila vacia" << endl;
    cout << "\nEl del fondo es: " << ultimo << endl;
	
	
	initialize (&unaPila);
	
	push(&unaPila, 12);
   	push(&unaPila, 8);
   	push(&unaPila, 2.99);
	push(&unaPila, 13.5);
	
	float ultimo2parte = obtenerUltimo2(&unaPila);
	cout << "\n2. Pila intacta" << endl;
	cout << "\nEl del fondo es: "<< ultimo2parte << endl;
			
			
	
	return 0;
}


