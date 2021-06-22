#include<iostream>
#define pi 3.14159
using namespace std;

class Degree{
    private :
        float deg;
    public:
        Degree(){
            deg =0;
        }
        Degree(float d){
            deg = d;
        }
        void input(){
            cout<<"Enter the value in degree: ";
            cin>>deg;
        }
        float getDegree(){
            return deg;
        }
};
class Radian{
    private: 
        float rad;
    public:
        Radian(){
            rad =0;
        }
        Radian(Degree degree){             //constructor function for data conversion
            rad = degree.getDegree() * pi/180.0;
        }
        float getRadian(){
            return rad;
        }
        void display(){
            cout<<"The given value in radian : "<<getRadian();
          
        }
};

int main(){
    Radian radian1; //user defined type
    Degree degree1; //user defined type
    degree1.input();
    radian1=degree1;    //converting from user defined to user defined
    radian1.display();
    return 0;
}