
#include "queue.h"

Queue::Queue(){}

void Queue::add(int const& value){
	entering.push(value);
}

int Queue::poll(){
	if(entering.isempty() && polling.isempty()) throw "Queue Empty";
	
	if(polling.isempty())
		while(!entering.isempty())polling.push(entering.pop());
		
		return polling.pop();
}
	
int Queue::front(){
	if(entering.isempty() && polling.isempty()) throw "Queue Empty";
	
	if(polling.isempty())
		while(!entering.isempty())polling.push(entering.pop());
		
		return polling.peek();
}
	
bool Queue::isempty() { 
         return entering.isempty() && polling.isempty(); 
}
	