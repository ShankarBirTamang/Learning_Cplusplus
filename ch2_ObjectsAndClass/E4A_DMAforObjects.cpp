/*We can also dynamically allocate objects.

As we know that Constructor is a member function of a class which is called whenever a new object is created of that class. 
It is used to initialize that object. Destructor is also a class member function which is called 
whenever the object goes out of scope.

Destructor is used to release the memory assigned to the object. It is called in these conditions.

When a local object goes out of scope
For a global object, operator is applied to a pointer to the object of the class
We again use pointers while dynamically allocating memory to objects.

Let's see an example of array of objects.*/

#include<iostream>
using namespace std;

class A{
    public:
         A(){
            cout<<"Constructor"<<endl;
        }
        ~A(){
            cout<<"Destructor"<<endl;
        }
};

int main(){
    A* arr = new A[4];
    delete [] arr;         //delete array
    return 0;
}

/*The Constructor will be called four times since we are allocating memory to four objects of the class 'A'. 
The Destructor will also be called four times during each of these objects.*/