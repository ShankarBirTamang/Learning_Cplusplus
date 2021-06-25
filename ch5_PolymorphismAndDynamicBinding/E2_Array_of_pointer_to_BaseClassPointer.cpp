/*
The array of pointers to base class object is used to store the pointer to objects of different derived classes of that base class.
The common interface function in all the classes is declared as virtual in the base class and defined as a normal function in all other derived 
classes.
With virtual function in the base class , while accessing same member function through elements of base class pointer , pointing to different
objects, different function related to those objects are called. So the base class pointer responds to same message(function call) differently.

 Example :
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
        virtual int area(){         //defining common interface function as virtual functin
            return (0);
        }
};

//publicly derived class
class CRectangle:public CPolygon            
{   
    protected:

    public:
        int area(){             //normal function which is defined virtual in base class
            return (width*height);
        }
};

//publicly derived class
class Ctriangle:public CPolygon            
{   
    protected:

    public:
        int area(){               //normal function which is defined virtual in base class
            return (width*height/2);
        }
};


//main function
int main(){
    CRectangle rect;
    Ctriangle trgl;
    CPolygon poly;
    CPolygon *ppoly[]={&poly, &trgl, &rect};    //array of pointer to base class object , pointing to different objects of different class

   for(int j=0;j<3;j++)
    ppoly[j]->setValues(4,5);

    cout<<"Figure drawn by base pointer are: "<<endl;
    for(int j=0;j<3;j++)
        cout<<ppoly[j]->area()<<endl;

    
    return 0;
}