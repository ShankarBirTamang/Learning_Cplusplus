#include<iostream>
using namespace std;

void test(int x)
    throw(int, double , char){
        if(x==0)
            throw 'x';
        if(x==1)
            throw x;
        if(x==-1)
            throw 1.0;
        cout<<"End of function block\n";
    }


int main(){
    try{
        cout<<"Testing throw retrictions\n";
        cout<<"x=0"<<endl;
        test(0);
        cout<<"x=1"<<endl;
        test(1);
        cout<<"x=-1"<<endl;
        test(-1);
        cout<<"x=2"<<endl;
        test(2);
    }
    catch(char c){
        cout<<"caught a character"<<endl;
    }
    catch(int m){
        cout<<"caught an integer"<<endl;
    }
    catch(double d){
        cout<<"caught a double"<<endl;
    }
    cout<<"End of try-catch system"<<endl;
    return 0;
}