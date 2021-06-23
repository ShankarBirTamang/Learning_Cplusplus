//Example of overloading < , > and = operator

#include<iostream>
#include<math.h>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        void getComplex(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter Imaginary part: ";
            cin>>img;
        }
        void display(){
            if (img<0)
             cout<<"\n("<<real<<" -j "<<(-1)*img<<")"<<endl;
            else
             cout<<"\n("<<real<<" +j "<<img<<")"<<endl;
        }
        //overloading < operator
        float operator <(complex c){
            float mag1 = sqrt(real*real+img*img);
            float mag2 = sqrt(c.real*c.real+c.img*c.img);
            return (mag1<mag2)?true:false;
        }
        //overloading > operator
        float operator >(complex c){
            float mag1 = sqrt(real*real+img*img);
            float mag2 = sqrt(c.real*c.real+c.img*c.img);
            return (mag1>mag2)?true:false;
        }
        //overloading = operator
        float operator =(complex c){
            float mag1 = sqrt(real*real+img*img);
            float mag2 = sqrt(c.real*c.real+c.img*c.img);
            return (mag1==mag2)?true:false;
        }

};
int main(){
    complex c1,c2;
    c1.getComplex();
    c2.getComplex();
    cout<<"First Complex number: ";
    c1.display();
    cout<<"Second Complex number: ";
    c2.display();
    //Testing < , > and = operator
    if (c1<c2)
        cout<<"First complex number is smaller."<<endl;
    else if(c1>c2)
        cout<<"First complex number is greater."<<endl;
    else if(c1=c2)
        cout<<"Both complex number are equal."<<endl;

    return 0;
}