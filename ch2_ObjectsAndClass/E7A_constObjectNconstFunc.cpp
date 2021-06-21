//Constant object can only call constant function. Demo program:

#include<iostream>
using namespace std;

class Demo{
    private:
        int value;
    public:
        Demo(int v=0){value=v;}
        void showMessage(){
            cout<<"I am in non-constant showmessage() Function with value: "<<value<<endl;
        }
        void  displayMessage() const{
            cout<<"I am in constant displayMessage() function with value: "<<value<<endl;
        }
};

int main(){
    Demo d1(5);        //Non-constant object
    const Demo d; //Constant object are initialised at the time of declaration using constructor
    d1.showMessage();    //Non-constant object can call constant function but const object cannot
   // d.showMessage(); //Error occurs if uncomment
    d.displayMessage(); //constant object calling constant function 
    return 0;
}
/*
Like member functions and member function arguments, the objects of a class can also be declared as const. 
an object declared as const cannot be modified and hence, can invoke only const member functions as these functions 
ensure not to modify the object. 
A const object can be created by prefixing the const keyword to the object declaration. 
Any attempt to change the data member of const objects results in a compile-time error. 
Syntax: 
const Class_Name Object_name; 
    When a function is declared as const, it can be called on any type of object, const object as well as 
non-const objects.

Whenever an object is declared as const, it needs to be initialized at the time of declaration. 
however, the object initialization while declaring is possible only with the help of constructors.

A function becomes const when the const keyword is used in the function’s declaration. 

The idea of const functions is not to allow them to modify the object on which they are called. 
    It is recommended the practice to make as many functions const as possible so that accidental changes 
to objects are avoided.
*/