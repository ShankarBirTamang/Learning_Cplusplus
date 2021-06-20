/*Reference variables behaves similar to both value variable and pointer variable. As a return by reference returns 
the alias of the variable so the function call can be place a left side of the assignment operator(=).*/

#include<iostream>
using namespace std;
int &max(int &,int &);

int main(){
    int a,b;
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
    max(a,b)=-1;
    cout<<"The values are "<<a<<" and "<<b;
    return 0;
}

int &max(int &x,int &y){
    if(x>y)
        return x;
    else
        return y;
}