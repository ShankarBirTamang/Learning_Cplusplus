#include<iostream>
using namespace std;

class ABC{
    private:
        int ref;
        const int con;
    public:
        ABC(int a , int b): ref(a),con(b){} // Initialization list in constructor
        void display(){
            cout<<"\nValue of ref: "<<ref;
            cout<<"\nValue of con: "<<con;
        }
};
int main(){
    ABC obj(10,12);
    obj.display();
    return 0;
}