//Adding two complex numbers by passing two objects of the class as arguments .

#include<iostream>
using namespace std;

class Complex{
    private:
        int real , imj;
    public:
        void GetComplex();
        void Display();
        void AddComplex(Complex,Complex);
};

void Complex::GetComplex(){
    cout<<"Real Part: ";
    cin>>real;
    cout<<"Imaginary Part: ";
    cin>>imj;
}
void Complex::Display(){
    cout<<"The sum is : \t";
    if(imj>0)
        cout<<"("<<real<<" +j "<<imj<<")";
    else
        cout<<"("<<real<<" -j "<<(-1)*imj<<")";
}
void Complex::AddComplex(Complex c1, Complex c2){
    real = c1.real +c2.real;
    imj = c1.imj + c2.imj;
}

int main(){
    Complex first, second, result;
    cout<<"Enter first Complex Number  "<<endl;
    first.GetComplex();
    cout<<"Enter second Complex Number "<<endl;
    second.GetComplex();
    result.AddComplex(first, second);           //Object first and second are passed as arguments
    result.Display();
    return 0;
}