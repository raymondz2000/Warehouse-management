
#include "Queue.h"
 #include <iostream>
#include <string>
using namespace std;


bool Queue::isEmpty(){
    return head == NULL;
     
}
Queue::~Queue(){
    Node* currNode;
    Node* nextNode;
    currNode = head;
    while (currNode != NULL) {
        nextNode = currNode->next;
        delete currNode;
        currNode = nextNode;
    }
}
Queue::Queue():head(NULL),tail(NULL){
    
}
void Queue::peekFirst(WHLocation** loc) {
    if(head==NULL){
        *loc = NULL;
    }else{
        *loc= head->data;
        
    }
}
void Queue::addLast(WHLocation* loc){
   
  Node* newNode;
  newNode = new Node;
  newNode->data = loc;
  newNode->next = NULL;
  if(head==NULL){
      head=tail=newNode;
  }else{
      tail->next = newNode;
      tail=newNode;
  }
   
}
void Queue::popFirst(WHLocation** loc) {
    if(head==NULL){
        *loc =NULL;
    }else{
        *loc= head->data;
        Node*temp = head;
        head = head->next;
        delete temp;
    }
    
}

void Queue::print() const
{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}