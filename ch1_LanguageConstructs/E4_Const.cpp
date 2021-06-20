/*C++ supports a new constant qualifier for defining a variable, whose value cannot be changed once it is assigned with 
a value at the time of variable definition. The qualifier used in C++ to define such variables is the const qualifier. 
Syntax : const [Data Type] Variable Name = constant value ;
*/

#include<iostream>
using namespace std;
const float PI = 3.1452;

int main(){
    float radius , area;
    cout<<"Enter Radius of circle: "<<endl;
    cin>>radius;
    area = PI * radius * radius ;
    cout << "Area of Circle : "<<area;
    return 0;
}