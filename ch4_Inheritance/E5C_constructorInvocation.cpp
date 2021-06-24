// Construtor invocation using both base class and derived class
#include<iostream>
using namespace std;

//base class
class Base
{     
    public:
      Base(){
            cout<<"No argument constructor of base class is executed."<<endl; 
      }              
};


//publicly derived class
class Derived:public Base
{    public:
      Derived(){
            cout<<"No argument constructor of derived class is executed."<<endl; 
      }      
    
};

//main function
int main(){
   Derived obj;

    return 0;
}