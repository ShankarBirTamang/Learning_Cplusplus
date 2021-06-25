/*
when we have a number of obects of different classes and if we want to put them all on a list and perform a particular operation on
them using same function call . Then it is better to use virtual function. Example :
*/
#include<iostream>
using namespace std;

//base class
class CPolygon
{           
    protected:
        int width , height;
    public:
        void setValues(int w, int h){
                width = w;
                height = h;
        }
        virtual int area(){
            return (0);
        }
};

//publicly derived class
class CRectangle:public CPolygon            
{   
    protected:

    public:
        int area(){
            return (width*height);
        }
};

//publicly derived class
class Ctriangle:public CPolygon            
{   
    protected:

    public:
        int area(){
            return (width*height/2);
        }
};


//main function
int main(){
    CRectangle rect;
    Ctriangle trgl;
    CPolygon poly;
    CPolygon *ppoly;

    ppoly = &rect;
    ppoly->setValues(4,5);
    cout<<ppoly->area()<<endl;

    ppoly = &trgl;
    ppoly->setValues(4,5);
    cout<<ppoly->area()<<endl;

    ppoly = &poly;
    ppoly->setValues(4,5);
    cout<<ppoly->area() <<endl;
    return 0;
}