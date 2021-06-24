/* write a program to define a class Distance with necessary data members and functions.
Then overload the relational operators to compare the two objects of Distance class.
*/

#include<iostream>
using namespace std;

class Distance{
    private :
        int feet , inches;
    public:
        Distance();
        void getDistance();
        void showDistance();
        Distance operator+(Distance);
        Distance operator-(Distance);
        int operator>(Distance);
        int operator<(Distance);
        int operator==(Distance);
        int operator!=(Distance);
};
//default constructor
Distance::Distance(){
    feet = 0;
    inches = 0;
}
//input
void Distance::getDistance(){
    cout<<"Enter Distance value in feet and inches: ";
    cin>>feet>>inches;
    inches+=feet*12;
}
//display
void Distance::showDistance(){
    
    cout<<feet<<" feet and "<<inches<<"inches"<<endl;
}
//Overloading +operator
Distance Distance::operator+(Distance d){
    Distance temp;
    temp.inches = inches + d.inches;
    temp.feet = temp.inches/12;
    temp.inches = temp.inches % 12;
    return temp;
}
//Overloading -operator
Distance Distance::operator-(Distance d){
    Distance temp;
    temp.inches = inches - d.inches;
    temp.feet = temp.inches/12;
    temp.inches = temp.inches % 12;
    return temp;
}
//Overloading > operator
int Distance::operator>(Distance d){
    return (inches>d.inches)?true:false;
}
//Overloading < operator
int Distance::operator<(Distance d){
    return (inches<d.inches)?true:false;
}
//Overloading == operator
int Distance::operator==(Distance d){
    return (inches==d.inches)?true:false;
}
//Overloading != operator
int Distance::operator!=(Distance d){
    return (inches!=d.inches)?true:false;
}
int main(){
    Distance d1,d2 , d3;
    cout<<"For 1st Distance: ";
    d1.getDistance();
    cout<<"For 2nd Distance: ";
    d2.getDistance();

    d3 = d1+ d2;
    cout<<"After adding two distance we get:";
    d3.showDistance();

    d3 = d1-d2;
    cout<<"After subtracting 2nd distance by 1st distance we get: ";
    d3.showDistance();

    if(d1==d2)
        cout<<"Both distance are equal."<<endl;
    if(d1!=d2)
        cout<<"Two distance are not equal and ";
    if(d1>d2)
        cout<<"1st distance is greater."<<endl;
    if(d1<d2)
        cout<<"2nd distance is greater."<<endl;

    return 0;
}