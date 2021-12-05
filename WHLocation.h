#ifndef WHLOCATION_H
#define WHLOCATION_H
//simulatr wearhouse backend
#include <iostream>
#include <string>
#include "defs.h"
#include "Location.h"
using namespace std;


class WHLocation:public Location{
  public:
        WHLocation();
       ~WHLocation();

       
       void print();

    //inherited visual function
        virtual int getCapacity();
        virtual bool add(string,int);
        virtual bool remove(int);
  protected:
  // const static
    const static char code;
    const static int capacity;
    static int nextId;
};

#endif