/* WAP to make simple library management system of a college. Your program should retrieve and store the information.
(Book Name, Book ID, Number of books and purchase date.)Search a specific record of book using id
*/
#include<iostream>
#include<fstream>
#include<process.h>
using namespace std;

class Book{
    char name[40];
    int ID;
    int num_of_Book;
    long int purchase_date;

    public:
        void getdata(){
            cout<<"Enter Book's Name: ";
            cin>>name;
            cout<<"Enter Book's id: ";
            cin>>ID;
            cout<<"Enter the number of Books: ";
            cin>>num_of_Book;
            cout<<"Enter the purchase date: ";
            cin>>purchase_date;
        }
        void showdata(){
            cout<<"Book's Name: "<<name<<endl;
            cout<<"Book's Id: "<<ID<<endl;
            cout<<"Number of Books: "<<num_of_Book<<endl;
            cout<<"Purchase Date: "<<purchase_date<<endl;
        }
        int search(int i){
            if(ID==i)
                return 1;
            else 
                return 0;
        }
        void inputRecord();
        void displayRecord();
        void displayAllRecord();
};
void Book::inputRecord(){
    fstream file;
    file.open("library.txt",ios::in|ios::out|ios::binary|ios::app);
    Book books;
    char ch;
    do{
        cout<<"\nEnter books information: "<<endl;
        books.getdata();
        file.write((char*)&books,sizeof(books));
        cout<<"\nEnter another books information ? (y/n) ";
        cin>>ch;
    }while(ch=='y'|ch=='Y');
    file.close();
}

void Book::displayRecord(){
    fstream file;
    file.open("library.txt",ios::in|ios::out|ios::binary);
    int id , flag = 0;
    Book books;
    cout<<"\nEnter Book's id to get its detail information: ";
    cin>>id;
    do{
        if(books.search(id))
        {
            books.showdata();
            flag = 1;
            break;
        }
    }while(file.read((char*)&books,sizeof(books)));
    if(flag = 0)
        cout<<"--> Not found any Book with that ID."<<endl;
    file.close();
}

void Book::displayAllRecord(){
    Book books;
    fstream file;
    file.open("library.txt",ios::in|ios::out|ios::binary);
    file.seekg(0);
    file.read((char*)&books,sizeof(books));
    while(!file.eof()){
        cout<<"\nBooks information: "<<endl;
        cout<<"-------------------"<<endl;
        books.showdata();
        file.read((char*)&books,sizeof(books));
    }
    file.close();
}

int main(){
    int n;
    Book books;
    while(1){
        cout<<"\nEnter number between 1-4 only."<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"1.Input Record."<<endl;
        cout<<"2.Search by ID number."<<endl;
        cout<<"3.Show all Records."<<endl;
        cout<<"4.Exit."<<endl;
        cout<<"====>> ";
        cin>>n;

        switch (n)
        {
        case 1:
           books.inputRecord();
            break;
        case 2:
           books.displayRecord();
            break;
        case 3:
           books.displayAllRecord();
            break;
        case 4:
           exit(0);
            break;
        
        default:
            cout<<"Enter number between 1-4 only."<<endl;
            break;
        }
    }
    return 0;
}