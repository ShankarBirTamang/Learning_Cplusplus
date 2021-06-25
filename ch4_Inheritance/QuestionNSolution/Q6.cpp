//WAP to show the invocation order of Constructor and Destuctor in multilevel inheritance
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
//publicly derived class
class DDDerived:public Derived
{    public:
      DDDerived(){
            cout<<"DDDerived class constructor."<<endl; 
      }      
      ~DDDerived(){
            cout<<"DDDerived class destructor."<<endl; 
      }      
    
};

//main function
int main(){
   DDDerived obj;

    return 0;
}