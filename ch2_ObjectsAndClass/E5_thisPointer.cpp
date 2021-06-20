/*Every object in C++ has access to its own address through an important pointer called this pointer. 
The this pointer is an implicit parameter to all member functions. 
Therefore, inside a member function, this may be used to refer to the invoking object.

Friend functions do not have a this pointer, because friends are not members of a class. 
Only member functions have a this pointer.
*/
#include<iostream>
using namespace std;

class Box{
    private:
    double length , breath , height;

    public:
    //Constructor definition
    Box(double l, double b , double h){
        cout<<"Constructor called."<<endl;
        length = l;
        breath = b;
        height = h;
    }
    double volume(){
        return length*breath*height;
    }
    double compare(Box box){
        return this->volume()>box.volume();
    }
};

int main(){
    double l1,l2,b1,b2,h1,h2;
    cout<<"Enter length , breath and height of box1: "<<endl;
    cin>>l1>>b1>>h1;
    cout<<"Enter length , breath and height of box2: "<<endl;
    cin>>l2>>b2>>h2;
    Box box1(l1,b1,h1);        //Declare box
    Box box2(l2,b2,h2);        //Declare box

    if(box1.compare(box2))
        cout<<"box1 is larger than box2.";
    else
        cout<<"box1 is equal to or smaller than box2.";

    return 0;
}