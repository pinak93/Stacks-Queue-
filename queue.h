#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "stacks.h"

class Queue { 
   private: 
     Stack *entering;
	 Stack *polling;
   public: 
	Queue();
	~Queue();
      void add(int const&);   
      int poll();         
      int front(); 
      bool isempty();
};
#endif