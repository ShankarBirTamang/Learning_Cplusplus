/* Write a program to overload relational operator(==, != , >, < , >= , <=) to compare complex numbers.
*/
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        void getData(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>img;
        }
        void showData(){
            if(img<0)
                cout<<"("<<real<<" -j "<<(-1)*img<<")"<<endl;
            else
                cout<<"("<<real<<" +j "<<img<<")"<<endl;
        }
        float operator==(complex c){
            return (real==c.real||img==c.img)?true:false;
        }
        float operator!=(complex c){
            return (real!=c.real||img!=c.img)?true:false;
        }
        float operator>(complex c){
            return (real>c.real||img>c.img)?true:false;
        }
        float operator<(complex c){
            return (real<c.real||img<c.img)?true:false;
        }
        float operator<=(complex c){
            return (real<=c.real||img<=c.img)?true:false;
        }
        float operator>=(complex c){
            return (real>=c.real||img>=c.img)?true:false;
        }
};

int main(){
    complex c1 ,c2;
    cout<<"First complex number: "<<endl;
    c1.getData();
    cout<<"Second complex number: "<<endl;
    c2.getData();

    cout<<"First complex number: "<<endl;
    c1.showData();
    cout<<"Second complex number: "<<endl;
    c2.showData();

    if(c1==c2)
        cout<<"Both complex number are equal."<<endl;
    if(c1!=c2)
        cout<<"Two complex number are not equal."<<endl;
    if(c1>c2)
        cout<<"First complex number is greater."<<endl;
    if(c1<c2)
        cout<<"Second complex number is greater."<<endl;
    if(c1>=c2)
        cout<<"First complex number is greater and equal to second complex number."<<endl;
    if(c1<=c2)
        cout<<"Second complex number is greater and equal to first complex number."<<endl;

    return 0;
}