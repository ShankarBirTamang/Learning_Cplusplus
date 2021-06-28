#include<iostream>
using namespace std;

template <class T1, class T2, class T3>
class Record{
    T1 a;
    T2 b;
    T3 c;
    public: 
        Record(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void show();
};
template <class T1, class T2, class T3>
void Record<T1,T2,T3>::show(){
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}

int main(){
    Record<int , float , char> obj1(1, 3.2 , 'u');
    Record<char, int , float> obj2('s',2,5.6);
    obj1.show();
    obj2.show();
    return 0;
}