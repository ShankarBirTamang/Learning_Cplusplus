#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

template <class T>
T find_max(T a, T b){
    return(a>b)?a:b;
}

char *find_max(char *a, char *b){
    char *result;
    if(strcmp(a,b)>0)
        result = a;
    else   
        result = b;
    return result;
}

int main(){
    int i=10, j=20;
    cout<<find_max(i,j)<<endl;

    float a=3.14 , b=-6.28;
    cout<<find_max(a,b)<<endl;

    char ch='A', dh='Z';
    cout<<find_max(ch,dh)<<endl;

    char str1[]="apple", str2[]="banana";
    cout<<find_max(str1,str2)<<endl;

    return 0;
}