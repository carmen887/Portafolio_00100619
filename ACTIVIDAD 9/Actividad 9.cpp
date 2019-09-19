#include<iostream>
#include<stack>
using namespace std;

int main ()
{
	stack<char> s;
	
	s.push('A');
	s.push('L');
	s.push('E');
	s.push('X');
	
	
	cout << "La medida de la pila es: " << s.size() << endl;
	cout << "TOP: " << s.top() << endl;
	
	char var;
	while(!s.empty()){
		var = s.top();
		s.pop();
	}
	
	cout << "La nueva medida de la pila es: " << s.size() << endl;
	cout << "BOTTOM: " << var << endl;
	
	
	return 0;
}
