/*
Base class destructor should always be virtual. If the base class destructor is not virtual , then delete, like a normal
member function , calls the destructor for the base class , instead of calling the desturctor for derived class. 
This will cause only the base part of the object to be destroyed.
*/
#include<iostream>
using namespace std;

//base class
class Base
{           
    protected:

    public:
        ~Base()     //non-virtual function
       // virtual ~Base()     //virtual function
        {
            cout<<"Base Destroyed"<<endl;
        }
};

//publicly derived class
class Derived:public Base            
{   
    protected:

    public:
        ~Derived()
        {
            cout<<"Derived Class Destroyed."<<endl;
        }
};

//main function
int main(){
   Base* pBase = new Derived;
   delete pBase;
    return 0;
}