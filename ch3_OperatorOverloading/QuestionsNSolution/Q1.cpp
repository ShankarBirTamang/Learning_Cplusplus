/* WAP that will add objects of a date class (with members day , month and year)using operator overloading.
Make another function to find no of days in between two dates by operator overloading.
*/
#include<iostream>
using namespace std;

class date{
    private :
        int year , month ,day;
    public: 
        void getdate(){
            cout<<"\n Enter year, month and day: ";
            cin>>year>>month>>day;
        }
        void showdate(){
            cout<<year<<" Year "<<month<<" month "<<day<<" day "<<endl;
        }
        date operator +(date d1){
            date temp;
            temp.day=day+d1.day;
            temp.month=month+d1.month+temp.day/30;
            temp.day = temp.day % 30;
            temp.year=year+d1.year+temp.month/12;
            temp.month=temp.month % 12;
            return temp;
        }
        friend int operator-(date,date);
};
int operator-(date d1, date d2){            //non-member function
    int day=0;
    day = d1.day-d2.day;
    day = (d1.month - d2.month)*30+day;
    day = (d1.year - d2.year)*365+day;
    return day;
}

int main(){
    date d1,d2,d3;
    int day;
    cout<<"\nEnter start date:";
    d1.getdate();
    cout<<"\nEnter stop date:";
    d2.getdate();
    d3 = d1 + d2;
    cout<<"\nThe sum of two date is : ";
    d3.showdate();
    day = d2 - d1;
    cout<<"\nThe days between two date is : "<<day<<" days"<<endl;
    return 0;
}