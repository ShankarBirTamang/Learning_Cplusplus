/* The while-loop simply repeats statement while expression is true.
Sytax : while (expression) statement */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: " <<endl;
    cin>>n;
    while(n>0){
        cout<<n<<", ";
        n--;
    }
    cout<<endl<<"liftoff!";
    return 0;
}