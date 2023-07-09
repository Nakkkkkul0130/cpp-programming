#include <iostream>
using namespace std;

class student {

    public:           // used public here because we can access all the properties of a class anywhere rather than in class only
    int roll_no;
    int age;
};

int main()
{
    // creating object 
    student s1, s2, s3, s4;
    s1.roll_no = 07;
    s1.age = 19;

    cout<<s1.age<<endl;
    cout<<s1.roll_no<<endl;

}