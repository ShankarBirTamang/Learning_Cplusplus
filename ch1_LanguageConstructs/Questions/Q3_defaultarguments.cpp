/* Write a program to display N number of characters by using default arguments for both parameters. 
Assume that the function take two arguments one character to be printed and other number of characters to be printed.*/

#include<iostream>
using namespace std;



void function(char a='C', int b=10){
    cout<<a<<endl;
    for(int i=0;i<b;i++){
        cout<<a<<" , ";
    }
}

int main(){
    function();
    return 0;
}