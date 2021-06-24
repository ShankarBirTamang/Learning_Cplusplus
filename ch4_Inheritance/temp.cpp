#include<iostream>
using namespace std;

//base class
class Bas
{           
    protected:

    public:
        Bas(){}           //default constructor
        void read();
        void display();
};

//publicly derived class
class D:public Bas            
{   
    protected:

    public:
        void read();
        void display();
};

//main function
int main(){
   

    return 0;
}