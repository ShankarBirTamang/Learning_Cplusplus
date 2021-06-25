//Destuctor in multiple inheritance
#include<iostream>
using namespace std;

//base class
class Base
{     
    public:
      Base(){
            cout<<"Base class constructor."<<endl; 
      }              
      ~Base(){
            cout<<"Base class destructor."<<endl; 
      }              
};

//base class
class Base1
{     
    public:
      Base1(){
            cout<<"Base1 class constructor."<<endl; 
      }              
      ~Base1(){
            cout<<"Base1 class destructor."<<endl; 
      }              
};


//publicly derived class
class Derived:public Base,public Base1
{    public:
      Derived(){
            cout<<"Derived class constructor."<<endl; 
      }      
      ~Derived(){
            cout<<"Derived class destructor."<<endl; 
      }      
    
};

//main function
int main(){
   Derived obj;

    return 0;
}