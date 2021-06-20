/* The main use of the concept of dynamic memory allocation is for allocating arrays when we have to 
declare an array by specifying its size but are not sure about the size.

Consider a situation when we want the user to enter the name but are not sure about the number of characters in the 
name that the user will enter. 

In that case, we will declare an array of characters for the name with some array size 
such that the array size should be sufficient enough to hold any name entered. 

Suppose we declared the array with the array size 30 as follows.
                char name[30];
And if the user enters the name having only 12 characters, then the rest of the memory space which was allocated to the 
array at the time of its declaration would become waste, thus unnecessary consuming the memory.

In this case, we will be using the new operator to dynamically allocate the memory at runtime. 
We use the new operator as follows.

char *arr = new char[length];

Let's see an example to understand its use.*/
#include<iostream>
using namespace std;

int main(){
    int length ,sum=0;
    cout<<"Enter the number of students in the group"<<endl;
    cin>>length;
    int *marks=new int[length];
    cout<<"Enter the marks of the students."<<endl;
    for(int i=0; i<length;i++){     //entering marks of stds
        cin>>*(marks+i);
    }
    for(int i=0;i<length;i++){      //calculating sum
        sum+=*(marks+i);
    }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}