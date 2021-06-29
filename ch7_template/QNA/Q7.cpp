#include<iostream>
using namespace std;

template<class T>
float sum_arr(T a[]){
    T sum = 0;
    float avg;
    for(int i=0;i<10;i++)
        sum+= a[i];
    avg = (float)sum/10;
    cout<<"\nSum in an Array: "<<sum;
    return avg;
}

int main(){
    int arr[10];
    cout<<"\nEnter any 10numbers: "<<endl;
    for(int i=0;i<10;i++)
        cin>>arr[i];
    float avg=sum_arr(arr);
    cout<<"\nAverage = "<<avg<<endl;
    return 0;
}