#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char str[]="This is test program for put()function. ";
    ofstream outfile("Test.txt");  //create file for output
    for (int j=0;j<strlen(str);j++)     //for each character
        outfile.put(str[j]);        //write it to file
        return 0;
}