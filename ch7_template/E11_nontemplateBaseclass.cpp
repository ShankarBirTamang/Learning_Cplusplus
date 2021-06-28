// We can also add extra template parameter in the derived class along with the base class template parameter.

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
    T data;
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