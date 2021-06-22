#include<iostream>
using namespace std;

class meter{
    private:
        float length;
    public:
        meter(){
            length = 0;
        }
        operator float(){
            float l;
            l = length * 100;
            return (l);
        }
        void getLength(){
            cout<<"Enter length in meter: ";
            cin>>length;
        }
};
int main(){
    meter m; //user defined type
    float l;    //basic type
    m.getLength();
    l = m;  //converting userdefined to basic type
    cout<<"Length in cm: "<<l<<endl;
    return 0;
}