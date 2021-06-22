// The operators which operand on single operand (data) are called unary operator. 
// The unary operators in C++ are either prefix or postfix with the operand.

#include<iostream>
using namespace std;

class Counter{
    private:
        unsigned int count;
    public:
        Counter(){
            count=0;
        }
        int get_count(){
            return count;
        }
        void operator ++(int){ 
            count++;
            }
        void operator ++(){ 
            count++;
            }
};
int main(){
    Counter c1, c2;
    cout<<"\nc1= "<<c1.get_count();
    cout<<"\nc2= "<<c2.get_count();
    c1++;
    c2++;
    ++c2;
    cout<<"\nc1= "<<c1.get_count();
    cout<<"\nc2= "<<c2.get_count();
    return 0;
}