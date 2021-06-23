/* Create a class complex with two member variables real and imaginary of type float.
Write default , parameterized and copy constructors. Make necessary function
to display the state of the object on the screen. Overload arithmetic assignment
operator "+=" and stream operator ">>". Write main function to test the class.
*/

#include<iostream>
using namespace std;

class complex{
    private:
        float real;
        float img;
    public:
        complex(){              //default constructor
            real = 0;
            img = 0;
        }
        complex(float r, float i){      //parameterized constructor
            real = r;
            img = i;
        }
        complex(complex &o){        // copy constructor
            real = o.real;
            img = o.img;
        }
        void display(){
            if (img<0)
             cout<<"\n("<<real<<" -j "<<(-1)*img<<")"<<endl;
            else
             cout<<"\n("<<real<<" +j "<<img<<")"<<endl;
        }
        void operator +=(complex);  //Add operator overloading
        friend istream &operator>>(istream & , complex &);  //friend function
        friend ostream &operator<<(ostream & , complex &);  //friend function
};
void complex::operator+=(complex comp){ //adds default and complex object'comp'
    real += comp.real;
    img += comp.img;
}
istream &operator>>(istream& input, complex &c){
    cout<<"Enter real part: ";
    input>>c.real;
    cout<<"Enter imaginary part: ";
    input>>c.img;
    return input;
}
ostream &operator<<(ostream& output, complex &c){
    if( c.img<0)
        output<<"\n("<<c.real<<" -j "<<(-1)*c.img<<")"<<endl;
    else
        output<<"\n("<<c.real<<" +j "<<c.img<<")"<<endl;
    return output;
}

int main(){
    complex c1(2,3);        //Parameterized constructor call
    complex c3;             //Default constructor call
    cout<<"Initial value of c1 object is : ";
    c1.display();
    cout<<"Initial value of c3 object is : ";
    c3.display();
    cout<<"Copying data of c1 object to c2: ";
    complex c2(c1);         //Copy constructor call
    c2.display();

    //Testing overloading += operator
    c1+=c2;     
    cout<<"The value of c1 after assigning '+=' operator overloading : ";
    c1.display();

    //Testing overloading '<<' and '>>' operator
    complex c4;
    cin>>c4;
    cout<<"The complex number is : ";
    cout<<c4;

    return 0;
}