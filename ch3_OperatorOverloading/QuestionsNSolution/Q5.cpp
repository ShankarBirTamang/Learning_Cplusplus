/* Create a class having an array as member.
Overloaded ([])index operator to input and display the
elements in the array.
*/

#include<iostream>
#include<process.h>
using namespace std;
const int size = 4;
class Array{
    int arr[size];
    public:
        Array(int s){
            for (int i=0;i<s;i++){
                cout<<"Enter a["<<i<<"]: ";
                cin>>arr[i];
            }
        }
        //Overloading [] operator
        int &operator [](int index){
            if(index<0||index>size){
                cout<<"\nBound exception . "<<endl;
                //return first element
                return arr[0];
            }
            return arr[index];
        }
};
int main(){
    int n;
    cout<<"Enter the number of array element to display: "<<endl;
    cin>>n;
    Array A(n);
    for(int i=0;i<n;i++)
        cout<<"\n a["<<i<<"] element is: "<<A[i];
    return 0;
}
