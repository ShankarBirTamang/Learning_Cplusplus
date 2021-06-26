/*

*/
#include<iostream>
#include<typeinfo>
using namespace std;

//base class
class Base
{           
    public : 
    virtual void fun(){}
};

//publicly derived class
class myclass:public Base           
{   
 
};
//publicly derived class
class yourclass:public Base           
{   
 
};

//main function
int main(){
    Base *b1;
    cout<<typeid(b1).name()<<endl;
    myclass m;
    b1 = &m;
    cout<<typeid(*b1).name()<<endl;
    
    Base *b2;
    yourclass y;
    b2 = &y;
    cout<<typeid(*b2).name()<<endl;

    if(typeid(*b1)==typeid(*b2))
        cout<<"Equal"<<endl;
    else 
        cout<<"Unequal"<<endl;

    cout<<"\n"<<typeid(4.5).name()<<endl;
    cout<<"\n"<<typeid(4).name()<<endl;
    cout<<"\n"<<typeid('4').name()<<endl;

   return 0;
}