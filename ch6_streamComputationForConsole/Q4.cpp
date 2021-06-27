/* write a program to display the output in pyramid form as follows:
            A
        A   B
    A   B   C
A   B   C   D
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout.width(4);
    cout<<"A";
    cout<<endl;

    cout.width(4);
    cout<<"AB"<<endl;

    cout.width(4);
    cout<<"ABC"<<endl;

    cout.width(4);
    cout<<"ABCD"<<endl;

    return 0;
}