/* If we donot add extra template parameter and supply the template argument of base class with the data type , we create a non-template
derived class as:
*/

#include<iostream>
using namespace std;

template<class T>
class base{
    T data;
    public:
        base(){}
        base(T a){ data = a; }
        void display(){
            cout<<"Data: "<<data<<endl;
        }
};
class derived1:public base<int>     //non-template derived class
{
    public:
        derived1(){}
        derived1(int a):base<int>(a){}
};
int main(){
    derived1 obj1(5);
    obj1.display();
    return 0;
}


