//Matrix multiplication and addition using operator overloading

#include<iostream>
using namespace std;

class matrix{
    private:
        int arr[10][10];
        int m,n;
    public:
        matrix();   //default constructor
        void getMatrix();   // read matrix
        void showMatrix();  //display matrix
        matrix operator +(matrix); //Overloading +operator
};
//default constructor
matrix::matrix(){
    for (int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            arr[i][j]=0;
}
//read matrix
void matrix::getMatrix(){
   cout<<"Enter the no. of row and column of matrix:";
   cin>>m>>n;
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cout<<"Enter a["<<i<<"]["<<j<<"]: ";
           cin>>arr[i][j];
       }
   }
}
//show matrix
void matrix::showMatrix(){
    
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cout<<arr[i][j]<<"\t";       
       }
       cout<<"\n";
   }
}
//Overloading +operator
matrix matrix::operator+(matrix b){
    matrix temp;
    temp.m = m;
    temp.n = n;
    for (int i=0;i<temp.m;i++)
        for(int j=0;j<temp.n;j++){
            temp.arr[i][j]=arr[i][j]+b.arr[i][j];
        }
    return temp;
}

int main(){
    matrix m1,m2,m3;
    cout<<"Enter 1st matrix: "<<endl;
    m1.getMatrix();
    cout<<"Enter 2nd matrix: "<<endl;
    m2.getMatrix();

   m1.showMatrix();
   m2.showMatrix();

   m3=m1+m2;
   m3.showMatrix();

    return 0;
}