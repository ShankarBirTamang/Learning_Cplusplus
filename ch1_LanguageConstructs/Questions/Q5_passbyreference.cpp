/*
We learned about passing arguments to a function. 
This method used is called passing by value because the actual value is passed.
However, there is another way of passing arguments to a function where the actual values of arguments are not passed. 
Instead, the reference to values is passed. This method is called pass by reference. 


In this program, we passed the variables a and b to the swap() function.
*/

#include<iostream>
using namespace std;

void swap(int &n1, int &n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;

    cout<<"Before swapping!"<<endl;
    cout<<"Value of a="<<a<<" and b="<<b<<endl;

    swap(a,b);
    cout<<"After swapping!"<<endl;
    cout<<"Value of a="<<a<<" and b="<<b<<endl;

    return 0 ;
}