/*Wap to read your date of birth and display it . YOur program should thorw multiple exception for day , month and other values not in range using
exception class and each exception is handled by separate handler.
*/
#include<iostream>
using namespace std;

class DOB
{
    int day , month;
public:
    DOB(){
        day =0;
        month =0;
    }
    DOB(int m , int d){
        month = m;
        day = d;
    }
    class WrongMonth{};
    class WrongDay{};
    void readdata(){
        cout<<"Enter Month: ";
        cin>>month;
        cout<<"Enter day: ";
        cin>>day;
    }
    void check(DOB d){
        if(d.month>12)
            throw WrongMonth();
       else if(d.day>30)
            throw WrongDay();
    }
    void display(){
        cout<<"Month:\t\t"<<month<<endl;
        cout<<"Day:\t\t"<<day<<endl;
    }
};

int main()
{
    DOB dob1, dob2;
    dob2.readdata();
    try
    {
        dob1.check(dob2);
        dob2.display();
    }
    catch(DOB::WrongMonth)
    {
        cout<<"The month should not exceed 12"<<endl;
    }
    catch(DOB::WrongDay)
    {
        cout<<"The day should not exceed 30"<<endl;
    }
    return 0;
}