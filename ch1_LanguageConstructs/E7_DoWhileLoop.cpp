/*It behaves like a while loop except that condition is evaluated after the execution of statement instead of 
before , guaranteeing at least one execution of statement even if condition is never fulfilled. */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    do {
        cout<<"Enter text: ";
        getline(cin,str);
        cout<<"You entered: "<<str<<'\n';
    }while(str!="goodbye");
    return 0;
}