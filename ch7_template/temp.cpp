#include<iostream>
using namespace std;

template<class T>
class base{
    T data;
    public:
        base(){}
        base(T a){
            data = a;
        }
        void show(){
            cout<<"Data: "<<data<<endl;
        }
};

class Derived:public base<int>
{
    public:
        Derived(){}
        Derived(int a):base<int>(a){}

};

int main(){
    Derived obj(6);
    obj.show();
    return 0;
}