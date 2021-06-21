/*
A friend function is a special type of function in C++ which is not the member of any classes and that allow us to have
access to the private data of those classes. It's a non member function that grants access to class's private members.

In normal case , private data members of a class can't be accessed from outside the class. 
However when two classes need to share a particular function then friend functions can be used. These are the 
functions that can be made friendly with both classes , thus allowing these functions to have an access to the private
data of these classes.*/

#include<iostream>
using namespace std;

class second;   //forward declaration
class first{
    int data1;
    public:
        first(int x){ data1=x;}
         void showdata(){
            cout<<"Data1: "<<data1<<endl;
        }
        friend int sum(first, second);
};
class second{
    int data2;
    public:
        second(int x){data2=x;}
        friend int sum(first, second);
        void showdata(){
            cout<<"Data2: "<<data2<<endl;
        }
};

int sum(first a, second b){
    return(a.data1+b.data2);
}
int main(){

    first f(5);
    f.showdata();

    second s(2);
    s.showdata();
    
    cout<<"Sum of Data1 and Data2: "<<sum(f,s)<<endl;
    return 0;
}
