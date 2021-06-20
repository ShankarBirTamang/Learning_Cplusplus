/*
An enumerated data type is a user defined type with values ranging over a finite sets of identifiers called 
enumeration constants. Eg: enum color {red , green ,blue};
Names of diffenent enumeration constant must be distinct. Eg: enum emotion{happy , hot , cool}; and 
enum weather {hot , cold ,wet}; are invalid because the name 'hot' has value 1 in enum'emotion' and 0 in enum'weather'./
*/

#include<iostream>
using namespace std;

enum days_of_week{
    sun, mon , tue ,wed , thurs, fri , sat 
};

int main(){
    days_of_week day1 , day2;
    day1 = sun;
    day2 = fri;
    int diff= day2 - day1;
    cout<<"Days between = "<<diff<<endl;
   
    cout<<"Sunday has value : "<<sun<<endl;
    cout<<"Monday has value : "<<mon<<endl;
    cout<<"Tuesday has value : "<<tue<<endl;
    cout<<"Wednesday has value : "<<wed<<endl;
    cout<<"Thursday has value : "<<thurs<<endl;
    cout<<"Friday has value : "<<fri<<endl;
    cout<<"Saturday has value : "<<sat<<endl;
    
     return 0;
}