//Program to illustrate the use of multiple catch blocks

#include<iostream>
using namespace std;    

int main(){
    char msg[]="Divide by zero...";
    int nums[]={1,2,3,4,10,20,30,40,50,90};
    int n, counter;
    try{
        cout<<"Enter a number for divisor: ";
        cin>>n;
        cout<<"How many results do you want?";
        cin>>counter;
        for (int i=0;i<counter ;i++){
            if(i>9) throw i;
            if(n==0) throw msg;
            cout<<"The quotient is : "<<nums[i]/n<<endl;
        }
    }
    catch(char str[]){
        cout<<"Exception: "<<str<<endl;
    }
    catch(int index){
        cout<<"index: "<<index<<" is out of range. "<<endl;

    }

    return 0;
}