#include "WHLocation.h"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

//initialize static variables
int WHLocation::nextId = 1;
const char WHLocation::code ='B';
const int WHLocation::capacity = WHLOC_CAPACITY;

WHLocation::WHLocation():Location(code,nextId++){
  
}
WHLocation::~WHLocation(){
  
}
void WHLocation::print(){
    cout<<"WHLocation ID:"<<id<<",product: "<<product<<" with quantity: "<<quantity<<endl;
    //Location::print();
}
 
int WHLocation:: getCapacity(){
    return capacity;
};
bool WHLocation:: add(string product_name,int product_quantity) {
 
    if (!(Location::isAvaliable())) {
        return false;
    }
    product = product_name;
    if (quantity +  product_quantity > capacity){
        return false;
    }
    this->quantity +=  product_quantity;
    return true;
}
    



bool WHLocation::remove(int rem_amount){

    if (rem_amount <= quantity){
        quantity -= rem_amount;
        if (quantity == 0){
            product = NONE;
        }
        return true;
    }else{
        return false;
    }
     
    // if(rem_amount>quantity){
    //     return false;
    // }
        
    // if((quantity - rem_amount)==0){
    //         product = NONE;
    //         quantity-=rem_amount;
    //         return true;
    // }else{
    //         quantity -= rem_amount;
    //         return true;
    // }
        
    // return false;

   
}
