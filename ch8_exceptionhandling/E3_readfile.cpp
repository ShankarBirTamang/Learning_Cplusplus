//Write a program to read the content of the file and use exception handling if file doesnot exist.

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char msg[]="No such file. ";
    char data;
    //
    // char str[]="This is test program for put()function. ";
    // ofstream outfile("test.txt");  //create file for output
    // for (int j=0;j<strlen(str);j++)     //for each character
    //     outfile.put(str[j]);        //write it to file
    //     //
    ifstream fin;
    try{
        fin.open("test.txt");
        if(fin.fail())
            throw msg;
        fin>>data;
        while(fin){
            cout<<data;
            fin>>data;
        }
    }
    catch(char st[]){
        cout<<st;
    }
    fin.close();

    return 0;
}