#include<iostream>
using namespace std;

class Complex{
    private:
        int a , b;
    public:
        void setComplex(int x, int y){
            a=x;
            b=y;
        }
        void showComplex(){
           if(b>0)
            cout<<a<<" +j "<<b<<endl;
            else
            cout<<a<<" -j "<<(-1)*b<<endl;
        }
        friend Complex sumComplex(Complex,Complex);
};

Complex sumComplex(Complex n1, Complex n2){
    Complex sum;
    sum.a = (n1.a+n2.a);
    sum.b = (n1.b+n2.b);
    return sum;
}

int main(){
    Complex c1,c2, sum;
    c1.setComplex(2,-3);
    c1.showComplex();
    c2.setComplex(4,2);
    c2.showComplex();

    sum=sumComplex(c1,c2);
    sum.showComplex();
    return 0;
}