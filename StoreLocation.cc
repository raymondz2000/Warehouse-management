#include "StoreLocation.h"

#include <sstream>
#include <iostream>
#include <string>
 
using namespace std;
//INITIALIZE VARIABLE
int StoreLocation::nextId = 1;
const char StoreLocation::code ='A';
const int StoreLocation::capacity = SLOC_CAPACITY;

StoreLocation::StoreLocation():Location(code,nextId++){
   
}
StoreLocation::~StoreLocation(){
  
}
void StoreLocation::print(){
    cout<<"StoreLocation ID:"<<id<<",product: "<<product<<" with quantity: "<<quantity<<endl;
    //Location::print();
}
void StoreLocation::setProduct(string prod){
    product = prod;
}
int StoreLocation:: getFreeSpace(){
    return (capacity - quantity);
}
 
int StoreLocation:: getCapacity(){
    return capacity;
};
bool StoreLocation:: add(string product_name,int product_quantity ) {
    
    if(Location::isAvaliable()){
        this->setProduct(product_name);
        //product = product_name;
    }else{
         if (product_name != product) return false;
    }
    if (quantity + product_quantity > capacity){
        return false;
    }
    quantity += product_quantity;
    return true;
     
}


bool StoreLocation::remove(int rem_amount){
    if(rem_amount>quantity){
        return false;
    }else{
        quantity -= rem_amount;
        return true;
    }
    return false;
}
