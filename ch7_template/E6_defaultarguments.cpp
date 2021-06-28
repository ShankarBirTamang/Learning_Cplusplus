//Template parameters may have default arguments. The set of default template arguments accumulates over all declarations of a given template.

#include<iostream>
using namespace std;

template <class T=double , int size=4>  //template declaration with default argument
class Array{
    T a[size];
    public:
        void input(T *temp){
            for(int i=0;i<size;i++){
                a[i]=temp[i];
            }
        }
        void display();
};

template <class T, int s>   //template declaration
void Array <T , s>:: display(){
    T sum = 0;
    for(int i=0;i<s;i++){
        sum+=a[i];
    }
    cout<<"\nThe sum is : "<<sum;
}
 
int main(){
    int temp[]={1,2,3,4,5};
    Array <int , 5 > Obj1;
    Obj1.input(temp);

    double d[]={10.12,11.23,12.02,23.5};
    Array<>Obj2;
    Obj2.input(d);

    Obj1.display();
    Obj2.display();
    return 0;
    
}