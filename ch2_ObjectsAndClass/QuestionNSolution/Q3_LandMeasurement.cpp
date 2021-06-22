/* WAP to create a class LandMeasure that reads Ropani , Ana , Paisa and Dam as data members. Write a function to pass
two objects of type Land Measure and return their sum.
(16Ana=1Ropani , 4Paisa=1Ana, 4Dam=1Paisa)
*/
#include<iostream>
using namespace std;

class LandMeasure{
    private:
        int Ropani , Ana , Paisa , Dam;
    public:
        void getMeasure(){
            cout<<endl<<"Enter Ropani: ";
            cin>>Ropani;
            cout<<endl<<"Enter Ana: ";
            cin>>Ana;
            cout<<endl<<"Enter Paisa: ";
            cin>>Paisa;
            cout<<endl<<"Enter Dam: ";
            cin>>Dam;
        }
        void display(){
            cout<<endl<<"Sum of Two Land:  "<<Ropani<<" Ropani "<<Ana<<" Ana "<<Paisa<<" Paisa "<<Dam<<" Dam "<<endl;
        }
        LandMeasure measure(LandMeasure, LandMeasure);
};
LandMeasure LandMeasure::measure(LandMeasure L1, LandMeasure L2){
    LandMeasure L3;
    L3.Dam=L1.Dam+L2.Dam;
    if(L3.Dam>4){
            L3.Paisa=L1.Paisa+L2.Paisa+L3.Dam/4;
            L3.Dam=L3.Dam%4;
    }
    else 
        L3.Paisa=L1.Paisa+L2.Paisa;

    if(L3.Paisa>4)
    {
        L3.Ana=L1.Ana+L2.Ana+L3.Paisa/4;
        L3.Paisa=L3.Paisa%4;
    }
    else
        L3.Ana=L1.Ana+L2.Ana;

    if(L3.Ana>16)
    {
        L3.Ropani=L1.Ropani+L2.Ropani+L3.Ana/16;
        L3.Ana = L3.Ana%16;
    }
    else
        L3.Ropani = L1.Ropani + L2.Ropani;
    
    return L3;
}

int main(){
    LandMeasure land1,land2, land3;
    cout<<"\nEnter First Land Measurement:";
    land1.getMeasure();
    cout<<"\nEnter Second Land Measurement:";
    land2.getMeasure();
    land3 = land3.measure(land1,land2);
    land3.display();
    return 0;
}