#include<iostream>
using namespace std;

class meter{
    private:
        float length;
    public:
        meter(){ length =0 ;}
        meter(float l){
            length = l/100;
        }
        void display(){
            cout<<"Length (in meter): "<<length<<endl;
        }
};
int main(){
    meter m; //user defined type
    float l; //basic type
    cout<<"Enter length in cm: ";
    cin>>l;
    m = l; // converting from basic type to user defined type
    m.display();
    return 0;
}