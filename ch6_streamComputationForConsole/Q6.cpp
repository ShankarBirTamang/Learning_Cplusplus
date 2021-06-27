// WAP that stores information of a students in a file and display the file's content in descending order according to their marks obtained.

#include<iostream>
#include<fstream>
using namespace std;

class Student{
    char name[30];
    public:
     int marks;
     void getdata(){
         cout<<"\nEnter name: ";
         cin>>name;
         cout<<"Enter marks: ";
         cin>>marks;
     }
     void showdata(){
         cout<<"Name: "<<name<<endl;
         cout<<"Marks obtained: "<<marks<<endl;
     }
};
int main(){
    Student std[3];
    fstream file;
    file.open("std.txt",ios::in|ios::out|ios::app);
    //writing file
    for(int i=0; i<3;i++)
    {
        std[i].getdata();
        file.write((char*)&std[i],sizeof(std[i]));
    }
    //reading file
    file.seekg(0);
    int i = 0;
    while(!file.eof()){
        file.read((char*)&std[i],sizeof(std[i]));
        i++;
    }

    //Descending order
    Student temp;
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++)
           {
               if(std[j].marks<std[j+1].marks){
                    temp = std[j];
                    std[j]  = std[j+1];
                    std[j+1] = temp;
               }
           }
    }

    cout<<"\nShowing Students information:"<<endl;
    cout<<"-----------------------------"<<endl;
    for(i=0;i<3;i++){
        std[i].showdata();
        cout<<endl;
    }
return 0;
}