#include<iostream>
using namespace std;

template<class T1,class T2, class T3>
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
    Record<int, char, double> R1(10, 'R', 1034.322);
    Record<double, char , int> R2(293.323, 'S', 12);
    R1.show();
    R2.show();
    return 0;
}