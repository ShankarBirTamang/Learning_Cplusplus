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
class Derived:public Base<int> {
    T data;
    public:
        Derived(){}
        Derived(int a, T b):Base<int>(a),data(b){}
        void show(){
            Base::show();
            cout<<"In Derived , Data: "<<data<<endl;
        }
};
int main(){
    Derived<float> obj(5,3.43);
    obj.show();
    return 0;
}