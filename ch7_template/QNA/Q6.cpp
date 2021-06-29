/* write a program that uses a vector container to represent array and display the result in ascending order . 
For sorting you can use the vector member function.
*/
#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &v)       //passing vector element as pass by reference
{
    for(int i=0;i<v.size();i++)
        for(int j=0;j<v.size();j++)
            {
                int temp =0;
                if(v[i]<v[j]){
                    temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
            }
}

int main(){
    vector <int> v;
    v.push_back(11);
    v.push_back(16);
    v.push_back(13);
    v.push_back(12);
    v.push_back(15);
    v.push_back(14);

    cout<<"\nItems in the vector are: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
    cout<<endl;
    sort(v); //vector member function is calling for sort
    cout<<"\nAfer sorting , Items in the vector are: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
    cout<<endl;

    return 0;
}