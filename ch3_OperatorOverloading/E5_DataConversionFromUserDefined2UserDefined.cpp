#include<iostream>
#define pi 3.14159
using namespace std;

class Radian{
    private: 
        float rad;
    public:
        Radian(){
            rad =0;
        }
        Radian (float r){
            rad = r;
        }
        void display(){
            cout<<"The given value in radian : "<<rad;
          
        }
};

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
        operator Radian(){
            float radian;
            radian = deg * pi / 180.0;
            return(Radian(radian));
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