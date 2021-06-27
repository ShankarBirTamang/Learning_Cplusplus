/* Create a class student with member variables roll , name , telephone and score. Member functions to get
the input from keyboard and display state of object on the screen . Also write two member functions one to store the object in
disk file student.dat and other to read the record from the file. Write main function to create an object, take details from
user and store the details in file. Also , display the record from file.
*/
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

class student{
    int rollno;
    char name[40];
    int telephone;
    int score;

    public:
        void getdata(){
            cout<<"\nEnter Name of stuents: ";
            cin>>name;
            cout<<"Enter Roll no: ";
            cin>>rollno;
            cout<<"Enter telephone number: ";
            cin>>telephone;
            cout<<"Enter score: ";
            cin>>score;
        }
        void showdata(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollno<<endl;
            cout<<"Telephone Number: "<<telephone<<endl;
            cout<<"Score: "<<score<<endl;
        }
        void inputRecord();
        void displayRecord();
};

void student::inputRecord(){
    fstream file;
    file.open("student.dat",ios::in|ios::out|ios::binary|ios::app);
    student s1;
    cout<<"Enter Students data: ";
    s1.getdata();
    file.write((char*)&s1,sizeof(s1));
}

void student::displayRecord(){
    student s1;
    fstream file;
    file.open("student.dat",ios::in|ios::out|ios::binary);
    file.seekg(0);
    file.read((char*)&s1,sizeof(s1));
    while(!file.eof()){
        cout<<"\nStudent record: "<<endl;
        s1.showdata();
        file.read((char*)&s1,sizeof(s1));
    }
}

int main(){
    student s;
    s.inputRecord();
    s.displayRecord();
    return 0;
}

