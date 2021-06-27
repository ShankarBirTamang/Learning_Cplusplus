/* wap that will have a class with members , name , rollno, director and filename and other member function
as required. All of the objects of that class will share two members directory and filename where the information of the student is stored.
*/
#include<iostream>
using namespace std;

class student {
    char name[30];
    int rollno;
    static char directory[30];
    static char filename[30];

    public:
        void input(){
            cout<<"Enter the name of student: ";
            cin>>name;
            cout<<"Enter the rollno of student: ";
            cin>>rollno;
        }
        void display(){
            cout<<"\nName: "<<name;
            cout<<"\nRollno: "<<rollno;
            cout<<"\nDirectory: "<<directory;
            cout<<"\nFilename: "<<filename<<endl;
        }
};
char student::directory[30]="Purwanchal";
char student::filename[30]="2078";

int main(){
    student s1, s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    return 0;
}