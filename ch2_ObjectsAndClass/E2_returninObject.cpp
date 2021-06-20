/*
When an object of a class is passed to a function , all data members of the class are passed in function. So , we 
can access all the data members of the class within the class body. Similar to passing objects to the functions as 
arguments , the objects can also be returned from the function.
*/
#include<iostream>
using namespace std;

class time{
    int hr , min , sec ;        //declaration of hour, minutes and seconds
    public:
    void input(){
        cout<<"Enter hour, minutes and seconds: ";
        cin>>hr>>min>>sec;
    }
    void display(){
        cout<<hr<<" hours "<<min<<" minutes "<<sec<<" seconds ";
    }
    time add(time t1, time t2){                 //member function defined inside the class
        time temp;
        temp.sec=t1.sec+t2.sec;
        temp.min=t1.min+t2.min+temp.sec/60;
        temp.sec=temp.sec % 60;
        temp.hr=t1.hr+t2.hr+temp.min/60;
        temp.min=temp.min % 60;
        return temp;
    }
    time sub(time ,time);
};

time time::sub(time t1, time t2){       //member function defined outside the class
        time temp;
        temp.min=0;
        temp.hr=0;
        temp.sec=t2.sec-t1.sec;
        if(t2.sec<0){
            temp.sec=temp.sec+60;
            temp.min=temp.min-1;
        }
        temp.min=temp.min+t2.min-t1.min;
        if(t2.min<0){
            temp.min=temp.min+60;
            temp.hr=temp.hr-1;
        }
        temp.hr=temp.hr+t2.hr-t1.hr;
        return temp;
}

int main(){
    time t1, t2, t3, t4 , t5 , t6;
    t1.input();
    t2.input();
    t6 = t3.add(t1,t2);                             //passing object as argument and returning object from add function
    cout<<endl<<"The addition of two time is : ";
    t6.display();
    t5= t4.sub(t1,t2);                              //passing object as argument and returning object from sub function
    cout<<endl<<"The subtraction of two time is : ";
    t5.display();
    return 0;
}