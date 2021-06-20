/* Similar to pointer of other data type , we can also create pointer type of object of class. Like any other pointer type
, object also holds the address of another object. The address is assigned using & operator . 
General form of declaring pointer to object : class_name * pointerobject;

The pointer object to class uses the arrow operator -> to access the member of the class.
General form : pointerobject -> memberfunction

We can also perform DMA using pointer type object of the class.
class_name *pointer_object;
pointer_object = new class_name;
pointer_object = new class_name[size];

To free memory: delete []pointer_object;
*/
#include<iostream>
#include<conio.h>
using namespace std;

class person{
    private: char name[40];
    public : 
        void setname(){
            cout<<"Enter name: ";
            cin>>name;
        }
        void printname(){
            cout<<"\nName is : "<<name;
        }           
};
int main(){
    int n, i=0;
    cout<<"Enter the number of person."<<endl;
    cin>>n;
    person * persptr;
    person * myperson[n];
    do{ persptr= new person; 
        persptr->setname();            //pointerobject accessing member function of a class
        myperson[i]=persptr;            
        i++;
    }while(i<n);
    for(int j=0;j<n;j++){
        cout<<"\nPerson number "<<j+1;
        myperson[j]->printname();      //pointer object accessing member function of a class
    }
    cout<<endl;

    for(i=0;i<n;i++){
        delete myperson[i];
        myperson[i]=NULL;
    }
    return 0;
}