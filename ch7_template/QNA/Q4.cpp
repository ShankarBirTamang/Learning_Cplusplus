/* Write a function template for the function power() which has two parameters base and exp and returns base^exp. 
The type of base is the parameter to the template and exp is int. If the exp is negative, then it must be 
converted to its positive equivalent. For example 2^3 and 2^-3 must both return 8.
*/

#include<iostream>
#include<math.h>
using namespace std;

template <class T>
T power(T base, T exp)
{
    T result = 1;
    for(int i=0;i<abs(exp);i++){
        result = result * base;
    }
    return (result);
}

int main(){
    int base=2, exp=8, k;
    int result = power<int>(base, exp);
    cout<<"power("<<base<<","<<exp<<"): "<<result<<endl;

    long g=10 , m=5 , n;
    k = power<int>(g,m);
    
    base =3 , exp =-3;
    n = power<long>(base,exp);

    cout<<"power("<<g<<","<<m<<"): "<<k<<endl;
    cout<<"power("<<base<<","<<exp<<"): "<<n<<endl;
    return 0;

}