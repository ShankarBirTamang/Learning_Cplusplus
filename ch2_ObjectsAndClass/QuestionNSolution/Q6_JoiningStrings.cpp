// write a program to join two strings using dynamic constructor concept.

#include<iostream>
#include<cstring>
using namespace std;

class str{
    private:
        int len;
        char * name;
    public:
        str(){
            len = 0;
            name = new char[len+1];
        }
        str(char *s){
            len = strlen(s);
            name = new char[len+1];
            strcpy(name,s);
        }
        void show(){
            cout<<"Name is : "<<name<<endl;
        }
        void join(str &, str &);
};
void str::join(str &a,str &b){
    len = a.len+b.len;
    delete name;
    name = new char[len+1];
    strcpy(name,a.name);
    strcat(name,b.name);
}

int main(){
    char *f=" Object ";
    str first(f), second("Oriented ") , third(" Programming. "), fourth , fifth;
    fourth.join(first,second);
    fifth.join(fourth, third);
    first.show();
    second.show();
    third.show();
    fourth.show();
    fifth.show();
    return 0;
}