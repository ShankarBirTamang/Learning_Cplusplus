//The derived class template can be created from the base class which is not a class template. In this case , a template parameter is 
//added in the derived class during inheritance.

#include<iostream>
using namespace std;

class Base{
    int data;
    public:
        Base(){}
        Base(int a){ data=a; }
        void show(){
            cout<<"In Base, Data: "<<data<<endl;
        }
};

template <class T>
class derived:public Base{
    T data;3
    public:
        derived(){}
        derived(int a, T b):Base(a),data(b){}
       
            void show(){
            Base::show();
                cout<<"In Derived, Data: "<<data<<endl;
            }
        
};

int main(){
    derived<float> obj(10,23.33);
    obj.show();
}