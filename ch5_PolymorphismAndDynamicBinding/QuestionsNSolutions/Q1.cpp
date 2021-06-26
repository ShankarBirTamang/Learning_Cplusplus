/*
Write a program having student as an abstract class and create derived class such as Engineering , Science and Medical . 
Show the  use of virtual functions in this program.
*/
#include<iostream>
using namespace std;

//base class
class Student
{           
    public : 
    virtual void show() = 0; // pure virtual function
};

//publicly derived class
class Engineering:public Student           
{   
 public:
    void show(){
        cout<<"I am in Engineering Class"<<endl;
    }
};
//publicly derived class
class Science:public Student           
{   
 public:
    void show(){
        cout<<"I am in Science Class"<<endl;
    }
};

//publicly derived class
class Medical:public Student           
{   
 public:
    void show(){
        cout<<"I am in Medical Class"<<endl;
    }
};

//main function
int main(){
    Student *stdptr;    //pointer to base class
    Engineering eng;
    Science sc;
    Medical med;
        
    stdptr = &eng; //address of engineering in pointer
    stdptr->show();

    stdptr = &sc;   //address of science in pointer
    stdptr->show();

    stdptr = &med;  //address of medical in pointer
    stdptr->show();

    return 0;
}