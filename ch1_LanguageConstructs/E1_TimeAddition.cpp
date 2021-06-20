#include<iostream>
using namespace std;

class time {
    int hr, min , sec ;
    public : 
    void input(){
        cout<<"Enter hour, minutes and seconds";
        cin>>hr>>min>>sec;
    }
    void display(){
        cout<<hr<<" Hour "<<min<<" minutes "<<sec<<" seconds "<<endl;
    }
    void add(time t1,time t2){
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min +sec/60;
        sec = sec % 60;
        hr = t1.hr + t2.hr + min/60;
        min = min % 60;
    }
    void sub(time t1, time t2){
        min =0;
        hr = 0;
        sec = t2.sec - t1.sec;
        if(sec<0){
            sec = sec + 60;
            min = min-1;
        }
        min = min + t2.min - t1.min ;
        if(min<0){
            min = min + 60;
            hr = hr-1;
        }
        hr = hr+t2.hr - t1.hr;
    }
};

 int main()
 {
    time t1,t2,t3,t4;
    t1.input();
    t2.input();
    t3.add(t1,t2);
    cout<<endl<<"The addition of two time is : ";
    t3.display();
    t4.sub(t1,t2);
    cout<<endl<<"The subtraction of two time is : ";
    t4.display();
    return 0;
}
