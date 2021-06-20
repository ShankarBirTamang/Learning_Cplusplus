#include<iostream>
using namespace std;

struct student{
    public:
        int var1;
        float var2;
};

union number{
    public:
        int var1;
        float var2;
};

int main(){
    struct student s1,s2;
    union number s3,s4;
    cout<<"The size of student class is: "<<sizeof(s1)<<endl;
    cout<<"The size of student class variable is : "<<&s1.var1<<" and "<<&s2.var2<<endl;
    cout<<endl<<"The size of number union is : "<<sizeof(s3)<<endl;
    cout<<"The size of union variable is : "<<&s3.var1<<" and "<<&s4.var2;
    return 0;
}