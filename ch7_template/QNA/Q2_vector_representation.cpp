/* Create a class template with necessary member variable to represent vectors. Write initialization mechanism and overload the '*' operator to find the 
scalar product of two vectors. Also write a member function to display the vector. Use above template and write main function to perform scalar 
product of vectors of type integer and double.
*/

#include<iostream>
using namespace std;
const int size=3;

template<class T>
class vector{
    T *v; //type T vector
public:
    vector();
    vector(T *a);
    T operator*(vector &y);
};

template<class T>
vector <T>::vector(){
    v = new T[size];
    for(int i=0;i<size;i++)
        v[i]=0;
}

template<class T>
vector <T>::vector(T *a){
    for(int i=0;i<size;i++)
        v[i] = a[i];
}

template <class T>
T vector<T>::operator*(vector &y){
    T sum = 0;
    for(int i=0;i<size;i++)
        sum += this-> v[i]* y.v[i];
    return sum;
}

int main(){
    int x[3] = {1,2,3};
    int y[3] = {4,5,6};
    double a[3]={1.2,3.4,5.6};
    double b[3]={7.8,8.9,9.1};

    vector<int> v1, v2;
    v1 = x;
    v2 = y;
    int R1 = v1 * v2;

    vector<double> v3, v4;
    v3 = a;
    v4 = b;
    int R2 = v3 * v4;
    cout<<"R1 = "<<R1<<endl;
    cout<<"R2 = "<<R2<<endl;

    return 0;
}