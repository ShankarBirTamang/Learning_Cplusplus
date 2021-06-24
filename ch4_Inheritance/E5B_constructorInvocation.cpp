// Construtor invocation using derived class only
#include<iostream>
using namespace std;

//base class
class Base
{           
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