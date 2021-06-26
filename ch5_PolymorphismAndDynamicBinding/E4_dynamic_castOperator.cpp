/*

*/
#include<iostream>
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
   Base *b;
   myclass m , *mp;
   yourclass y;

   b = &m;
    if(mp = dynamic_cast<myclass*>(b))
        cout<<"Of type myclass"<<endl;
    else
        cout<<"Not of type myclass"<<endl;

    b = &y;
    if(mp = dynamic_cast<myclass*>(b))
        cout<<"Of type my class"<<endl;
    else 
        cout<<"Not of type my class"<<endl;
    return 0;
}