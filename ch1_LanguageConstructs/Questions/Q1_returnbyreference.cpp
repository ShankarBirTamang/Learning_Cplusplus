/* write a program with function that take two arguments and reference and assign the average of two arguments to the 
smaller one and return that by reference . Call this function by assigning value to the function and display the value of 
both arguments and call this function without assigning the value and display the value of both arguments. What will be 
the output . */

#include<iostream>
using namespace std;
float &smaller(float &,float &);

int main(){
    float a , b;
    cout<<"Enter any two numbers : "<<endl;
    cin>>a>>b;
    smaller(a,b);
    cout<<"value of a and b without assigning the value: "<<a<<" and "<<b<<endl;
    float avg=(a+b)/2;
    smaller(a,b)=avg;
    cout<<"Value of a and b after assigning the value: "<<a<<" and "<<b<<endl;

    return 0;
}

float &smaller(float &a, float &b){
    if(a<b)
        return a;
    else
        return b;
}