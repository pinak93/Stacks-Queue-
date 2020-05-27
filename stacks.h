#ifndef __STACKS_H__
#define __STACKS_H__
#include<vector>

class Stack { 
   private: 
      std::vector<int> stack;  
		int top;
   public: 
	Stack();
      void push(int const&); 
      int pop();         
      int peek() const; 
      bool isempty() const;
};
#endif