/* Write operator functions as member function of a class to overload arithmetic operator + , logical operator <= and stream operator << to operate on
the objects of user defined type time(hr,min,sec).
*/
#include<iostream>
using namespace std;

class time{
    private :
         int hr , min ,sec;
    public:
       friend istream &operator>>(istream &,time &);
       friend ostream &operator<<(ostream &, time &);
       time operator+(time);
       float operator<=(time);
};
//overloading insertion operator
istream &operator>>(istream &input,time &t){
    cout<<"Enter hour: ";
    input>>t.hr;
    cout<<"Enter minute: ";
    input>>t.min;
    cout<<"Enter second: ";
    input>>t.sec;
return input;
}
//overloading extraction operator
ostream &operator<<(ostream &output,time &t){
    output<<"Time: "<<t.hr<<":"<<t.min<<":"<<t.sec<<endl;
    return output;
}
//overloading +operator
time time::operator+(time t){
    time temp;
    temp.sec=sec+t.sec;
    temp.min = min+t.min+temp.sec/60;
    temp.sec=temp.sec%60;
    temp.hr = hr + t.hr + temp.min/60;
    temp.min = temp.min % 60;
    return temp;
}
//overloading <= operator
float time::operator<=(time t){
   float first=sec + min *60 + hr*60*60;
   float second = t.sec + t.min*60 + t.hr*60*60;
   return (first<=second)?true:false;
}
int main(){
    time t1, t2;
    cin>>t1;
    cin>>t2;
    if(t1<=t2)
        cout<<"First time is lesser than or equal to second time."<<endl;
    else 
        cout<<"First time is greater than second time."<<endl;

    time t3 = t1+t2;
    cout<<"After addition: "<<endl;
    cout<<t3;
    return 0;
}