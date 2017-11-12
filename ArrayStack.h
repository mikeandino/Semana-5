#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Stack.h"

class ArrayStack : public Stack{
private:
	char* array;
	int size;
	int availPos;
public:
	ArrayStack(int);
	virtual bool push(char);
	virtual char pop();
	virtual bool isEmpty();

	~ArrayStack();
};
#endif
