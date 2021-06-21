//Program to use static data member in a class to count the number of times , a public member function is called.

#include<iostream>
using namespace std;

class Book{
    private:
        int id;
        static int count;
        char name[20];
    public:
        void readData(){
            cout<<"Enter id: "<<endl;
            cin>>id;
            cout<<"Enter book's name: "<<endl;
            cin>>name;
            count++;
        }
        void showData(){
            cout<<id<<"\t"<<name<<endl;
        }
        static void showCount(){
            cout<<"The number of object that called readData function : "<<count<<endl;
        }
};
int Book::count;            //definition of static data member

int main(){
    Book b1, b2, b3;
    b1.readData();
    b1.showCount();
    b2.readData();
    b2.showCount();
    b3.readData();
    b3.showCount();

    cout<<endl<<"ID"<<"\t"<<"Name"<<endl;
    cout<<"--------------------"<<endl;
    b1.showData();
    b2.showData();
    b3.showData();
    return 0;
}