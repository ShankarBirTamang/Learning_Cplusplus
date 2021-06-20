// WAP to find the transpose of given Matrix

#include<iostream>
using namespace std;

int main(){
    int A[10][10], i,j,m,n;
    cout<<"Enter the number of rows and column: "<<endl;
    cin>>m>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>A[i][j];
    
    cout<<"Entered matrix: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<A[i][j]<<"  ";
        cout<<"\n";
    }

     cout<<"Transpose of given matrix: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<A[j][i]<<"  ";
        cout<<"\n";
    }
    return 0;
}