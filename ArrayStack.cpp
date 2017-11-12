#include "ArrayStack.h"

ArrayStack::ArrayStack(int pSize){
	size=pSize;
	array=new char[size];
	availPos=0;
}
bool ArrayStack::push(char dato){
	bool retval=false;

	if (availPos==size) {
		return retval;
	}else{
		array[availPos++]=dato;
		retval=true;
		return retval;
	}
}

bool ArrayStack::isEmpty(){
	return availPos==0;
}

char ArrayStack::pop(){
	if (isEmpty()) {
		return 0;
	}else{
		char retval=array[availPos-1];
		availPos--;
		return retval;
	}
}
ArrayStack::~ArrayStack(){
	delete[] array;
}
