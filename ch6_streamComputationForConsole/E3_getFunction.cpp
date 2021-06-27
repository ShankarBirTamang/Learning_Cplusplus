#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
 int main(){
     char ch;
     ifstream infile("Test.txt");
     while(infile){
         infile.get(ch);
         cout<<ch;
     }
     return 0;
 }