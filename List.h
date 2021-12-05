#ifndef LIST_H
#define LIST_H

#include "Product.h"
using namespace std;
class List
{
   
  class Node
  {
    public:
      Product* data;
      Node*    next;
  };

  public:
    List();
    ~List();
    void add(Product*);
    void del(const string&, Product**);
    void print() const;
    bool isEmpty();
    void findProduct(const string&, Product**);

  private:
    Node* head;

};

#endif

