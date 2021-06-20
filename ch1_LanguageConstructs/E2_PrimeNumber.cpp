#include<iostream>
using namespace std;

int main(){
    int no, count=0;
    cout<<"Enter a number :"<<endl;
    cin>>no;
    for (int i=1;i<=no;i++){
        if (no%i==0)
        {
            count++;
        }
    }
    if(count==2)
        cout<<"The number "<<no<<" is prime. "<<endl;
    else
        cout<<"The number "<<no<<" is not prime."<<endl;
    
    return 0;
}