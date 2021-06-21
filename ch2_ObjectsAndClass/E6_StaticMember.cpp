/* Static member data is not duplicated for each object ; rather they are shared by all object of a class.
Static variables are normally used in programming to maintain values common to the entire class. */

#include<iostream>
using namespace std;

class test{
        int code ;
        static int count;
    public:
        void setcode(){
            code=++count;
        }
        void showcode(){
            cout<<"Object Number : "<<code<<endl;
        }
        static void showcount(){            //static member function
            cout<<"count: "<<count<<endl;
        }
};
int test::count;            //static member variable must be defined outside the class

int main(){
    test t1,t2;
    t1.setcode();
    t2.setcode();
    t1.showcount();
    t2.showcount();
    test::showcount();
    test t3;
    t3.test::setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}

/* 
In above program showcount() is a static member function so it can be called using name of class ie. test or 
the object of test class i.e. t1, t2,t3. As count is static data member and it is initialize to 0, each time when the 
object of class invokes setcode() function, the count is incremented.
    So the total number of count is 3. As static data member of class is common to all the objects of class so when
    we invoke showcode() function, it display the different code but the value of count is same i.e. 3.
*/