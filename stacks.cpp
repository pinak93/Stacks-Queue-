#include "stacks.h"
/*
Author -Pinak Kelkar

Stack is LIFO 
Using a vector for entering values and tracking the top of the vector by the top variable.

Space Complexity O(n)
*/
Stack::Stack(): top(-1){}

// Checkin if the stack is empty or else throw Exceptions Constant Time we are peeking and not removing
int Stack::peek() const{
	if(isempty()) throw "Stack Empty";
	return stack[top];
}
/*
We need to pop the element of the top which is the last element.
To maintain the space complexity of O(n) we erase the last element
Note step 24 helps to keep the space to O(n)
if not then the extra space will never get removed
All the operation is O(1) constant
*/
int Stack::pop(){
	if(isempty()) throw "Stack Empty";
	
	std::vector<int>::iterator it;  
	it = stack.end();
	stack.erase(--it);
	
	return stack[top--];
}
//Push the Element in the stack and increament the top index.
void Stack::push(int const& value){
	stack.push_back(value);
	top++;
}
///Helper to check if the stack is empty.
bool Stack::isempty() const { 
         return top==-1; 
}