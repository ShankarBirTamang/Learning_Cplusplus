// We can also add extra template parameter in the derived class along with the base class template parameter.

#include<iostream>
using namespace std;

template<class T>
class Base{
    T data;
    public:
        Base(){}
        Base(T a){ data=a; }
        void show(){
            cout<<"In Base, Data: "<<data<<endl;
        }
};

template <class T, class T2>
class derived:public Base<T>{
    T2 data;
    public:
        derived(){}
        derived(T a, T2 b):Base<T>(a),data(b){}
       
            void show(){
            Base<T>::show();
                cout<<"In Derived, Data: "<<data<<endl;
            }
        
};

int main(){
    derived<int,float> obj(10,23.33);
    obj.show();
}