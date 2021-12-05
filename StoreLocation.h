
#ifndef STORELOCATION_H
#define STORELOCATION_H
//simulatr store
#include <iostream>
#include <string>

#include "Location.h"
#include "defs.h"
using namespace std;

class StoreLocation:public Location{


	public:
    //constructor
       StoreLocation();
       ~StoreLocation();

    //class function
       void setProduct(string);
       int getFreeSpace();
       void print();


    //inherited visual function
        virtual int getCapacity();
        virtual bool add(string,int);
        virtual bool remove(int);
    protected:
       const static char code; 
       const  static int  capacity;
       static int  nextId;
        
    

	
};
#endif
