#include<iostream>
using namespace std;

class Distance{
    private:
        int feet ;
        int inches;
    public:
        Distance(){
            feet = 0;
            inches =0;
        }
        Distance(int f, int i){
            feet = f;
            inches = i;
        }
        friend istream &operator>>(istream &input , Distance &d){
            input>>d.feet>>d.inches;
            return input;
        }
        friend ostream &operator<<(ostream &output, Distance &d){
            output<<"Feet: "<<d.feet<<" Inches: "<<d.inches;
            return output;
        }
};

int main(){
    Distance d1(2,3),d2(4,5),d3;

    cout<<"Enter the value of feet and inches : ";
    cin>>d3;
    cout<<"First Distance: "<<d1<<endl;
    cout<<"Second Distance: "<<d2<<endl;
    cout<<"Third Distance: "<<d3<<endl;

}