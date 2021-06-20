/*
A constructor is a special member function which is called automatically during the object creation. So the constructor 
can be used for the necessary initialization of data members. The constructor is identified as a function whose name is 
same as its class.
Syntax:
class className{
    ...                             //private members
    public :
        className();               //constructor prototype
};
className::className(){             //constructor definition
                                    //constructor body definition
}
*/
#include<iostream>
using namespace std;

class code{
    int id;
    public:
        code(){}        //Default Constructor
        code(int a){ id=a; }        //Parameterized Constructor
        code(code &x){  id=x.id; }  //Copy Constructor

        void display(){
            cout<<id<<endl;
        }
};
int main(){
    code A(100); //object A is created and initialized
    code B(A);      // copy constructor called
    code C=A;       // copy constructor called again
    code D;         //D is created not initialized
    D=A;            // copy constructor not called

    cout<<"id of A: ";
    A.display();

    cout<<"id of B: ";
    B.display();

    cout<<"id of C: ";
    C.display();

    cout<<"id of D: ";
    D.display();

return 0;
}