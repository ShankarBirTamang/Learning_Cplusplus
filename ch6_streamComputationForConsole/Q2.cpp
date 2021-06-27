/* Write an interactive program to maintain student database.
The information to be stored in the database is registration number, name , program, contact number and address.
The user must be able to access all detail about a student by entering the registration number.
*/

#include<iostream>
#include<fstream>
#include<process.h>
using namespace std;

class student{
    int reg_no;
    char name[40];
    char program[20];
    long int contact_no;
    char address[40];

    public:
    void getdata(){
        cout<<"Enter Registration number of student: ";
        cin>>reg_no;
        cout<<"Enter Name of Student: ";
        cin>>name;
        cout<<"Enter program of Student: ";
        cin>>program;
        cout<<"Enter contact number: ";
        cin>>contact_no;
        cout<<"Enter Address of student: ";
        cin>>address;
    }
    void showdata(){
        cout<<"\nRegistration number: "<<reg_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Program: "<<program<<endl;
        cout<<"Contact Number: "<<contact_no<<endl;
        cout<<"Address: "<<address<<endl;
    }
    int search(int r){
        if(reg_no==r)
            return 1;
        else 
            return 0;
    }
    void showRecord();
    void inputRecord();
};

void student::showRecord(){
    student pers;
    int reg, flag = 0;
    fstream file;
    file.open("student.txt",ios::in|ios::out|ios::binary);
    cout<<"\nEnter Registration number: "<<endl;
    cin>>reg;
    do{
        if(pers.search(reg)){
            pers.showdata();
            flag =1;
            break;
        }
    }while(file.read((char*)&pers,sizeof(pers)));
    if (flag==0)
        cout<<"Not found"<<endl;
        file.close();
}

void student::inputRecord(){
    student pers;
    fstream file;
    file.open("student.txt",ios::in|ios::out|ios::binary|ios::app);
    char ch;
    do{
        cout<<"\nEnter student's data: "<<endl;
        pers.getdata();
        file.write((char*)&pers,sizeof(pers));
        cout<<"\n Enter another system information (y/n)?";
        cin>>ch;
    }while(ch=='y'|ch=='Y');
    file.close();
}

int main(){
    int n;
    student pers;
    while(1){
        cout<<"\n1.Input Record."<<endl;
        cout<<"2.Search by Registration number."<<endl;
        cout<<"3.Exit."<<endl;
        cin>>n;
        switch(n){
            case 1:
                pers.inputRecord();
                break;
            case 2:
                pers.showRecord();
                break;
            case 3:
                exit(0);
                break; 
            default:
                cout<<"Enter number between 1-3 only"<<endl;
        }
    }

    return 0;
}