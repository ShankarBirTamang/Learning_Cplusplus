/*
Write a program with three classes students, test and result by using multilevel inheritance. Assume necessary datamembers and functions 
yourself and program with input information , input data and calculate marks total and display result.
*/
#include<iostream>
using namespace std;

//base class
class students
{           
    private:
        char name[30];
        int roll_no;
    public:
        void read(){
            cout<<"What is your Name ? ";
            cin>>name;
            cout<<"What is your college Roll number ? " ;
            cin>>roll_no;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No.: "<<roll_no<<endl;
        }
};

//publicly derived class
class test:public students            
{   
    protected:
        int oop, logic , EDC;
    public:
        void read(){
            students::read();
            cout<<"\nEnter marks of :"<<endl;
            cout<<"OOP: ";
            cin>>oop;
            cout<<"Digital Logic: ";
            cin>>logic;
            cout<<"Electronic Device: ";
            cin>>EDC;
        }
        void display(){
            students::display();
            cout<<"\nMarks obtained in:"<<endl;
            cout<<"*******************"<<endl;
            cout<<"oop: "<<oop<<endl;
            cout<<"Digital Logic: "<<logic<<endl;
            cout<<"Electronic Device:"<<EDC<<endl;
        }
};
//publicly derived class
class result:public test            
{   
    float percent;
    public:
        void read(){
            test::read();
        }
        void calculate(){
            percent = ((oop+logic+EDC)*100/240);
        }
        void display(){
            test::display();
            cout<<"\nPercentage: "<<percent<<"%"<<endl;
        }
};

//main function
int main(){
   result r;
   r.read();
   r.calculate();
   cout<<"\n\nShowing Information of students: "<<endl;
   r.display();

    return 0;
}