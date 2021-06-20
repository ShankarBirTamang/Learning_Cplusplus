// 'this'is a c++ keyword. 'this' always refers to an object that has called the member function currently.
//'this' is pointer . It points to the object that has called this function this time.

#include<iostream>
using namespace std;

class test{
    private:
        int x;
    public:
        test(int value){
            x=value;
        }
        void print();
};
void test::print(){
    cout<<"x == "<<x<<endl;
    cout<<"this = "<<this<<endl;
    cout<<"(*this).x = "<<(*this).x<<endl;
    cout<<"this->x = "<<this-x<<endl;
}
int main(){
    test t(12);
    t.print();
    return 0;
}