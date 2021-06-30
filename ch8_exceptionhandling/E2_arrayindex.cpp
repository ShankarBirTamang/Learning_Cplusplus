#include<iostream>
using namespace std;

int main(){
    char msg[]="Out of range.";
    char myarray[10];
    try{
        for(int i=0;i<=10;i++)
        {
            if(i>9) throw msg;
            myarray[i] = 'z';
        }
    }
    catch(char str[])
    {
        cout<<"Exception: "<<str;
    }
    return 0;
}