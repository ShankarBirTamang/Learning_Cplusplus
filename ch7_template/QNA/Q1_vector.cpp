#include<iostream>
#include<vector>        //vector is a sequence container that implements dynamic array
using namespace std;

void display(vector <int> &v){
    for (int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}

int main(){
    system("cls");
    vector<int> v;
    cout<<"\nInitial state of Vector: "<<v.size();
    int x;
    cout<<"\nEnter the value to vector: ";
    for(int i=0;i<4;i++){
        cin>>x;
        v.push_back(x);         //add new element at the end
    }
    cout<<"\nSize after adding 4 values: ";
    cout<<v.size()<<"\n";
    cout<<"\nCurrent Content: ";
    display(v);
    return 0;
}