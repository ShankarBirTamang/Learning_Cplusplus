// A class that operate on any type of data is called class template.

#include<iostream>
using namespace std;

template <class T>
class mypair{
    T a,b;
    public:
        mypair(T first, T sec){
            a = first;
            b = sec;
        }
        T getmax();
};

template <class T>
T mypair<T>::getmax(){
    T retval;
    retval = (a>b)?a:b;
    return retval;
}

int main(){
    mypair <int> myobj(100, 75);
    cout<<myobj.getmax();
    return 0;
}