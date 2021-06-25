/*
    WAP with a class cricketer that has data members to represent name ,age and no of match played. Form this class cricketer 
    derive two class , bowler and batsman. The bowler class should have no of wickets as data members and the batsman class 
    should have no of runs and no of centuries as data members. Use appropriate member functions in all classes to make the 
    program meaningful.
*/
#include<iostream>
using namespace std;

//base class
class cricketer
{           
    protected:
        char name[30];
        int age;
        int no_of_match;
    public:
        void read(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter number of match played: ";
            cin>>no_of_match;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Number of match played: "<<no_of_match<<endl;
        }
};

//publicly derived class
class Bowler:public cricketer            
{   
    int no_of_wickets;
    public:
        void read(){
            cricketer::read();
            cout<<"how many wickets taken till now: ";
            cin>>no_of_wickets;
        }
        void display(){
            cricketer::display();
            cout<<"No of wickets: "<<no_of_wickets<<endl;
        }
};
//publicly derived class
class Batsman:public cricketer            
{   
    int no_of_runs;
    int no_of_centuries;
    public:
        void read(){
            cricketer::read();
            cout<<"How many number of runs till now ?";
            cin>>no_of_runs;
            cout<<"How many number of centuries till now ?";
            cin>>no_of_centuries;
        }
        void display(){
            cricketer::display();
            cout<<"Number of runs: "<<no_of_runs<<endl;
            cout<<"Number of centuries: "<<no_of_centuries<<endl;
        }
};

//main function
int main(){
    Bowler bow1;
    Batsman bat1;
    cout<<"\nEnter Bowler information: "<<endl;
    bow1.read();
    cout<<"\nShowing Bowler information: "<<endl;
    bow1.display();
    cout<<"\nEnter batsman information: "<<endl;
    bat1.read();
    cout<<"\nShowing batsman information: "<<endl;
    bat1.display();

    return 0;
}