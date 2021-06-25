/* Write a program to show the exception order of constructor and destructor in multilevel inheritance.
Show your program output.
*/

#include<iostream>
using namespace std;

//base class
class Book
{           
    protected:
        int number;
        double price;
    public:
        Book(int n,double p){
            number = n;
            price = p;
        }
        ~Book(){
            cout<<"Base class Destructor."<<endl;
        }
};

//publicly derived class
class Subclass:public Book            
{   
    protected:
        int pages;
    public:
    Subclass(int n , double p , int pag):Book(n,p)
    {
            pages = pag;
    }
    ~Subclass(){
        cout<<"Subclass Destructor"<<endl;
    }
};
//publicly derived class
class SubSubclass:public Subclass            
{   
    protected:
        double discount;
    public:
        SubSubclass(int n , double p , int pag , double d):Subclass(n,p,pag){
            discount = d;
        }
        ~SubSubclass(){
            cout<<"SubSubclass destructor. "<<endl;
        }
        void display(){
            cout<<"\nNumber: "<<number<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Pages: "<<pages<<endl;
            cout<<"Discount: "<<discount<<endl;
        }
};

//main function
int main(){
    SubSubclass obj(1,140.0, 64,0.5);
    obj.display();
    return 0;
}