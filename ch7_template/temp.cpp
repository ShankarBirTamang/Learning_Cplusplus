//Derived class template
#include<iostream>
using namespace std;

template <class T>
class Base{
    T data;
    public:
        Base(){}
        Base(T a){ data = a; }
        void show(){
            cout<<"In base , Data: "<<data<<endl;
        }
};
template <class T>
class Derived:public Base<T>
{
    public:
        Derived(){}
        Derived(T a):Base<T>(a){}

};
int main(){
    Derived<float> obj(7);
    obj.show();
    return 0;
}