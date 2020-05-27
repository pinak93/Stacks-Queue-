#include "queue.h"

/*
Author -Pinak Kelkar
Two Stacks are used to implement a Queue;
Stack 1(entering) is used to enter the incoming values;
As the Stack is LIFO we need to turn the stack upside down to get FIFO for Queue we do that in stack 2
stack 2(pollling) is used to pop the top element which was the first entry

Thus the space complexity is O(n) for Queue
*/

 // Constuction Initialization for the two stack Pointers.
Queue::Queue(): entering(new Stack()), polling(new Stack()){}

//To delete the free the pointer memory from the heap.
Queue::~Queue(){
delete entering;
delete polling;
}


// Adding the Element ot the Stack 1 which takes O(1) Time to enter value as the Stack operation uses a Vector.
void Queue::add(int const& value){
	entering->push(value);
}

/*
We check if Both the stacks are empty if yes the throw Exceptions as the action is illegal
If the stack 2 is empty means we need to turn the stack 1 upside down to acheive a FIFO effect.
*/
int Queue::poll(){
	if(isempty()) throw "Queue Empty";  
	
	if(polling->isempty())
		while(!entering->isempty())polling->push(entering->pop());  
		
		return polling->pop();
}

// we use the same Working as the polling operation just but without the removal of the top most element.
int Queue::front(){
	if(isempty()) throw "Queue Empty";	//Throws Exception if the command is used when Queue is Empty;
	 
	if(polling->isempty())
		while(!entering->isempty())polling->push(entering->pop());
		
		return polling->peek();
}

//This is Helper fucntion to check if the Queue is empty.
bool Queue::isempty() { 
         return entering->isempty() && polling->isempty(); 
}
	