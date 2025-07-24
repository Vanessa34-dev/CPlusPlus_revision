#include<iostream>
#include<string>
int main(){
    /*constructor initialization */
    int price_car(200.22);//will compile and the resul is 200

    /*brace initialization (>c++11) */
   // int prices_car{200.22}; // wont compile


    /** ------declaration and initilization  of string ----------*/
    //first way
    const char* name="vanessa"; 
    std::cout << name <<std::endl;

    //second way
    std::string names="vanessa";
    std::cout << names;

}