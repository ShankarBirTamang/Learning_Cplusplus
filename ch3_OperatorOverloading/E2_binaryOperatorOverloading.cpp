/*The operator which operate on two operands (data) are called binary operators.
The binary operator function can be defined by either a non static member function taking one argument
or a non-member function (usually global function) taking two arguments.

Syntax:
    class class_name{
            public : return_type operator operator_symbol(class_name argument);
    };
    return_type class_name::operator operator_symbol(class_name argument)
    {
        //............
    }

The binary operator defined as a non-member function has the following form:

return_type class_name::operator operator_symbol (class_name obj1, class_name obj2){
    //................
}
*/
#include<iostream>
using namespace std;
class complex{
    private:
        float real; //real part of complex number
        float img;  //imaginary part of complex number
    public:
        complex(){
            real =0;
            img = 0;
        }
        complex(float r, float i){
            real = r;
            img = i;
        }
        complex operator +(complex); //Add complex

        void display(){
            if (img>0)
                cout<<real<<" +j "<<img<<endl;
            else
                cout<<real<<" -j "<<(-1)*img<<endl;
        }
};
// Adds default and complex object 'c'
complex complex::operator +(complex c){
    complex temp;
    temp.real= real+c.real;
    temp.img = img+c.img;
    return temp;
}
int main(){
    complex c1(2,-5),c2(3.3,2.3), c3;
    cout<<"First complex number: ";
    c1.display();
    cout<<"Second complex number: ";
    c2.display();
    c3 = c1 + c2;
    cout<<"Sum of two complex number: ";
    c3.display();
    return 0;
}