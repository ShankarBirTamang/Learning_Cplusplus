//Destuctor in single inheritance
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


//publicly derived class
class Derived:public Base
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