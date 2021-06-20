//The namespace mechanism is used for the logical grouping of program elements like variables , classes , functions etc..
//The purpose of namespace is to localize a name of identifiers to get rid of naming conflicts across different modules
//designed by different members of programming team. 

#include<iostream>
using namespace std;

namespace convert{
    void volume(int &a){
        a=a*100;
    }
}

int main(){
    int no;
    cout<<"Enter meter:"<<endl;
    cin>>no;
    convert::volume(no);
    cout<<"The convertion is : "<<no;
    return 0;
}