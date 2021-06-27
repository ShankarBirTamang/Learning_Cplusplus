/* Create class student to store Name , Age and CRN of students. Write a program to write records of N nubmers of students into the file. 
And your program should search complete information of students from file according to CRN entered by user and display it.
*/
#include<iostream>
#include<fstream>
#include<process.h>
using namespace std;

class Student{
    char name[40];
    int age;
    int CRN; //college roll number

    public:
        void getdata(){
            cout<<"\nEnter Name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter College Roll number: ";
            cin>>CRN;
        }
        void showdata(){
            cout<<"College Roll Number: "<<CRN<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
        int search(int r)
        {
            if(CRN==r)
                return 1;
            else   
                return 0;
        }
        void inputRecord();
        void displayRecord();
};
void Student::inputRecord(){
    fstream file;
    file.open("students.txt",ios::in|ios::out|ios::binary|ios::app);
    int n;
    cout<<"\nEnter the no of students: "<<endl;
    cin>>n;
    Student std[n];

    for(int i=0;i<n;i++){
        std[i].getdata();
        file.write((char*)&std[i],sizeof(std[i]));
    }
    file.close();
}
void Student::displayRecord(){
    Student std;
    int rno, flag =0;
    fstream file;
    file.open("students.txt",ios::in|ios::out|ios::binary);
    file.seekg(0);
    cout<<"\nEnter the rollno of Students to find its detail: ";
    cin>>rno;
    cout<<"------------------------------------------------"<<endl;
    do{
        if(std.search(rno)){
            std.showdata();
            flag = 1;
            break;
        }
    }while(file.read((char*)&std,sizeof(std)));
    if (flag==0)
        cout<<"\n==> No students with given roll number."<<endl;
    file.close();
}
int main(){
    Student s;
    int n;
    while(1){
    cout<<"\nSelect an option: "<<endl;
    cout<<"------------------"<<endl;
    cout<<"1.Input Record"<<endl;
    cout<<"2.Search by Roll no"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"==> ";
    cin>>n;

    switch (n)
    {
    case 1:
        s.inputRecord();
        break;
    case 2:
        s.displayRecord();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout<<"Select a number between 1 and 3."<<endl;
        break;
    }
    }
    return 0;
}

