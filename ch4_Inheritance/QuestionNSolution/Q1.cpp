/*
    WAP to create classes to represent student , teaching staffs and non-teaching staffs from the base class person. 
    Use proper members in the classes to make your program meaningful.
*/
#include<iostream>
using namespace std;
const int size=25;

//base class
class person
{           
    protected:
        char name[size];
        char address[size];
        long int contact_no;
    public:
        void read(){
            cout<<"Name: ";
            cin>>name;
            cout<<"Contact number: ";
            cin>>contact_no;
            cout<<"Adress: ";
            cin>>address;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Contact Number : "<<contact_no<<endl;
            cout<<"Address: "<<address<<endl;
        }
};

//publicly derived class
class students:public person            
{   
    
        long int roll_no;
    public:
        void read(){
            cout<<"\nEnter Students Details: "<<endl;
            person::read();
            cout<<"Enter roll no: ";
            cin>>roll_no;
        }
        void display(){
            cout<<"\nStudent Information: "<<endl;
            person::display();
            cout<<"Roll no: "<<roll_no<<endl;
        }
};
//publicly derived class
class teaching_staff:public person            
{   
    char depart[size];
    char design[size];
    public:
        void read(){
            person::read();
            cout<<"Enter Department: ";
            cin>>depart;
            cout<<"Enter Designation: ";
            cin>>design;
        }
        void display(){
            person::display();
            cout<<"Department : "<<depart<<endl;
            cout<<"Designation: "<<design<<endl;
        }
};
//publicly derived class
class non_teaching_staff:public person            
{   
    char post[size];
    public:
        void read(){
            person::read();
            cout<<"Enter post: ";
            cin>>post;
        }
        void display(){
            person::display();
            cout<<"Post : "<<post<<endl;
        }
};

//main function
int main(){
    students s1;
    s1.read();
    s1.display();

    teaching_staff t1;
    cout<<"\nEnter teaching staff details: "<<endl;
    t1.read();
    cout<<"\nTeaching staffs information: "<<endl;
    t1.display();

    non_teaching_staff nt1;
    cout<<"\nEnter non-teaching staff details: "<<endl;
    nt1.read();
    cout<<"\nNon-Teaching staffs information: "<<endl;
    nt1.display();
    
    return 0;
}