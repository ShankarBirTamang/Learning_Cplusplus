/* Use new and delete operators to store n numbers dynamically and find their average using casting operator. 
 */
#include<iostream>
using namespace std;

int main(){
    int n ,*arr , total=0;
    float avg;
    cout<<"How many numbers: "<<endl;
    cin>>n;
    arr = new int[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
     cin>>arr[i];
    for(int i=0;i<n;i++)
     total+=arr[i];
    avg=static_cast<float>(total)/n;
    cout<<"Total : "<<total<<endl;
    cout<<"Average : "<<avg<<endl;
    delete []arr;
    return 0;
}