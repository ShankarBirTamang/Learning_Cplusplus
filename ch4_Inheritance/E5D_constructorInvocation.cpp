// Construtor invocation using in multiple inheritance
#include<iostream>
using namespace std;

//base class
class Base1
{     
    public:
      Base1(){
            cout<<"No argument constructor of Base1 class is executed."<<endl; 
      }              
};

//base class
class Base2
{     
    public:
      Base2(){
            cout<<"No argument constructor of Base2 class is executed."<<endl; 
      }              
};


//publicly derived class
class Derived:public Base1, public Base2
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