#include<iostream>
using namespace std;

//base class
class A
{           
    public:
      //  A(){}           //default constructor
       
        void display(){
            cout<<"class A"<<endl; 
            }
};

//publicly derived class
class B:public A            
{   
    public:  
        void display()
        {
             cout<<"class B"<<endl; 
        }
};
//publicly derived class
class C:public B
{   
    public:
       
        void display(){
             cout<<"class C"<<endl; 
        }
};

//main function
int main(){
    C obj;
    obj.display();
    obj.B::display();
    obj.A::display();

    return 0;
}