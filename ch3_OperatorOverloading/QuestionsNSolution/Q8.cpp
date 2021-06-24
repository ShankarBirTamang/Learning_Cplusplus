/* Create a class named city that will have two member variables CityName(char[20]) and DistFromktm(float).
Add member function to set and retrieve the CityName and DistFromKtm separately. Add operator overloading to find the distance between 
the cities (just find the difference of DistFromKtm) and sum of those distance from Kathmandu. In the main initialize three city objects. 
Set the first and second city to be Pokhara and Dhangadi . Display the sum of  DistFromKtm of Pokhara and Dhangadi and distance
between Pokhara and Dhangadi . 
*/
#include<iostream>
#include<cstring>
using namespace std;

class city{
    private:
        char CityName[20];
        float DistFromKtm;
    public:
        void setCity(char *cn, float dfk){
            strcpy(CityName,cn);
            DistFromKtm = dfk;
        }
        void display(){
            cout<<"CityName: "<<CityName<<endl;
            cout<<"Distance From Kathamandu: "<<DistFromKtm<<"km"<<endl;
        }
        float operator+(city c){
            return(this-> DistFromKtm+c.DistFromKtm);
        }
        float operator-(city c){
            return(this-> DistFromKtm-c.DistFromKtm);
        }
};

int main(){
    city Pokhara , Dhangadi;
    Pokhara.setCity("Pokhara",206);
    Dhangadi.setCity("Dhangadi", 671);
    Pokhara.display();
    Dhangadi.display();
    cout<<"Sum of Distance From Ktm to Pokhara and Dhangadi is : "<<Dhangadi+Pokhara<<"km"<<endl;
    cout<<"Distance between Pokhara and Dhangadi is : "<<Dhangadi-Pokhara<<"km"<<endl;
    return 0;
}