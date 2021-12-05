
#ifndef QUEUE_H
#define QUEUE_H
#include "WHLocation.h"
#include <iostream>
#include <string>



using namespace std;

class Queue{

	public:
        Queue();
        ~Queue();
		bool isEmpty();
        void peekFirst(WHLocation** loc);
        void popFirst(WHLocation** loc);
        void addLast(WHLocation* loc);
        
        void print() const;

	 
    private:
        
        class Node
        {
        public:
            WHLocation* data;
            Node*    next;
        };
        private:
            Node* head;
            Node* tail;
    

	
};
#endif
