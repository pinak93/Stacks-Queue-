#include "stacks.h"

Stack::Stack(): top(-1){}

int Stack::peek() const{
	return stack[top];
}

int Stack::pop(){
	if(isempty()) throw "Stack Empty";
	
	std::vector<int>::iterator it;  
	it = stack.end();
	stack.erase(--it);
	return stack[top--];
}

void Stack::push(int const& value){
	stack.push_back(value);
	top++;
}

bool Stack::isempty() const { 
         return top==-1; 
}