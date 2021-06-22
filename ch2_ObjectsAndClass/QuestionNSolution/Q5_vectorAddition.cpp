/*Using OOP , write a program to create a class vector that reads integer number. 
Perform vector addition passing object as arguments and returns the object as result. 
Vector is a class with array as member.
*/
#include<iostream>
using namespace std;

class vector{
    private:
        int x,y,z;
    public:
        void getData(){
            cout<<"\nEnter 1st coordinate: ";
            cin>>x;
            cout<<"Enter 2nd coordinate: ";
            cin>>y;
            cout<<"Enter 3rd coordinate: ";
            cin>>z;
        }
        vector addVector(vector, vector);
        void array(){
            cout<<"\nX: ["<<x<<"]\nY: ["<<y<<"]\nZ: ["<<z<<"]"<<endl;
        }
};
vector vector::addVector(vector A, vector B){
    vector C;
    C.x=A.x+B.x;
    C.y=A.y+B.y;
    C.z=A.z+B.z;
    return C;
}

int main(){
    vector v1,v2,v3;
    v1.getData();
    cout<<"First vector: ";
    v1.array();

    v2.getData();
    cout<<"\nSecond vector: ";
    v2.array();

    v3 = v3.addVector(v1,v2);
    cout<<"\nSum of two vector: ";
    v3.array();

    return 0;
}