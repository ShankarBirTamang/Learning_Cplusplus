/* If the base class parameter is still useful in derived class, the derived class is created as class template i.e base and 
derived template class have same template parameter.
*/
#include<iostream>
using namespace std;

template <class T>
class Base{
    T data;
    public: 
        Base(){}
        Base(T a){ data = a; }
        void show(){
            cout<<"data: "<<data<<endl;
        }
};
template <class T>
class derived: public Base<T>
{
    public:
        derived(){}
        derived(T a):Base<T>(a){}
};
int main(){
    derived<int> obj(5);
    obj.show();
    return 0;
}