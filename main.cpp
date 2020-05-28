#include "stacks.h" 
#include "queue.h" 
#include<iostream>
#include<string>
using namespace std;
int main(){
	
	Stack *st=new Stack();
	Queue *qu=new Queue();
	
	while(1){
		cout<<"1) Push into Stack (Current Size is:"<<st->size()<<")"<<endl;
		cout<<"2) Pop Stack Item"<<endl;
		cout<<"3) purge Stack"<<endl;
		if(!st->isempty()) cout<<"Top of Stack: "<<st->peek()<<endl<<endl;
			
		cout<<"4) Add into Queue (Current Size is:"<<qu->size()<<")"<<endl;
		cout<<"5) Poll Queue Item"<<endl;
		cout<<"6) purge Queue"<<endl;
		
		if(!qu->isempty()) cout<<"Front of Queue: "<<qu->front()<<endl<<endl;
		
		cout<<"7) Done"<<endl;
		int select,value;
		cin>>select;
		switch(select){
			case 1:
				cout<<"Enter value:";
				cin>>value;
				st->push(value);
				break;
			case 2:
				try{
					cout<<"Element Deleted : "<<st->pop()<<endl;
				}
				catch(char const* err){
					string e(err);
					cout<<"Exception Occured:"<<e<<endl;
				}
					break;
			case 3:
					st->purge();
					cout<<"Stack Emptied"<<endl;
					break;	
			case 4:
				cout<<"Enter value:";
				cin>>value;
				qu->add(value);
				break;	
			case 5:
				try{
					cout<<"Element Deleted : "<<qu->poll()<<endl;
				}
				catch(char const* err){
					string e(err);
					cout<<"Exception Occured:"<<e<<endl;
				}
				break;	
			case 6:
					qu->purge();
					cout<<"Queue Emptied"<<endl;
					break;	
				
				
			default:
				delete st;
				delete qu;
				return 0;
				break;
		}
		
		
	}
	
	return 0;
}