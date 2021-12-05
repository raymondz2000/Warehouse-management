#include "Location.h"
#include <sstream>
#include <iostream>
#include <string>
 
using namespace std;
//ctr
const string NONE = "Empty";
Location::Location(const char &character_code, const int &id){
    stringstream ss;
    
    ss << character_code<<id;
     this->id =ss.str();
     this->product=NONE;
     this->quantity=0;
}
Location::~Location(){
  
}
//getter
string Location::get_id(){return this->id;}
string Location::get_product(){return this->product;}
int Location::getQuantity(){return this->quantity;}

//visual



//class function

bool Location::isEmpty(){
    return (quantity ==0)? true:false;
}
bool Location::isAvaliable(){
    return (product == this->NONE)? true:false;
}
void Location::print(){
    cout<<"Location ID:"<<id<<",product: "<<product<<" with quantity: "<<quantity<<endl;
}
 