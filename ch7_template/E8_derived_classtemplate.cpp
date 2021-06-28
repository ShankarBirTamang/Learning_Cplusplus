#include<iostream>
using namespace std;

template<class T>
class base{
    T data;
    public:
        base(){}
        base(T a){data = a;}
        void show(){
            cout<<"Data: "<<data<<endl;
        }
};

template<class T>
class Derived2:public base<int>
{
    T data;
    public:
        Derived2(){}
        Derived2(int a, T b):base<int>(a),data(b){}
        void display(){
            cout<<"In base, ";
            base<int>::show();
            cout<<"In derived , data : "<<data <<endl;
        }
};
int main(){
    Derived2<float> obj2(10,12.34);
    obj2.display();
    return 0;
}