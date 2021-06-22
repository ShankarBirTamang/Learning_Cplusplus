/* WAP to convert object of a class that represent weight of gold in tola to obect of class that represent weight in grams.
(1tola = 11.664gm)
*/
#include<iostream>
using namespace std;
class gram{
    private:
        float w1;
    public:
        gram(){w1=0;}
        gram(float w){
            w1 = w;
        }
        float getgram(){
            return w1;
        }
        void display(){
            cout<<"\nWeight in gram : "<<getgram()<<"gm"<<endl;
        }
};
class tola{
    private:
        float w2;
    public:
        tola(){ w2=0; }
        tola(float w){
            w2 = w;
        }
        void input(){
            cout<<"Enter weight in tola: ";
            cin>>w2;
        }
        operator gram(){
            float g1;
            g1= w2 * 11.64;
            return (gram(g1));
        }
};
int main(){
    gram g1;
    tola t1;
    t1.input();
    g1=t1;
    g1.display();
    return 0;
}