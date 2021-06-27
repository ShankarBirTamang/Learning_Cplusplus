/* WAP to make billing system of a department store . 
Your program should store and retrieve data to/from files.
Use manipulators to display the record in proper formats.
*/
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class department_store{
    int trans_id , bill_no;
    char qty1[10],qty2[10];
    unsigned int trans_date;

    public:
        void getdata(){
            cout<<"\nEnter transaction ID: ";
            cin>>trans_id;
            cout<<"Enter Bill number: ";
            cin>>bill_no;
            cout<<"Enter Firt price of Quantity: ";
            cin>>qty1;
            cout<<"Enter Second price of Quantity: ";
            cin>>qty2;
        }
        void displayall(department_store s){
            fstream file;
            file.open("department.txt",ios::in|ios::out|ios::app);
            file.seekg(0,ios::end); //to check emptiness of file
            int a = file.tellp();
            file.seekg(0);
            
            cout<<"\nRecord of ITEM:"<<endl;
            cout<<"---------------"<<endl;
            cout<<setw(15)<<"Transaction ID";
            cout<<setw(15)<<"Bill Number"<<setw(20)<<"Firts Quantity";
            cout<<setw(20)<<"Second Quantity";
            cout<<endl;
            if(a!=0)
                {
                    while(file.read((char*)&s,sizeof(s)))
                        s.showdata();
                }
            else    
                cout<<"\nFile is empty..."<<endl;
        }
        void showdata(){
            
            cout<<setw(15)<<trans_id;
            cout<<setw(15)<<bill_no;
            cout<<setw(20)<<qty1;
            cout<<setw(20)<<qty2;
            cout<<endl;

        }
        void add(department_store);
};
void department_store::add(department_store b){
    fstream file;
    file.open("department.txt",ios::in|ios::app|ios::out);
    cout<<"Item record"<<endl;
    b.getdata();
    file.write((char*)&b,sizeof(b));
    file.close();
}

int main(){
    department_store b;
    b.add(b);
    b.displayall(b);
    return 0;
}