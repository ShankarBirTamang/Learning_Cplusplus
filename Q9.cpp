/* Write a program to store and retrieve the information of patient.
(Patient ID,name, address, age and type )in hospital management system.
*/

#include<iostream>
#include<fstream>
using namespace std;

class patient{
    int patientID;
    char name[40];
    char address[30];
    int age;
    char ptype[30];

    public:
        void getdata(){
            cout<<"\nEnter Patient ID: ";
            cin>>patientID;
            cout<<"Enter Patient name: ";
            cin>>name;
            cout<<"Enter Address: ";
            cin>>address;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter patient's type: ";
            cin>>ptype;
        }
        void showdata(){
            cout<<"\nPatient ID: "<<patientID<<endl;
            cout<<"Paitent Name: "<<name<<endl;
            cout<<"Patient Address: "<<address<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Patient's type: "<<ptype<<endl;
        }
        void inputRecord();
        void displayRecord();
};
void patient::inputRecord(){
    patient pat;
    fstream file;
    file.open("patient.txt",ios::in|ios::out|ios::app|ios::binary);
    char ch;
    do{ 
        pat.getdata();
        file.write((char*)&pat,sizeof(pat));
        cout<<"Do you want to add another patient's information: (y/n)? ";
        cin>>ch;
    }while(ch=='y'|ch=='Y');
    file.close();
}

void patient::displayRecord(){
    patient pat;
    fstream file;
    file.open("patient.txt",ios::in|ios::out|ios::binary);
    file.seekg(0);
    file.read((char*)&pat,sizeof(pat));
    cout<<"\nPatient's information."<<endl;
    cout<<"-----------------------";
    while(!file.eof()){
        pat.showdata();
        file.read((char*)&pat,sizeof(pat));
    }
    file.close();
}

int main()
{
    patient p;
    int n;
    while(1){
        cout<<"\nSelect any number: "<<endl;
        cout<<"-------------------"<<endl;
        cout<<"1.Input Record"<<endl;
        cout<<"2.Display Record"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"==> ";
        cin>>n;

        switch (n)
        {
        case 1:
            p.inputRecord();
            break;
        case 2:
            p.displayRecord();
            break;
        case 3:
            exit(0);
            break;
        
        default:
            cout<<"Enter number between 1 and 3 only."<<endl;
            break;
        }
    }
    return 0;
}