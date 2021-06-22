/*WAP that can store Department ID and Department name with constructor. Also write destructor in the same class
and show that objects are destroyed in the reverse order of creation with suitable message.
*/
#include<iostream>
#include<cstring>
using namespace std;

class department{
    private:
        int DepartmentID ;
        char Dname[20];
        static int count;
    public :
        department(char *DN, int did){
            cout<<++count<<" Object created."<<endl;
            strcpy(Dname,DN);
            DepartmentID = did;
            cout<<"Department Id: "<<DepartmentID<<endl;
            cout<<"Department Name: "<<Dname<<endl;
        }
        ~department(){
            cout<<count--<<" Objects destroyed."<<endl;
        }
};
int department::count;
int main(){
    department D1("Computer", 1), D2("Electronics",2), D3("Electrical",3);
    return 0;
}