#include<iostream>
using namespace std;

//base class
class B
{           
    protected:
        int x;
        int y;
    public:
        B(){}           //default constructor
        void read(){
            cout<<"X in class B ? ";
            cin>>x;
            cout<<"Y in class B ? ";
            cin>>y;
        }
        void show(){
            cout<<"X in class B : "<<x<<endl;
            cout<<"y in class B : "<<y<<endl;
        }
};

//publicly derived class
class D:public B            
{   
    protected:
        int y ,z;
    public:
        void read(){
            B::read();
            cout<<"Y in class D ?";
            cin>>y;
            cout<<"Z in class D ?";
            cin>>z;
        }
        void show(){
            B::show();
            cout<<"y in class D : "<<y<<endl;
            cout<<"z in class D : "<<z<<endl;
            cout<<"y of B shown from D: "<<B::y;    //refers to y of class B
        }
};

//main function
int main(){
    D objD;
    cout<<"Enter data for object of class D: "<<endl;
    objD.read();
    cout<<"Contents of object of class D: "<<endl;
    objD.show();

    return 0;
}