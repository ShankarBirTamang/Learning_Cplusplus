#include<iostream>
using namespace std;

class time{
    private:
        int hr, min, sec;
    public:
        void getTime(){
            cout<<"\nEnter hour: "<<endl;
            cin>>hr;
            cout<<"Enter minute: "<<endl;
            cin>>min;
            cout<<"Enter second: "<<endl;
            cin>>sec;
        }
        void convert(){
            if (hr>12)
                hr=hr-12;
            cout<<"\nTime converted into 12hrs system."<<endl;
        }
        void showTime(){
            cout<<"\nShowing Time in 12 hrs system..."<<endl;
            cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
};
int main(){
    time t1, t2;
    t1.getTime();
    t2.getTime();
    t1.convert();
    t2.convert();
    t1.showTime();
    t2.showTime();
    return 0;
}