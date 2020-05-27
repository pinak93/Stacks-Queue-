#include "stacks.h" 
#include "queue.h" 
#include<iostream>
#include<string>
using namespace std;
int main(){
	
	Stack *st=new Stack();
	Queue *qu=new Queue();
	
	while(1){
		cout<<"1) Push into Stack"<<endl;
		cout<<"2) Pop Stack Item"<<endl;
		cout<<"3) Peek Stack"<<endl;
		
		cout<<"4) Add into Queue"<<endl;
		cout<<"5) Poll Queue Item"<<endl;
		cout<<"6) Front of Queue"<<endl;
		
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
					cout<<st->pop();
				}
				catch(char const* err){
					string e(err);
					cout<<"Exception Occured:"<<e<<endl;
				}
					break;
			case 3:
				try{
					cout<<st->peek();
				}
				catch(char const* err){
					string e(err);
					cout<<"Exception Occured:"<<e<<endl;
				}
					break;
				
			case 4:
				cout<<"Enter value:";
				cin>>value;
				qu->add(value);
				break;	
			case 5:
				try{
					cout<<qu->poll();
				}
				catch(char const* err){
					string e(err);
					cout<<"Exception Occured:"<<e<<endl;
				}
				break;
			case 6:
				try{
					cout<<qu->front();
				}
				catch(char const* err){
					string e(err);
					cout<<"Exception Occured:"<<e<<endl;
				}
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