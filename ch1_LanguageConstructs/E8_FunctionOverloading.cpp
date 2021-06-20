/*  C++ enables several functions of the same name to be defined, as long as these functions have different set of 
parameters. This capability is called function overloading. It is commonly used to create several functions of the same
name that performs similar tasks, but on different data types.

*/
#include<iostream>
using namespace std;

int simple_interest(int p=100, int t=2, int r=10){
    return ((p*t*r)/100);
}

int main(){
    int principal, time , rate;
    cout<<"Default simple interest is : "<<simple_interest()<<endl;

    cout<<"Enter principal: "<<endl;
    cin>>principal;
    cout<<"One argument simple interest is : "<<simple_interest(principal)<<endl;

    cout<<"Enter principal and time: "<<endl;
    cin>>principal>>time;
    cout<<"Two argument simple interest is: "<<simple_interest(principal,time)<<endl;

    cout<<"Enter principal, time and rate : "<<endl;
    cin>>principal>>time>>rate;
    cout<<"Three argument simple interest is : "<<simple_interest(principal,time,rate)<<endl;
    return 0;
}