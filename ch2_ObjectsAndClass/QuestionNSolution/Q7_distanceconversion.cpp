/*Create a class m distance to store the values in meter and centimeter and class edistance to store values in feet and 
inch. Perform addition of object of mdistance and objecto of edistance by using friend function.
*/

#include<iostream>
using namespace std;
class mdistance;        //forward declaration for friend function
class edistance;

class mdistance{
    private :
        float meter;
        float centimeter;
    public:
        mdistance(float m, float c){
            meter =m;
            centimeter = c;
        }
    friend void addDistance(mdistance one, edistance two);
};

class edistance{
    private:
        float feet;
        float inch;
    public:
        edistance(float f , float i){
            feet = f;
            inch = i;
        }
    friend void addDistance(mdistance one, edistance two);
};
void addDistance(mdistance one, edistance two){
    float cm2=two.inch*2.54;
    float m2=two.feet*3.2808;
    float m1=one.meter;
    float cm1=one.centimeter;
    float m=m1+m2;
    float cm=cm1+cm2;
    if(cm>100)
    {
        m=m+cm/100;
        cm=int(cm)%100;
    }
    cout<<"First distance : "<<m1<<" metre "<<cm1<<" centimetre ."<<endl;
    cout<<"Second distance : "<<two.feet<<" feet "<<two.inch<<" inch ."<<endl;
    cout<<"Second distance in meter and centimeter : "<<m2<<" metre "<<cm2<<" centimetre ."<<endl;

    cout<<"Sum is : "<<m<<" metre "<<cm<<" centimetre ."<<endl;
}

int main(){
    mdistance one(5, 99);
    edistance two(7,50);
    addDistance(one,two);
    return 0;
}