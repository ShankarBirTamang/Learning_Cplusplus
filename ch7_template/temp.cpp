#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &v){
    for(int i=0;i<v.size();i++)
        for(int j=0;j<v.size();j++){
            int temp=0;
            if(v[i]>v[j]){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
}

int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(15);
    v.push_back(14);
    v.push_back(12);
    v.push_back(13);
    v.push_back(17);
    v.push_back(16);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
    cout<<endl;
    sort(v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
    cout<<endl;

    return 0;
}