#include "Stack.h"
#include "ArrayStack.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	string cadena="Hola PAPA";
	Stack* stack =new ArrayStack(100);

	for (int i = 0; i < cadena.size(); i++) {
		stack->push(cadena[i]);
	}
	while (!stack-> isEmpty()) {
		cout<<stack->pop();
	}
	cout<<endl;

	delete stack;
return 0;
}
