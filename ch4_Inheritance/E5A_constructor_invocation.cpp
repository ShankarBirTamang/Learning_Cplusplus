// Construtor invocation using base class only
#include<iostream>
using namespace std;

//base class
class Base
{           
    public:
      Base(){
            cout<<"No argument constructor of base class is executed."<<endl; 
      }           //default constructor
};


//publicly derived class
class Derived:public Base
{   
    
};

//main function
int main(){
   Derived obj;

    return 0;
}