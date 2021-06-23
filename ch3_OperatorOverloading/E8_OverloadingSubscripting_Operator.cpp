#include<iostream>
using namespace std;
const int SIZE = 6;

class safearray
{
private:
    int arr[SIZE];
public:
    safearray(){
        
        for(int i=0;i<SIZE;i++){
            cout<<"Enter arr["<<i<<"]: ";
            cin>>arr[i];
        }
    }
    int &operator[](int i){
        if(i<0 || i>=SIZE ){
            cout<<"Index out of bound."<<endl;
            //return first element
            return arr[0];
        }
        return arr[i];
    }
};

int main(){
    
    safearray A;

    cout<< "\nValue of A[2]: "<<A[2]<<endl;
    cout<< "Value of A[4]: "<<A[4]<<endl;
    cout<< "Value of A[6]: "<<A[6]<<endl;
    cout<< "Value of A[8]: "<<A[8]<<endl;
    return 0;
}

