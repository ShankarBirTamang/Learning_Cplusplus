#include<iostream>
using namespace std;

class A{
    public:
        void show(){
            cout<<"Class A"<<endl;
        }
};

class B{
    public:
        void show(){
            cout<<"Class B"<<endl;
        }
};
class C:public A, public B{};

int main(){
    C objC; 
    objC.A::show();
    objC.B::show();
    return 0;
}