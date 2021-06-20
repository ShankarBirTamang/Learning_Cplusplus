#include<iostream>
#include<math.h>
using namespace std;

void area(float a, float b , float c=7){
    float s=(a+b+c)/2;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle : "<<ar<<endl;
}

void area(int b , int h){
    float ar=(b*h)/2;
    cout<<"Area of triangle is : "<<ar<<endl;
}

int main(){
    float side1, side2, side3;
    int b,h;
    cout<<"Enter three sides of triangle: "<<endl;
    cin>>side1>>side2>>side3;
    area(side1,side2,side3);
    cout<<"Enter base and height of triangle: "<<endl;
    cin>>b>>h;
    area(b,h);
    return 0;
}