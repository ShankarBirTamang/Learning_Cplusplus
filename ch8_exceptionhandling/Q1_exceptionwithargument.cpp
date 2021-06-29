#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

class NEG
{
    public:
        double value;
        char description[20];
        NEG(){
            value =0;
            strcpy(description,"\0");
        }
        NEG(double v, char *desc){
            value = v;
            strcpy(description, desc);
        }
};

class Number
{
    double num;
    public:
        void readnum();
        double sqroot();
};
void Number::readnum(){
    cout<<"\nEnter number: "<<endl;
    cin>>num;
}
double Number::sqroot(){
    if(num<0)
        throw NEG(num,"Negative number !!!");
    else
        return sqrt(num);
}

int main(){
    Number n1;
    double res;
    n1.readnum();
    try{
        cout<<"\nTrying to find out square root...";
        res = n1.sqroot();
        cout<<"\nSquare root is: "<<res<<endl;
        cout<<"Success... Exception is not raised."<<endl;
    }
    catch(NEG n)
    {
        cout<<"\nException occured in square root of "<<n.value<<endl;
        cout<<"Error! "<<n.description<<endl;
    }
    return 0;
}