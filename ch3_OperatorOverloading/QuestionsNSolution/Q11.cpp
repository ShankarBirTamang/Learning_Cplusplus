//WAP to concatenate two user given string by overloading binary plus operator.

#include<iostream>
#include<cstring>
using namespace std;

class strings{
    private:
        char a[30];
    public:
        void read();
        void display();
        strings operator+(strings);
};
void strings::read(){
    cout<<"Enter string: ";
    cin>>a;
}
void strings::display(){
    cout<<"The string is: "<<a<<endl;
}
strings strings::operator+(strings s){
    strings temp;
    strcpy(temp.a,strcat(a,s.a));
    return temp;
}

int main(){
    strings s1,s2,s3;
    s1.read();
    s2.read();
    s3 = s1+s2;
    cout<<"After concatenation: "<<endl;
    s3.display();
    return 0;
}