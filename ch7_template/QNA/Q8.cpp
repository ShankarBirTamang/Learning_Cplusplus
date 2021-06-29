/* write a program using template to add two numbers. use the function template to pass integer , float and double. Display the returned result.*/

#include<iostream>
using namespace std;

template<class T1, class T2>
T1 testfunc(T1 a, T2 b){
    return a+b;
}

int main(){
    int inum1=4 , inum2 = 5;
    float fnum1 = 4.5 , fnum2 = 5.5;
    double dnum1 = 34.33 , dnum2 = 3.33;

    cout<<"The integer sum is: "<<testfunc(inum1,inum2)<<endl;
    cout<<"The float sum is: "<<testfunc(fnum1,fnum2)<<endl;
    cout<<"The double sum is: "<<testfunc(dnum1,dnum2)<<endl;

    return 0;
}