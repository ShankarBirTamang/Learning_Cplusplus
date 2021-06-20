/*Explain function overloading with Example.
-->  C++ enables several functions of the same name to be defined, as long as these functions have different set of 
parameters. This capability is called function overloading. It is commonly used to create several functions of the same
name that performs similar tasks, but on different data types.
Ambiguity in function overloading:
1. The compiler first tries to find an exact match in which types of actual arguments are same, and use that function.
2. If an exact match is not found, compiler uses integral promotions to the actual arguments, such as char to int.
3. When either of them fails, compiler tries to use builtin conversions to the actual arguments.
*/

#include<iostream>
using namespace std;

int area(int b , int h){
    return(0.5*b*h);
}
int area(int r){
    return(3.14*r*r);
}
float area(float l, float br){
    return(l*br);
}
int main(){
    int b, h, r;
    float l, br;
    cout<<"Enter breath and height: "<<endl;
    cin>>b>>h;
    cout<<"Area of triangle is: "<<area(b,h)<<endl;

    cout<<"Enter radius: "<<endl;
    cin>>r;
    cout<<"Area of circle is : "<<area(r)<<endl;

    cout<<"Enter length and breath: "<<endl;
    cin>>l>>br;
    cout<<"Area of rectangle is : "<<area(l,br)<<endl;

}