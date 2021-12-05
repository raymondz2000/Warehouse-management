
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
//product class 
#include "defs.h"
#include "Queue.h"
#include "StoreLocation.h"
#include "WHLocation.h"

using namespace std;

class Product {
		
	public:
		//constructor
		Product(const string& name, StoreLocation* sloc);
		
		//destructor
		~Product();
		
		//getters and setters
		const string& getName();
		StoreLocation* getStoreLocation();
		void setStoreLocation(StoreLocation*);
		void addWHLocation(WHLocation*);


		//these have been done for you
		void getFromStoreLocation(int& quantity);
		void getFromWHLocations(int& quantity);
		void fillOrder(int& quantity);
		void stockStoreLocation();
		void print();

	
	protected:
		string name;
		StoreLocation* storeLocation;
		Queue* whLocations;
		
	
};
#endif
