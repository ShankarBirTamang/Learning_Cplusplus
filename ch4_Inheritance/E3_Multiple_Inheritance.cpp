#include<iostream>
using namespace std;

//base class
class Students
{           
    protected:
        int rno, m1 ,m2;
    public:
                 
        void read(){
            cout<<"Enter roll no of Students: ";
            cin>>rno;
            cout<<"Enter two marks: ";
            cin>>m1>>m2;
        }   
};

class Sports
{           
    protected:
        int sm;     //sm=sports marks
    public:
        void readsm(){
            cout<<"Enter sports marks: ";
            cin>>sm;
        }
};

//publicly derived class
class Statements:public Students, public Sports           
{   
        int tot, avg;
    public:
        void show(){
            tot = (m1+m2+sm);
            avg = tot/3;
            cout<<"\n\n\tRoll No: "<<rno<<endl;
            cout<<"\tTotal marks: "<<tot<<endl;
            cout<<"\tAverage marks: "<<avg<<endl;
        }
};

//main function
int main(){
   Statements obj;
   obj.read();
   obj.readsm();
   obj.show();
    return 0;
}