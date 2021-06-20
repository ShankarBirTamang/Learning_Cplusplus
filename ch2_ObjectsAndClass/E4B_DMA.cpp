#include <iostream>
using namespace std;
 
 class MyClass
 {
 private:
     int itsAge;
     int itsWeight;
 public:
     MyClass() {            //Default constructor
        itsAge = 1; 
        itsWeight=5; 
     } 
     ~MyClass() {}            //Destructor              
     int GetAge() const { return itsAge; }
     int GetWeight() const { return itsWeight; }
     void SetAge(int age) { itsAge = age; }
     void SetWeight(int weight){ itsWeight=weight;}
 
 };
 
 int main()
 {
     MyClass * myObject[50];
     int i;
     MyClass * objectPointer;
     for (i = 0; i < 50; i++)
     {
         objectPointer = new MyClass;
         objectPointer->SetAge(2*i +1);
         objectPointer->SetWeight(2*i+2);
         myObject[i] = objectPointer;
     }
 
     for (i = 0; i < 50; i++)
         cout << "#" << i+1 << ": " << myObject[i]->GetAge() <<" and "<<myObject[i]->GetWeight()<< endl;

 
     for (i = 0; i < 50; i++)
     {
         delete myObject[i];
         myObject[i] = NULL;
     }
 
     return 0;
 }