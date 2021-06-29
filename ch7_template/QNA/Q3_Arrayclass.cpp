// WAP with class template to represent array and add member function to find maximum , minimum and sort of the generic array.

#include<iostream>
using namespace std;

template <class T , int size>
class array{
    T a[size];
    public:
        void input();
        void display();
        void ascending();
        T min();
        T max();
};

template<class T, int s>
void array<T,s>::input(){
    cout<<"\nEnter element to array of size: "<<s<<endl;
        for(int i=0;i<s;i++)
            cin>>a[i];
}

template<class T, int s>
void array<T,s>::display(){
    cout<<"\nThe array is: ";
        for(int i=0;i<s;i++)
            cout<<a[i]<<"\t";
}

template <class T ,int s>
T array<T,s>::min(){
    T m = a[0];
        for(int i=1;i<s;i++){
            if(m>a[i])
                m = a[i];
        }
    return m;
}

template<class T , int s>
T array<T,s>::max(){
    T g=a[0];
    for(int i=0;i<s;i++)
        if(g<a[i])
            g = a[i];
    return g;
}

template<class T, int s>
void array<T,s>::ascending(){
    T temp;
    for(int i=0;i<s-1;i++){
        for(int j=i+1;j<s;j++){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    array<int, 5> a1;
    a1.input();
    cout<<"\nMinimum element is: "<<a1.min();
    cout<<"\nGreatest element is: "<<a1.max();
    a1.ascending();
    a1.display();

    array<float, 5> b1;
    b1.input();
    cout<<"\nMinimum element is: "<<b1.min();
    cout<<"\nGreatest element is: "<<b1.max();
    b1.ascending();
    b1.display();

    return 0;
}