/* The new operator obtains memory from the operating system and returns a pointer to its starting point. 
To ensure safe and efficient use of memory , the new operator is matched by a corresponding delete operator that returns
memory to the operating system.*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char *str="The journey of thousand miles begins with a single steps.";
    int len= strlen(str);           //get length of str
    char *ptr;                      //make a pointer to char
    ptr = new char[len+1];          //set aside memory: string+'\0'
    strcpy(ptr,str);                //copy str to new memory area ptr
    cout<<endl<<"ptr= "<<ptr;       //show that str is now in ptr
    delete ptr;
    return 0;
}