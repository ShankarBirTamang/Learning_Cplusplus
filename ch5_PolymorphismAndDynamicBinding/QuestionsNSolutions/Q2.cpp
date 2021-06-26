/*
Create a derived class manager from two base class 's person and employee. 
Assume suitable data members in each class and display the information.
*/
#include<iostream>
using namespace std;

//base class
class Person
{           
    protected:
        char name[40];
        int age;
    public:
        void read(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

//base class
class Employee
{           
    protected:
        int emp_id;
        char position[40];
        int salary;
    public:
        void read(){
            cout<<"Enter employee ID: ";
            cin>>emp_id;
            cout<<"Enter position: ";
            cin>>position;
            cout<<"Enter salary: ";
            cin>>salary;
        }
        void display(){
            cout<<"Employee ID: "<<emp_id<<endl;
            cout<<"Position: "<<position<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

//publicly derived class
class manager:public Person, public Employee            
{   
    protected:
        char m_name[40];
    public:
        void read(){
            cout<<"Enter name of transaction manager: ";
            cin>>m_name;
        }
        void display(){
            cout<<"Transaction manager name: "<<m_name<<endl;
        }
};

//main function
int main(){
   manager m;
   m.Person::read();
    m.Employee::read();
    m.read();
    cout<<"\nShowing Information"<<endl;
    cout<<"*********************"<<endl;
    m.Person::display();
    m.Employee::display();
    m.display();
    return 0;
}