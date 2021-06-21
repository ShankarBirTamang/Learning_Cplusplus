/* 
WAP with class called book , which will represent title, author , price , publisher etc. Use constructor
for initialization of objects and use dynamic memory allocation for string type member and use destructor in
a proper way. 
*/

#include<iostream>
#include<cstring>
using namespace std;

class book{
    private:
        char* title;
        char* author;
        char* publisher;
        float price;
    public:
        book(){
            int length=0;
            title = new char[length+1];
            author = new char[length+1];
            publisher = new char[length+1];
            price = 0 ;
        }
        book(char* t, char* a , char* p , float p1){
            int length;
            length=strlen(t);
            title = new char[length];
            strcpy(title,t);

            length=strlen(a);
            author = new char[length];
            strcpy(author,a);

            length=strlen(p);
            publisher = new char[length];
            strcpy(publisher,p);

            price = p1;
        }
        book(book &b){
            author = b.author;
            title = b.title;
            publisher = b.publisher;
            price = b.price;
        }
        void display(){
            cout<<endl<<"Title of book : "<<title<<endl;
            cout<<"author of book : "<<author<<endl;
            cout<<"publisher of book : "<<publisher<<endl;
            cout<<"price of book : "<<price<<endl;
        }
        ~book(){
            cout<<endl<<"Destroying object..."<<endl;
            delete []author;
            delete []title;
            delete []publisher;
        }
};

int main(){
    book b1("C++","Bjarne","Nepali Pustakalya", 1000);
    b1.display();
    book b2(b1);
    b2.display();
    return 0;
}