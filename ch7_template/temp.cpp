#include<iostream>
using namespace std;
const int MAX =20;

template<class T>
class stack{
    int top;
    T arr[MAX];
    public:
        stack();
        void push(T data);
        T pop();
        int size();
        bool isfull();
        bool isempty();
};

template<class T>
stack<T>::stack() { top=-1; }

template<class T>
void stack<T>::push(T data){
    if(isfull())
        cout<<"\nStack is full."<<endl;
    else{
        arr[++top]=data;
        cout<<"Inserted element: "<<arr[top]<<endl;
    }
}

template<class T>
T stack<T>::pop(){
    if(isempty())
        cout<<"\nStack is empty."<<endl;
    return arr[top--];
}

template<class T>
int stack<T>::size(){
    return top+1;
}

template<class T>
bool stack<T>::isempty(){
    if(top==-1)
        return 1;
    else   
        return 0;
}

template<class T>
bool stack<T>::isfull(){
    if(top==MAX-1)
        return 1;
    else   
        return 0;
}

int main(){
    cout<<"\nStacks for integer."<<endl;
    stack<int> s1;
    cout<<"Size of Stack: "<<s1.size()<<endl;
    s1.push(11);
    s1.push(12);
    s1.push(13);
    cout<<"Size of Stack: "<<s1.size()<<endl;
    cout<<"Number popped: "<<s1.pop()<<endl;
    cout<<"Number popped: "<<s1.pop()<<endl;
    cout<<"Number popped: "<<s1.pop()<<endl;
    cout<<"Size of Stack: "<<s1.size()<<endl;

    cout<<"\nStacks for floats."<<endl;
    stack<float> s2;
    cout<<"Size of Stack: "<<s2.size()<<endl;
    s2.push(11.5);
    s2.push(12.5);
    s2.push(13.5);
    cout<<"Size of Stack: "<<s2.size()<<endl;
    cout<<"Number popped: "<<s2.pop()<<endl;
    cout<<"Number popped: "<<s2.pop()<<endl;
    cout<<"Number popped: "<<s2.pop()<<endl;
    cout<<"Size of Stack: "<<s2.size()<<endl;

    return 0;
}