#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
        friend istream &operator>>(istream & ,complex & );
        friend ostream &operator<<(ostream & , complex &);
};
istream &operator>>(istream &input, complex &c){
    cout<<"Enter the real part: ";
    input>>c.real;
    cout<<"Enter the imaginary part: ";
    input>>c.img;
return input;
}
ostream &operator<<(ostream &output, complex &c){
    output<<c.real<<" +i "<<c.img<<endl;
    return output;
}

int main(){
    complex c1;
    cin>>c1;
    cout<<"\n The complex number is : ";
    cout<<c1;
    return 0;
}