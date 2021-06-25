/*
    WAP with two base class and a third class inherited from two base classes. Assume that both of the two base classes have two data
    members name and age. Add other suitable functions so that base classes are student and employee and the derived class is manager.
*/
#include<iostream>
using namespace std;

//base class
class students
{           
    protected:
        char name[10];
        int age;
        double aggr;
    public:
       
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"Aggregiate: "<<aggr<<endl;
        }
};
//base class
class employee
{           
    protected:
        char name[10];
        int age;
        double salary;
    public:
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

//publicly derived class
class manager:public students, public employee            
{   
    char company[20];
    public:
        void read(){
            cout<<"Enter Name: ";
            cin>>students::name;
            cout<<"Enter Age: ";
            cin>>students::age;
            cout<<"Enter Aggregiate: ";
            cin>>students::aggr;
            cout<<"Enter Salary: ";
            cin>>salary;
            cout<<"Enter Company Name: ";
            cin>>company;
        }
        void display(){
            cout<<"Salary: "<<salary<<endl;
            cout<<"Company Name: "<<company<<endl;
        }
};

//main function
int main(){
   manager m;
   m.read();
    cout<<"\nThe manager Record: "<<endl;
    m.students::display();
    m.display();
    return 0;
}