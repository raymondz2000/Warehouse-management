//location base class
#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include "defs.h"

 //base class


using namespace std;

class Location{


	public:
    //constructor
       Location(const char &character_code, const int &id);
       ~Location();
    //getter
       string get_id();
       string get_product();
       int getQuantity();
    //class function
       bool isEmpty();
       bool isAvaliable();
       void print();

    //visual function
        virtual int getCapacity()=0  ;
        virtual bool add(string,int)=0;
        virtual bool remove(int) =0 ;

	 
    protected:
        string id;
        string product;
        int quantity;

       const static string NONE;

        
    

	
};
#endif
