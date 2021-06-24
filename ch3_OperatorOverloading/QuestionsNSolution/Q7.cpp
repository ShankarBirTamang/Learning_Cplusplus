// WAP that will convert object from a class Rectangle to oject of class polar using casting operator .

#include<iostream>
#include<math.h>
using namespace std;

class Polar{
    private:
        float radius;
        float theta;
    public:
        Polar(){
            radius = 0;
            theta = 0;
        }
        Polar(float r, float th)
        {
            radius = r;
            theta = th;
        }
        void display(){
            cout<<"("<<radius<<","<<theta<<")"<<endl;
        }

};
class Rectangle{
    private:
        float x;
        float y;
    public:
        Rectangle(){
            x = 0;
            y = 0;
        }
        Rectangle(float x1, float y1){
            x = x1;
            y = y1;
        }
        void input(){
            cout<<"Enter x and y value: ";
            cin>>x>>y;
        }
        void display(){
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        operator Polar(){       //Using Casting Operator
            float r, t;
            r = static_cast<float> (sqrt(x*x+y*y));
            t = static_cast<float> (atan(y/x));
            return Polar(r,t);
        }
};
int main(){
    Rectangle rec(5,6);
    Polar pol;
    cout<<"Given Rectangle value: ";
    rec.display();
    pol = rec;      //Conversion of rectangle class object to polar class object
    cout<<"Equivalent Polar value: ";
    pol.display();
    return 0;
}